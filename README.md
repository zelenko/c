# c
NppExec command to save and execute in Notepad++:

```
npp_save
gcc -m32 "$(FULL_CURRENT_PATH)" -o "$(CURRENT_DIRECTORY)\$(NAME_PART).exe"  -std=c11
npp_run cmd /K (cd /D "$(CURRENT_DIRECTORY)" && "$(NAME_PART).exe" && echo. && echo. && pause && exit)
```
