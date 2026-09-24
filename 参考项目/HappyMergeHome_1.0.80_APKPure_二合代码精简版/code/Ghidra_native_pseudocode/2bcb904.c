
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bdb904(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar5 = (char *)(_UNK_02bdbb68 + 0x2bdb924);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bdbb6c + 0x2bdb938));
    func_0x01438628(*(undefined4 *)(_UNK_02bdbb70 + 0x2bdb944));
    func_0x01438628(*(undefined4 *)(_UNK_02bdbb74 + 0x2bdb950));
    func_0x01438628(*(undefined4 *)(_UNK_02bdbb78 + 0x2bdb95c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5cfb,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad050(param_1,param_3);
    if (iVar1 != 0) {
      iVar1 = FUN_02bad050(param_1,param_3);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0x10) != 0) {
        iVar1 = 0;
        puVar6 = *(undefined4 **)(_UNK_02bdbb7c + 0x2bdba00);
        puVar7 = *(undefined4 **)(_UNK_02bdbb80 + 0x2bdba08);
        while( true ) {
          iVar3 = FUN_02bad050(param_1,param_3);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar3 + 0xc) <= iVar1) break;
          iVar3 = FUN_02bad050(param_1,param_3);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          iVar3 = func_0x03b780b0(iVar3,iVar1,*puVar6);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar3 + 8)) {
            if (*(int *)(**(int **)(_UNK_02bdbb84 + 0x2bdbaa0) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar3 = func_0x014e9518(*puVar7);
            iVar4 = FUN_02bad050(param_1,param_3);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar4 = *(int *)(iVar4 + 0x10);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            iVar4 = func_0x03b780b0(iVar4,iVar1,*puVar6);
            if (iVar4 == 0) {
              func_0x014388e4();
            }
            uVar2 = *(undefined4 *)(iVar4 + 8);
            if (iVar3 == 0) {
              func_0x014388e4();
            }
            iVar3 = func_0x029a6fa8(iVar3,uVar2,0);
            if ((iVar3 != 0) && (*(int *)(iVar3 + 0x30) == param_2)) {
              iVar3 = func_0x02953fd4(0x5cee,0);
              if (iVar3 == 0) {
                uVar2 = FUN_02bd880c(param_1,iVar1,&stack0xffffffe4,param_3);
              }
              else {
                iVar3 = func_0x029540a4(0x5cee,0);
                if (iVar3 == 0) {
                  func_0x014388e4();
                }
                uVar2 = func_0x028b7e50(iVar3,param_1,iVar1,param_3,0);
              }
              return uVar2;
            }
          }
          iVar1 = iVar1 + 1;
        }
      }
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x029540a4(0x5cfb,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x028b7e50(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}

