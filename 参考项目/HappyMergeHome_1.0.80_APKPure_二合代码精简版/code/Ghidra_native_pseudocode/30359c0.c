
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_030459c0(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_03045c80 + 0x30459d8);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_03045c84 + 0x30459ec));
    func_0x01438628(*(undefined4 *)(_UNK_03045c88 + 0x30459f8));
    func_0x01438628(*(undefined4 *)(_UNK_03045c8c + 0x3045a04));
    func_0x01438628(*(undefined4 *)(_UNK_03045c90 + 0x3045a10));
    func_0x01438628(*(undefined4 *)(_UNK_03045c94 + 0x3045a1c));
    func_0x01438628(*(undefined4 *)(_UNK_03045c98 + 0x3045a28));
    func_0x01438628(*(undefined4 *)(_UNK_03045c9c + 0x3045a34));
    func_0x01438628(*(undefined4 *)(_UNK_03045ca0 + 0x3045a40));
    func_0x01438628(*(undefined4 *)(_UNK_03045ca4 + 0x3045a4c));
    *pcVar3 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = func_0x02953fd4(0x1489,0);
  if (iVar1 == 0) {
    piVar4 = (int *)(param_1 + 0x48);
    if (*piVar4 == 0) {
      iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_03045ca8 + 0x3045ac0));
      func_0x046cbdc8(iVar1,**(undefined4 **)(_UNK_03045cac + 0x3045ad4));
      *piVar4 = iVar1;
      func_0x014385cc(piVar4,iVar1);
      if (*(int *)(**(int **)(_UNK_03045cb0 + 0x3045af8) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x04e4a028(**(undefined4 **)(_UNK_03045cb4 + 0x3045b14));
      iVar2 = FUN_03044930(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(undefined4 *)(iVar2 + 0xc);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = FUN_029b1058(iVar1,uVar5,0);
      if (iVar1 != 0) {
        func_0x04cfe6f4(&uStack_30,iVar1,**(undefined4 **)(_UNK_03045cb8 + 0x3045b70));
        puVar6 = *(undefined4 **)(_UNK_03045cbc + 0x3045b84);
        puVar7 = *(undefined4 **)(_UNK_03045cc0 + 0x3045b8c);
        while (iVar2 = func_0x04878f14(&uStack_30,*puVar6), iVar1 = iStack_24, iVar2 != 0) {
          iVar2 = *piVar4;
          if (iStack_24 == 0) {
            func_0x014388e4();
          }
          uVar5 = *(undefined4 *)(iVar1 + 0x2c);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x046cc8c8(iVar2,uVar5,iVar1,*puVar7);
        }
        func_0x04878f10(&uStack_30,**(undefined4 **)(_UNK_03045cc4 + 0x3045be4));
      }
    }
    iVar1 = *piVar4;
  }
  else {
    iVar1 = func_0x029540a4(0x1489,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = func_0x02884180(iVar1,param_1,0);
  }
  return iVar1;
}

