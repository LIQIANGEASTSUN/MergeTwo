
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02bff75c(int param_1,uint param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)(_UNK_02bff954 + 0x2bff77c);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bff958 + 0x2bff790));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x2188,0);
  if (iVar1 == 0) {
    if (-1 < (int)param_2) {
      iVar1 = *(int *)(param_1 + 0x44);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if ((int)param_2 < *(int *)(iVar1 + 0xc)) {
        iVar1 = *(int *)(param_1 + 0x44);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        if (*(uint *)(iVar1 + 0xc) <= param_2) {
          func_0x014388e8();
        }
        iVar1 = *(int *)(iVar1 + param_2 * 4 + 0x10);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        uVar3 = *(undefined4 *)(iVar1 + 0xc);
        if (*(int *)(**(int **)(_UNK_02bff95c + 0x2bff84c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar1 = func_0x024eec50(uVar3,0,0);
        if (iVar1 == 0) {
          iVar1 = *(int *)(param_1 + 0x44);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          if (*(uint *)(iVar1 + 0xc) <= param_2) {
            func_0x014388e8();
          }
          iVar1 = *(int *)(iVar1 + param_2 * 4 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x02c27b2c(iVar1,param_3,0);
          if (param_3 != 0) {
            iVar1 = *(int *)(param_1 + 0x44);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            if (*(uint *)(iVar1 + 0xc) <= param_2) {
              func_0x014388e8();
            }
            iVar1 = *(int *)(iVar1 + param_2 * 4 + 0x10);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = *(int *)(iVar1 + 0xc);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x024eecb8(iVar1,0);
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            (*(code *)&UNK_05d4e288)(iVar1,0x3d,0);
            return;
          }
        }
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x2188,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028849f0(iVar1,param_1,param_2,param_3,0);
  }
  return;
}

