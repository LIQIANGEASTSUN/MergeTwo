
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02be0bf4(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_02be0e5c + 0x2be0c14);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02be0e60 + 0x2be0c2c));
    func_0x01438628(*(undefined4 *)(_UNK_02be0e64 + 0x2be0c38));
    func_0x01438628(*(undefined4 *)(_UNK_02be0e68 + 0x2be0c44));
    func_0x01438628(*(undefined4 *)(_UNK_02be0e6c + 0x2be0c50));
    func_0x01438628(*(undefined4 *)(_UNK_02be0e70 + 0x2be0c5c));
    func_0x01438628(*(undefined4 *)(_UNK_02be0e74 + 0x2be0c68));
    func_0x01438628(*(undefined4 *)(_UNK_02be0e78 + 0x2be0c74));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x746,0);
  if (iVar1 == 0) {
    if (0 < param_4) {
      do {
        if (param_5 == 0) {
          if (*(int *)(**(int **)(_UNK_02be0e7c + 0x2be0cf4) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02be0e80 + 0x2be0d10));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x029ca78c(iVar1,0);
          if (*(int *)(**(int **)(_UNK_02be0e84 + 0x2be0d40) + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar2 = func_0x03b2c734(**(undefined4 **)(_UNK_02be0e88 + 0x2be0d5c));
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x029b3f20(iVar2,**(undefined4 **)(_UNK_02be0e8c + 0x2be0d80),0);
          if (iVar2 <= iVar1) goto LAB_02be0dd8;
          iVar1 = FUN_02bad050(param_1,param_3);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x1c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x03b77610(iVar1,param_2,**(undefined4 **)(_UNK_02be0e90 + 0x2be0dcc));
        }
        else {
LAB_02be0dd8:
          iVar1 = FUN_02bad050(param_1,param_3);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0x1c);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x03b77858(iVar1,0,param_2,**(undefined4 **)(_UNK_02be0e94 + 0x2be0e18));
        }
        *(undefined1 *)(param_1 + 0x20) = 1;
        if (param_2 == 0) {
          func_0x014388e4();
        }
        FUN_02bd204c(param_1,*(undefined4 *)(param_2 + 8));
        FUN_02bd2354(param_1,param_2,0xffffffff);
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
  }
  else {
    iVar1 = func_0x029540a4(0x746,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028835cc(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}

