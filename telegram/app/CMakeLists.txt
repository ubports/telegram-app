set(CURDIR ${CMAKE_CURRENT_LIST_DIR})

# set Telegrams sources (used in main cmake file)
set(TELEGRAM_SOURCES
	${CURDIR}/cutegramenums.cpp
	${CURDIR}/emojis.cpp
	${CURDIR}/emoticonsmodel.cpp
	${CURDIR}/main.cpp
	${CURDIR}/main.my.cpp
	${CURDIR}/stickerfilemanager.cpp
	${CURDIR}/telegram.cpp
	${CURDIR}/textemojiwrapper.cpp
	${CURDIR}/unitysystemtray.cpp


	# needed to trigger moc generation
	${CURDIR}/telegram.h
)
