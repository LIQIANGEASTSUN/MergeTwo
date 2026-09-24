
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bad204(undefined4 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_02bad348 + 0x2bad224);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bad34c + 0x2bad238));
    func_0x01438628(*(undefined4 *)(_UNK_02bad350 + 0x2bad244));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x68a,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad050(param_1,param_3);
    if ((-1 < (int)param_2) && (iVar1 != 0)) {
      iVar1 = FUN_02bad050(param_1,param_3);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = *(int *)(iVar1 + 0x10);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if ((int)param_2 < *(int *)(iVar1 + 0xc)) {
        iVar1 = FUN_02bad050(param_1,param_3);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar3 = **(int **)(_UNK_02bad354 + 0x2bad32c);
        if (iVar1 == 0) {
          func_0x024f83d4();
        }
        if (*(uint *)(iVar1 + 0xc) <= param_2) {
          func_0x05187824(0,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x5c))
          ;
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x034a8a64();
        }
        if (*(uint *)(iVar1 + 0xc) <= param_2) {
          func_0x034a8c14();
        }
        return *(undefined4 *)(iVar1 + param_2 * 4 + 0x10);
      }
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x68a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02880d10(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

