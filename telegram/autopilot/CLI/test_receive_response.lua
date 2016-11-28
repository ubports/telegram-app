function on_msg_receive (msg)

	status_online(ok_cb, false);

	-- Uncomment, if debugging, to see all properties of objects
	-- print ("Message From data...")
	-- getAllData(msg.from,nil)
	-- print ("Message To data...")
	-- getAllData(msg.to,nil)
	-- print ("Message data...")
	-- getAllData(msg,nil)

	-- if (msg.media ~= nil) then
	-- 	print ("Message Media data...")
	-- 	getAllData(msg.media,nil)
	-- end

	if msg.out then
		return
	end

	if (msg.text == nil) and (msg.media == nil) then
		return
	end

	if (msg.to.peer_type == "encr_chat") or (msg.to.peer_type == "chat") then
		from_name = msg.to.print_name;
		sleep_timer = 2;
	else
		from_name = msg.from.print_name;
		sleep_timer = 3;
	end

	if (msg.text ~= nil) and string.find(msg.text, "INSTANT") then
		sleep_timer = 0;
	end

	if (msg.media ~= nil) then
		sleep_timer = 3;
	end
	
	if (msg.text ~= nil) then

		-- wait for sender to run 'sending' confirmation checks
		sleep(sleep_timer);
		
		-- mark the message as read
		mark_read(from_name, ok_cb, false);

		if string.find(msg.text, "DO NOT REPLY") then
			return
		end

		-- generate and send an image response, if asked for
		if string.find(msg.text, "SEND IMAGE") then
			image_location = (string.sub( debug.getinfo(1).source, 2, string.len(debug.getinfo(1).source) - 25 ));
			image_file = "canonical-logo.png";
			send_photo (from_name, (image_location .. image_file), ok_cb, false);
		else
			-- generate and send a text response
			reply = ("ReplyTo:" .. msg.text);
			send_msg (from_name, reply, ok_cb, false);

		end
	end

	if (msg.media ~= nil) then

		-- wait for sender to run 'sending' confirmation checks
		sleep(sleep_timer);

		mark_read(from_name, ok_cb, false);
	end

	
end


function ok_cb (extra, success, result)

end


function on_our_id (id)

end
 
function on_secret_chat_created (peer)

end
 
function on_user_update (user)

	-- Change status to online
	status_online(ok_cb, false);

end
 
function on_chat_update (user)

	-- Change status to online
	status_online(ok_cb, false);

end
 
function on_get_difference_end ()

	-- Change status to online
	status_online(ok_cb, false);

end
 
function on_binlog_replay_end ()

	-- Change status to online
	status_online(ok_cb, false);

end

-- Helper Methods

-- Sleep function to insert a delay in execution
function sleep(n)
  os.execute("sleep " .. tonumber(n))
end

-- Recursive function to obtain properties of an object
function getAllData(t, prevData)
  -- if prevData == nil, start empty, otherwise start with prevData
  local data = prevData or {}

  -- copy all the attributes from t
  for k,v in pairs(t) do
    data[k] = data[k] or v
    print(string.format("Key: %s, Value:%s", k, data[k]))
  end


  -- get t's metatable, or exit if not existing
  local mt = getmetatable(t)
  if type(mt)~='table' then return data end

  -- get the __index from mt, or exit if not table
  local index = mt.__index
  if type(index)~='table' then return data end

  -- include the data from index into data, recursively, and return
  return getAllData(index, data)
end
