# Install test driver
file(GLOB TEST_DRIVER_SCRIPT onert-test)
install(PROGRAMS ${TEST_DRIVER_SCRIPT} DESTINATION test)

# Commands don't have execute permission itself
install(DIRECTORY command DESTINATION test)

# Install models test script
file(GLOB MODEL_TEST_SCRIPT "models/run_test.sh")
install(PROGRAMS ${MODEL_TEST_SCRIPT} DESTINATION test/models)

# Install models test config
file(GLOB TFLITE_CONFIG_DIR models/tflite)
install(DIRECTORY ${TFLITE_CONFIG_DIR} DESTINATION test/models)

# Install test list
file(GLOB TEST_LIST_DIR list)
install(DIRECTORY ${TEST_LIST_DIR} DESTINATION test)
