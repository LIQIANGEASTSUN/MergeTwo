
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c7798c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_02c77d08 + 0x2c779a4);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02c77d0c + 0x2c779b8));
    func_0x01438628(*(undefined4 *)(_UNK_02c77d10 + 0x2c779c4));
    func_0x01438628(*(undefined4 *)(_UNK_02c77d14 + 0x2c779d0));
    func_0x01438628(*(undefined4 *)(_UNK_02c77d18 + 0x2c779dc));
    func_0x01438628(*(undefined4 *)(_UNK_02c77d1c + 0x2c779e8));
    func_0x01438628(*(undefined4 *)(_UNK_02c77d20 + 0x2c779f4));
    func_0x01438628(*(undefined4 *)(_UNK_02c77d24 + 0x2c77a00));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x6040,0);
  if (iVar1 == 0) {
    if (-1 < *(int *)(param_1 + 0x78)) {
      uStack_24 = 0;
      if (*(int *)(**(int **)(_UNK_02c77d2c + 0x2c77a68) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_02c77d30 + 0x2c77a88));
      uVar5 = *(undefined4 *)(param_1 + 0x78);
      uVar2 = FUN_02c6b6f0(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_02bd694c(iVar1,uVar5,&uStack_24,uVar2,0);
      if (iVar1 != 0) {
        if (*(int *)(**(int **)(_UNK_02c77d40 + 0x2c77ae0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x0202bb70(0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x0202bc14(iVar3,**(undefined4 **)(_UNK_02c77d44 + 0x2c77b1c),0);
        uVar2 = func_0x02e8de70(iVar1,0);
        FUN_02c716d4(param_1,2,iVar1);
        FUN_02c72154(param_1,0);
        FUN_02c6dff0(param_1,1,uVar2,0,0);
        return;
      }
      piVar6 = *(int **)(_UNK_02c77d34 + 0x2c77b78);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar7 = *(undefined4 **)(_UNK_02c77d38 + 0x2c77b94);
      iVar1 = func_0x014e9518(*puVar7);
      uVar2 = *(undefined4 *)(param_1 + 0x7c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x029a6fa8(iVar1,uVar2,0);
      if (iVar1 != 0) {
        piVar8 = *(int **)(_UNK_02c77d3c + 0x2c77bd4);
        if (*(int *)(*piVar8 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x0202bb70(0);
        uVar2 = *(undefined4 *)(iVar1 + 0x44);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar2 = func_0x0202bc14(iVar3,uVar2,0);
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(*puVar7);
        uVar5 = *(undefined4 *)(iVar1 + 0x4c);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x029a6fa8(iVar3,uVar5,0);
        if (iVar1 != 0) {
          if (*(int *)(*piVar8 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202bb70(0);
          uVar5 = *(undefined4 *)(iVar1 + 0xc);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar5 = func_0x0202bc14(iVar3,uVar5,0);
          uVar2 = func_0x01529a5c(uVar2,uVar5,0);
        }
        uVar2 = func_0x01529a5c(uVar2,uVar2,0);
        FUN_02c6dff0(param_1,0,uVar2,0,0);
      }
      FUN_02c725e4(param_1);
    }
    func_0x024f1038(param_1,**(undefined4 **)(_UNK_02c77d28 + 0x2c77cf8),0);
  }
  else {
    iVar1 = func_0x029540a4(0x6040,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x02868e1c(iVar1,param_1,0);
  }
  return;
}

