
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_032b07b0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_032b09e0 + 0x32b07c8);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032b09e4 + 0x32b07dc));
    func_0x01438628(*(undefined4 *)(_UNK_032b09e8 + 0x32b07e8));
    func_0x01438628(*(undefined4 *)(_UNK_032b09ec + 0x32b07f4));
    func_0x01438628(*(undefined4 *)(_UNK_032b09f0 + 0x32b0800));
    func_0x01438628(*(undefined4 *)(_UNK_032b09f4 + 0x32b080c));
    func_0x01438628(*(undefined4 *)(_UNK_032b09f8 + 0x32b0818));
    func_0x01438628(*(undefined4 *)(_UNK_032b09fc + 0x32b0824));
    func_0x01438628(*(undefined4 *)(_UNK_032b0a00 + 0x32b0830));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x1f32,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x1f32,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x024f56c0(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_38,param_1,0);
    func_0x01523a2c(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar2 + 8);
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar5 = 3;
    if (iVar2 == 0) {
      uVar5 = 2;
    }
    func_0x024f56d0(iVar6,uVar8,&uStack_38,uVar5,0,0);
    return;
  }
  iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_032b0a04 + 0x32b088c));
  func_0x032b7278(iVar2,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  *(int *)(iVar2 + 8) = param_1;
  func_0x014385cc((int *)(iVar2 + 8),param_1);
  cVar1 = *(char *)(param_1 + 0x4a);
  *(undefined4 *)(iVar2 + 0xc) = param_2;
  if (cVar1 != '\0') {
    return;
  }
  piVar3 = *(int **)(_UNK_032b0a08 + 0x32b08dc);
  *(undefined1 *)(param_1 + 0x4a) = 1;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar6 = func_0x04e4a028(**(undefined4 **)(_UNK_032b0a0c + 0x32b08fc));
  if (iVar6 == 0) {
    func_0x014388e4();
  }
  func_0x0202998c(iVar6,0x755,0,0);
  if (*(int *)(**(int **)(_UNK_032b0a10 + 0x32b0930) + 0x74) == 0) {
    func_0x014387a4();
  }
  piVar3 = (int *)func_0x04e4a028(**(undefined4 **)(_UNK_032b0a14 + 0x32b094c));
  uVar8 = *(undefined4 *)(iVar2 + 0xc);
  if (piVar3 == (int *)0x0) {
    func_0x014388e4();
  }
  (**(code **)(*piVar3 + 0x230))(piVar3,uVar8,*(undefined4 *)(*piVar3 + 0x234));
  uVar8 = func_0x014388d4(**(undefined4 **)(_UNK_032b0a18 + 0x32b0988));
  func_0x033341c0(uVar8,iVar2,**(undefined4 **)(_UNK_032b0a1c + 0x32b09a4),0);
  if (*(int *)(**(int **)(_UNK_032b0a20 + 0x32b09b8) + 0x74) == 0) {
    func_0x014387a4();
  }
  pcVar7 = (char *)(_UNK_02af1c3c + 0x2af1b30);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02af1c40 + 0x2af1b44),uVar8,1,0);
    func_0x01438628(*(undefined4 *)(_UNK_02af1c44 + 0x2af1b50));
    func_0x01438628(*(undefined4 *)(_UNK_02af1c48 + 0x2af1b5c));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x9f1,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x9f1,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_20 = 0;
    func_0x02889978(iVar2,0x3f000000,uVar8,1);
    return;
  }
  iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02af1c4c + 0x2af1bc4));
  func_0x024eeca8(iVar2,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  *(undefined4 *)(iVar2 + 8) = uVar8;
  func_0x014385cc((undefined4 *)(iVar2 + 8),uVar8);
  uVar8 = func_0x014388d4(**(undefined4 **)(_UNK_02af1c50 + 0x2af1bfc));
  func_0x033341c0(uVar8,iVar2,**(undefined4 **)(_UNK_02af1c54 + 0x2af1c18),0);
  pcVar7 = (char *)(_UNK_033397d0 + 0x33396f8);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_033397d4 + 0x333970c),uVar8,1,0);
    func_0x01438628(*(undefined4 *)(_UNK_033397d8 + 0x3339718));
    func_0x01438628(*(undefined4 *)(_UNK_033397dc + 0x3339724));
    func_0x01438628(*(undefined4 *)(_UNK_033397e0 + 0x3339730));
    *pcVar7 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_033397e4 + 0x3339744) + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar9 = func_0x0333764c();
  uVar4 = (uint)((ulonglong)uVar9 >> 0x20);
  iVar2 = (int)uVar9;
  if (iVar2 != 0) {
    uVar4 = (uint)*(byte *)(iVar2 + 0x90);
  }
  if ((iVar2 != 0 && uVar4 != 0) && (*(char *)(iVar2 + 0xa0) == '\0')) {
    *(float *)(iVar2 + 200) = *(float *)(iVar2 + 0x60);
    *(float *)(iVar2 + 0x60) = *(float *)(iVar2 + 0x60) + 0.5;
  }
  uVar8 = func_0x03734fd0(iVar2,uVar8,**(undefined4 **)(_UNK_033397e8 + 0x3339774));
  iVar2 = func_0x03735e5c(uVar8,0,1,**(undefined4 **)(_UNK_033397ec + 0x333978c));
  uVar4 = **(uint **)(_UNK_033397f0 + 0x33397a0);
  if (iVar2 != 0) {
    uVar4 = (uint)*(byte *)(iVar2 + 0x90);
  }
  if (iVar2 != 0 && uVar4 != 0) {
    if (*(char *)(iVar2 + 0xa0) == '\0') {
      *(undefined1 *)(iVar2 + 0x5c) = 1;
    }
    return;
  }
  return;
}

