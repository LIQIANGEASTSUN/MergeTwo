
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_032d64ec(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar9 = (char *)(_UNK_032d65b8 + 0x32d6500);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032d65bc + 0x32d6514));
    func_0x01438628(*(undefined4 *)(_UNK_032d65c0 + 0x32d6520));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x83b6,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x83b6,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar11 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar6 = 2;
    if (iVar2 == 0) {
      uVar6 = 1;
    }
    func_0x024f56d0(iVar8,uVar11,&uStack_30,uVar6,0,0);
    iVar2 = func_0x024f5770(&uStack_30,0,0);
    return iVar2;
  }
  if (*(int *)(**(int **)(_UNK_032d65c4 + 0x32d6578) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032d65c8 + 0x32d6594));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  pcVar9 = (char *)(_UNK_026ffd48 + 0x26ffbf4);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026ffd4c + 0x26ffc08),0);
    func_0x01438628(*(undefined4 *)(_UNK_026ffd50 + 0x26ffc14));
    func_0x01438628(*(undefined4 *)(_UNK_026ffd54 + 0x26ffc20));
    func_0x01438628(*(undefined4 *)(_UNK_026ffd58 + 0x26ffc2c));
    *pcVar9 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_026ffd5c + 0x26ffc44) + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar13 = func_0x0267c70c(0);
  uVar3 = (uint)((ulonglong)uVar13 >> 0x20);
  uVar1 = (uint)uVar13;
  uVar4 = *(uint *)(iVar2 + 0x40);
  uVar5 = *(uint *)(iVar2 + 0x44);
  if (uVar5 < uVar3 || uVar3 - uVar5 < (uint)(uVar4 <= uVar1)) {
    uVar10 = uVar3 - (uVar5 + (uVar1 < uVar4));
    if ((uVar4 == 0 && uVar5 == 0) ||
       (bVar12 = &UNK_006ddd00 < (undefined *)(uVar1 - uVar4), uVar4 = uVar10 - !bVar12,
       uVar10 == 0 && bVar12 <= uVar10)) goto LAB_026ffd38;
  }
  iVar7 = **(int **)(_UNK_026ffd60 + 0x26ffca0);
  iVar8 = *(int *)(iVar7 + 0x1c);
  if (iVar8 == 0) {
    func_0x014909d8(iVar7,uVar3,uVar4);
    iVar8 = *(int *)(iVar7 + 0x1c);
  }
  iVar8 = *(int *)(iVar8 + 8);
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
  uVar11 = **(undefined4 **)(iVar8 + 0x5c);
  if (*(int *)(**(int **)(_UNK_026ffd64 + 0x26ffd00) + 0x74) == 0) {
    func_0x014387a4(**(int **)(_UNK_026ffd64 + 0x26ffd00));
  }
  func_0x026795f8(**(undefined4 **)(_UNK_026ffd68 + 0x26ffd30),uVar11,0);
  uVar1 = *(uint *)(iVar2 + 0x40);
LAB_026ffd38:
  return *(int *)(iVar2 + 0x30) + uVar1;
}

