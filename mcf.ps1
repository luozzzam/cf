param(
    [string]$param
)

# 正则表达式用于分割contestID和problemID
$contestID = $param -replace '([0-9]+)([a-z])','$1'
$problemID = $param -replace '([0-9]+)([a-z])','$2'

# 创建contestID目录并进入
md $contestID -ErrorAction SilentlyContinue
cd $contestID

# 创建problemID目录并进入
md $problemID -ErrorAction SilentlyContinue
cd $problemID

