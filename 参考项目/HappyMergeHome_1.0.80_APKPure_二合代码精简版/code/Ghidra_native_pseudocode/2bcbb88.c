
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02bdbb88(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_02bdbe70 + 0x2bdbba8);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bdbe74 + 0x2bdbbbc));
    func_0x01438628(*(undefined4 *)(_UNK_02bdbe78 + 0x2bdbbc8));
    func_0x01438628(*(undefined4 *)(_UNK_02bdbe7c + 0x2bdbbd4));
    func_0x01438628(*(undefined4 *)(_UNK_02bdbe80 + 0x2bdbbe0));
    func_0x01438628(*(undefined4 *)(_UNK_02bdbe84 + 0x2bdbbec));
    func_0x01438628(*(undefined4 *)(_UNK_02bdbe88 + 0x2bdbbf8));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x02953fd4(0x2252,0);
  if (iVar1 == 0) {
    iVar1 = FUN_02bad050(param_1,param_3);
    if (iVar1 != 0) {
      iVar1 = FUN_02bad050(param_1,param_3);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar1 + 0x10) != 0) {
        iVar1 = 0;
        puVar6 = *(undefined4 **)(_UNK_02bdbe8c + 0x2bdbca4);
        puVar7 = *(undefined4 **)(_UNK_02bdbe90 + 0x2bdbcac);
        do {
          iVar2 = FUN_02bad050(param_1,param_3);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x10);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar2 + 0xc) <= iVar1) {
            return 0;
          }
          iVar2 = FUN_02bad050(param_1,param_3);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = *(int *)(iVar2 + 0x10);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          iVar2 = func_0x03b780b0(iVar2,iVar1,*puVar6);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          if (0 < *(int *)(iVar2 + 8)) {
            if (*(int *)(**(int **)(_UNK_02bdbe94 + 0x2bdbd44) + 0x74) == 0) {
              func_0x014387a4();
            }
            iVar2 = func_0x014e9518(*puVar7);
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
            uVar5 = *(undefined4 *)(iVar3 + 8);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x029a6fa8(iVar2,uVar5,0);
            if ((iVar2 != 0) && (*(int *)(iVar2 + 0x30) == param_2)) {
              if (*(int *)(**(int **)(_UNK_02bdbe98 + 0x2bdbdf0) + 0x74) == 0) {
                func_0x014387a4();
              }
              iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_02bdbe9c + 0x2bdbe0c));
              if (iVar3 == 0) {
                func_0x014388e4();
              }
              iVar2 = func_0x02c4acc8(iVar3,iVar2,0);
              if (iVar2 != 0) {
                uStack_28 = 0;
                uVar5 = FUN_02bd694c(param_1,iVar1,&uStack_28,param_3);
                return uVar5;
              }
            }
          }
          iVar1 = iVar1 + 1;
        } while( true );
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x2252,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar5 = func_0x028b7e50(iVar1,param_1,param_2,param_3,0);
  }
  return uVar5;
}

