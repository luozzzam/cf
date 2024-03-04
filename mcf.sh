#!/bin/bash

# 获取参数
param="$1"

# 使用正则表达式分割contestID和problemID
contestID=$(echo $param | sed -E 's/([0-9]+)([a-z])/\1/')
problemID=$(echo $param | sed -E 's/([0-9]+)([a-z])/\2/')

# 创建contestID目录并进入，-p选项表示如果目录不存在则创建它
mkdir -p "$contestID"
cd "$contestID"

# 创建problemID目录并进入
mkdir -p "$problemID"
cd "$problemID"

