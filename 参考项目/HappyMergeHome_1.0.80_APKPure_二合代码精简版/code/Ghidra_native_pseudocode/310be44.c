
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0311be44(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_0311c050 + 0x311be58);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0311c054 + 0x311be6c));
    func_0x01438628(*(undefined4 *)(_UNK_0311c058 + 0x311be78));
    func_0x01438628(*(undefined4 *)(_UNK_0311c05c + 0x311be84));
    func_0x01438628(*(undefined4 *)(_UNK_0311c060 + 0x311be90));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1474,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1474,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar2 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar2 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar2 = 1;
      }
    }
    iVar5 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar5,uVar4,&uStack_30,uVar2,0,0);
    uVar2 = func_0x024f56e0(&uStack_30,0,0);
    return uVar2;
  }
  piVar7 = *(int **)(_UNK_0311c064 + 0x311bee8);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_0311c068 + 0x311bf04);
  iVar1 = func_0x03b2c734(*puVar8);
  piVar6 = *(int **)(_UNK_0311c06c + 0x311bf18);
  iVar5 = *piVar6;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x014387a4();
    iVar5 = *piVar6;
  }
  uVar2 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x14);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = 0;
  iVar1 = func_0x02b76b98(iVar1,0,uVar2,0);
  if (iVar1 == 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_03105aec();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_031083a8(iVar1);
    if (iVar1 != 0) {
      func_0x03137c98(0);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x03b2c734(*puVar8);
      iVar5 = *piVar6;
      if (*(int *)(iVar5 + 0x74) == 0) {
        func_0x014387a4();
        iVar5 = *piVar6;
      }
      uVar2 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x14);
      if (*(int *)(**(int **)(_UNK_0311c070 + 0x311bfe4) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_0311c070 + 0x311bfe4));
      }
      uStack_38 = func_0x02aed6d8(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      func_0x02b768cc(iVar1,0,uVar2);
      uVar4 = 1;
    }
  }
  return uVar4;
}

