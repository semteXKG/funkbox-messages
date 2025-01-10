#/bin/bash

set -e

GOOGLE_PROTOC="/usr/local/bin/protoc"
NANO_PROTOC="/mnt/c/Users/local-semtex/esp32-idf-projects/nanopb-0.4.8-linux-x86/generator-bin/nanopb_generator"
$NANO_PROTOC -D nano/ *.proto
$GOOGLE_PROTOC --c_out=google/ message.proto

cp nano/* ../funkbox-sender/src/proto/
cp nano/* ../funkbox-shifter/src/proto/
cp google/* ../funkbox-display/main/proto/
cp google/* ../funkbox-base/main/proto/
cp google/* ../funkbox-buttons/main/proto
echo "Updated protobuf files"

exit 0
