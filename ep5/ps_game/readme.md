* loads multiple libraries at runtime

**usage**

```asm
005312FB   . E9 972C0200     JMP ps_game.00553F97
```

```asm
00553F97   > 60              PUSHAD
00553F98   . 68 AA3F5500     PUSH ps_game.00553FAA                          ; /FileName = "ps_game.dll"
00553F9D   . FF15 C4415500   CALL DWORD PTR DS:[<&KERNEL32.LoadLibraryA>]   ; \LoadLibraryA
00553FA3   . 61              POPAD
00553FA4   . 5E              POP ESI
00553FA5   . 5F              POP EDI
00553FA6   . 5B              POP EBX
00553FA7   . C9              LEAVE
00553FA8   . C3              RETN
```

```asm
00553FAA   . 70 73 5F 67 61 6D 65 2E 64 6C 6C 00   ASCII "ps_game.dll",0
```
