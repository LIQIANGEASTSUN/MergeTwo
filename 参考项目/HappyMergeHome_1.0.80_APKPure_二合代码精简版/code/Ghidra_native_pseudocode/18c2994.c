
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_018d2994(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
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
  
  pcVar2 = (char *)(_UNK_018d2bb8 + 0x18d29a8);
  if (*pcVar2 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018d2bbc + 0x18d29bc));
    func_0x01438628(*(undefined4 *)(_UNK_018d2bc0 + 0x18d29c8));
    func_0x01438628(*(undefined4 *)(_UNK_018d2bc4 + 0x18d29d4));
    func_0x01438628(*(undefined4 *)(_UNK_018d2bc8 + 0x18d29e0));
    *pcVar2 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1444,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1444,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar3 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar3 = 1;
      }
    }
    iVar5 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar5 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar5,uVar4,&uStack_30,uVar3,0,0);
    uVar3 = func_0x024f56e0(&uStack_30,0,0);
    return uVar3;
  }
  piVar7 = *(int **)(_UNK_018d2bcc + 0x18d2a38);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    func_0x014387a4();
  }
  puVar8 = *(undefined4 **)(_UNK_018d2bd0 + 0x18d2a54);
  iVar1 = func_0x014e96a8(*puVar8);
  piVar6 = *(int **)(_UNK_018d2bd4 + 0x18d2a68);
  iVar5 = *piVar6;
  if (*(int *)(iVar5 + 0x74) == 0) {
    func_0x014387a4();
    iVar5 = *piVar6;
  }
  uVar3 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x10);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar4 = 0;
  iVar1 = func_0x02b76b98(iVar1,0,uVar3,0);
  if (iVar1 == 0) {
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = FUN_018bd08c();
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = FUN_018bec7c(iVar1);
    if (iVar1 != 0) {
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar5 = FUN_018bd08c();
      if (iVar5 == 0) {
        func_0x014388e4();
      }
      FUN_018bf498(iVar5,iVar1);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e96a8(*puVar8);
      uVar3 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x10);
      if (*(int *)(**(int **)(_UNK_018d2bd8 + 0x18d2b50) + 0x74) == 0) {
        func_0x014387a4();
      }
      uStack_38 = func_0x02aed6d8(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      func_0x02b768cc(iVar1,0,uVar3);
      uVar4 = 1;
    }
  }
  return uVar4;
}

