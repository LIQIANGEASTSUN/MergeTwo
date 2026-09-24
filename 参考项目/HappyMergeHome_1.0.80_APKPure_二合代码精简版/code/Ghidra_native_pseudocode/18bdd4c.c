
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_018cdd4c(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_018ce064 + 0x18cdd60);
  if (*pcVar3 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_018ce068 + 0x18cdd74));
    func_0x01438628(*(undefined4 *)(_UNK_018ce06c + 0x18cdd80));
    func_0x01438628(*(undefined4 *)(_UNK_018ce070 + 0x18cdd8c));
    func_0x01438628(*(undefined4 *)(_UNK_018ce074 + 0x18cdd98));
    func_0x01438628(*(undefined4 *)(_UNK_018ce078 + 0x18cdda4));
    func_0x01438628(*(undefined4 *)(_UNK_018ce07c + 0x18cddb0));
    func_0x01438628(*(undefined4 *)(_UNK_018ce080 + 0x18cddbc));
    func_0x01438628(*(undefined4 *)(_UNK_018ce084 + 0x18cddc8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x1454,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x1454,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uVar4 = 0;
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
      uVar4 = 0;
      if (*(int *)(iVar1 + 0x10) != 0) {
        uVar4 = 1;
      }
    }
    iVar8 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    func_0x024f56d0(iVar8,uVar6,&uStack_30,uVar4,0,0);
    uVar4 = func_0x024f56e0(&uStack_30,0,0);
    return uVar4;
  }
  piVar9 = *(int **)(_UNK_018ce088 + 0x18cde20);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = FUN_018bd08c();
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  iVar1 = FUN_018be378(iVar1);
  uVar4 = 0;
  if (iVar1 != 0) {
    piVar10 = *(int **)(_UNK_018ce08c + 0x18cde64);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar11 = *(undefined4 **)(_UNK_018ce090 + 0x18cde80);
    iVar1 = func_0x014e96a8(*puVar11);
    iVar8 = *piVar9;
    if (*(int *)(iVar8 + 0x74) == 0) {
      func_0x014387a4();
      iVar8 = *piVar9;
    }
    uVar6 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0xc);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar4 = 0;
    iVar1 = func_0x02b76b98(iVar1,0,uVar6,0);
    if (iVar1 == 0) {
      if (*(int *)(**(int **)(_UNK_018ce094 + 0x18cdee0) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_018ce098 + 0x18cdefc));
      piVar5 = *(int **)(_UNK_018ce09c + 0x18cdf10);
      iVar8 = *piVar5;
      if (*(int *)(iVar8 + 0x74) == 0) {
        func_0x014387a4();
        iVar8 = *piVar5;
      }
      iVar7 = **(int **)(_UNK_018ce0a0 + 0x18cdf30);
      iVar2 = *(int *)(iVar7 + 0x1c);
      uVar4 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0x87c);
      if (iVar2 == 0) {
        func_0x014909d8(iVar7);
        iVar2 = *(int *)(iVar7 + 0x1c);
      }
      iVar8 = *(int *)(iVar2 + 8);
      if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
        iVar8 = func_0x0149097c();
      }
      if (*(int *)(iVar8 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar8 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
      if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
        iVar8 = func_0x0149097c();
      }
      uVar6 = **(undefined4 **)(iVar8 + 0x5c);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      func_0x02b0c90c(iVar1,uVar4,uVar6,0);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e96a8(*puVar11);
      iVar8 = *piVar9;
      if (*(int *)(iVar8 + 0x74) == 0) {
        func_0x014387a4();
        iVar8 = *piVar9;
      }
      uVar4 = *(undefined4 *)(*(int *)(iVar8 + 0x5c) + 0xc);
      if (*(int *)(**(int **)(_UNK_018ce0a4 + 0x18cdff8) + 0x74) == 0) {
        func_0x014387a4(**(int **)(_UNK_018ce0a4 + 0x18cdff8));
      }
      uStack_38 = func_0x02aed6d8(0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_28 = 0;
      func_0x02b768cc(iVar1,0,uVar4);
      uVar4 = 1;
    }
  }
  return uVar4;
}

