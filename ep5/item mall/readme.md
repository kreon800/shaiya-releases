**known bugs**
* crash when buying
*solution*
```asm
04096B59 call msvcrt.memset
```

```diff
- not compatible with pet.dll -
```
**ps_game**
* new item mall solution
* new console commands
```asm
/ntcn charname message
/ntcid charid message
```

**ps_dbAgent**
* calls usp_Read_User_CashPoint_UsersMaster
