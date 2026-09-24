
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_02bd496c(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
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
  
  pcVar9 = (char *)(_UNK_02bd4b4c + 0x2bd4984);
  if (*pcVar9 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02bd4b50 + 0x2bd4998));
    func_0x01438628(*(undefined4 *)(_UNK_02bd4b54 + 0x2bd49a4));
    func_0x01438628(*(undefined4 *)(_UNK_02bd4b58 + 0x2bd49b0));
    func_0x01438628(*(undefined4 *)(_UNK_02bd4b5c + 0x2bd49bc));
    *pcVar9 = '\x01';
  }
  iVar2 = func_0x02953fd4(0xd59,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0xd59,0);
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
    iVar8 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    uVar7 = 3;
    if (iVar2 == 0) {
      uVar7 = 2;
    }
    func_0x024f56d0(iVar8,uVar10,&uStack_38,uVar7,0,0);
    uVar1 = func_0x024f56e0(&uStack_38,0,0);
    return uVar1;
  }
  uVar12 = func_0x02be73f4(param_1,param_2);
  iVar8 = (int)((ulonglong)uVar12 >> 0x20);
  iVar2 = (int)uVar12;
  if (((int)-(iVar8 + (uint)(iVar2 != 0)) < 0 !=
      (SBORROW4(0,iVar8) != SBORROW4(-iVar8,(uint)(iVar2 != 0)))) !=
      (*(char *)(param_1 + 0x38) != '\0')) {
    piVar3 = *(int **)(_UNK_02bd4b60 + 0x2bd4a60);
    *(bool *)(param_1 + 0x38) =
         (int)-(iVar8 + (uint)(iVar2 != 0)) < 0 !=
         (SBORROW4(0,iVar8) != SBORROW4(-iVar8,(uint)(iVar2 != 0)));
    if (*(int *)(*piVar3 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar4 = func_0x014e9518(**(undefined4 **)(_UNK_02bd4b64 + 0x2bd4a80));
    piVar3 = *(int **)(_UNK_02bd4b68 + 0x2bd4a94);
    iVar5 = *piVar3;
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x014387a4();
      iVar5 = *piVar3;
    }
    iVar11 = **(int **)(_UNK_02bd4b6c + 0x2bd4ab4);
    iVar6 = *(int *)(iVar11 + 0x1c);
    uVar10 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x3c);
    if (iVar6 == 0) {
      func_0x014909d8(iVar11);
      iVar6 = *(int *)(iVar11 + 0x1c);
    }
    iVar5 = *(int *)(iVar6 + 8);
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = func_0x0149097c();
    }
    if (*(int *)(iVar5 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar5 = *(int *)(*(int *)(iVar11 + 0x1c) + 8);
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = func_0x0149097c();
    }
    uVar7 = **(undefined4 **)(iVar5 + 0x5c);
    if (iVar4 == 0) {
      func_0x014388e4();
    }
    func_0x029901b4(iVar4,uVar10,uVar7,0);
  }
  return (uint)((int)-(iVar8 + (uint)(iVar2 != 0)) < 0 !=
               (SBORROW4(0,iVar8) != SBORROW4(-iVar8,(uint)(iVar2 != 0))));
}

