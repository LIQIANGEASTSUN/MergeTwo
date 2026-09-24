
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_016b89b0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
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
  
  pcVar8 = (char *)(_UNK_016b8a7c + 0x16b89c4);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_016b8a80 + 0x16b89d8));
    func_0x01438628(*(undefined4 *)(_UNK_016b8a84 + 0x16b89e4));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x891e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x891e,0);
    if (iVar1 == 0) {
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
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar6 = 2;
    if (iVar1 == 0) {
      uVar6 = 1;
    }
    func_0x024f56d0(iVar9,uVar11,&uStack_30,uVar6,0,0);
    iVar1 = func_0x024f5770(&uStack_30,0,0);
    return iVar1;
  }
  if (*(int *)(**(int **)(_UNK_016b8a88 + 0x16b8a3c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_016b8a8c + 0x16b8a58));
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  pcVar8 = (char *)(_UNK_026ffd48 + 0x26ffbf4);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_026ffd4c + 0x26ffc08),0);
    func_0x01438628(*(undefined4 *)(_UNK_026ffd50 + 0x26ffc14));
    func_0x01438628(*(undefined4 *)(_UNK_026ffd54 + 0x26ffc20));
    func_0x01438628(*(undefined4 *)(_UNK_026ffd58 + 0x26ffc2c));
    *pcVar8 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_026ffd5c + 0x26ffc44) + 0x74) == 0) {
    func_0x014387a4();
  }
  uVar13 = func_0x0267c70c(0);
  uVar3 = (uint)((ulonglong)uVar13 >> 0x20);
  uVar2 = (uint)uVar13;
  uVar4 = *(uint *)(iVar1 + 0x40);
  uVar5 = *(uint *)(iVar1 + 0x44);
  if (uVar5 < uVar3 || uVar3 - uVar5 < (uint)(uVar4 <= uVar2)) {
    uVar10 = uVar3 - (uVar5 + (uVar2 < uVar4));
    if ((uVar4 == 0 && uVar5 == 0) ||
       (bVar12 = &UNK_006ddd00 < (undefined *)(uVar2 - uVar4), uVar4 = uVar10 - !bVar12,
       uVar10 == 0 && bVar12 <= uVar10)) goto LAB_026ffd38;
  }
  iVar7 = **(int **)(_UNK_026ffd60 + 0x26ffca0);
  iVar9 = *(int *)(iVar7 + 0x1c);
  if (iVar9 == 0) {
    func_0x014909d8(iVar7,uVar3,uVar4);
    iVar9 = *(int *)(iVar7 + 0x1c);
  }
  iVar9 = *(int *)(iVar9 + 8);
  if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
    iVar9 = func_0x0149097c();
  }
  if (*(int *)(iVar9 + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar9 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
  if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
    iVar9 = func_0x0149097c();
  }
  uVar11 = **(undefined4 **)(iVar9 + 0x5c);
  if (*(int *)(**(int **)(_UNK_026ffd64 + 0x26ffd00) + 0x74) == 0) {
    func_0x014387a4(**(int **)(_UNK_026ffd64 + 0x26ffd00));
  }
  func_0x026795f8(**(undefined4 **)(_UNK_026ffd68 + 0x26ffd30),uVar11,0);
  uVar2 = *(uint *)(iVar1 + 0x40);
LAB_026ffd38:
  return *(int *)(iVar1 + 0x30) + uVar2;
}

