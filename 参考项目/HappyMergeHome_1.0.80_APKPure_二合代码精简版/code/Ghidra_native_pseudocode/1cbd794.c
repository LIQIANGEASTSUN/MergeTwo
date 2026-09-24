
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01ccd794(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01ccd968 + 0x1ccd7ac);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ccd96c + 0x1ccd7c0));
    func_0x01438628(*(undefined4 *)(_UNK_01ccd970 + 0x1ccd7cc));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xd61,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01cca6e4(param_1);
    uVar5 = 0;
    if (iVar1 != 0) {
      iVar1 = FUN_01ccc5a4(param_1);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar13 = *(int **)(_UNK_01ccd974 + 0x1ccd854);
      uVar5 = *(uint *)(iVar1 + 0x28);
      iVar1 = *(int *)(iVar1 + 0x2c);
      if (*(int *)(*piVar13 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar9 = func_0x014e9518(**(undefined4 **)(_UNK_01ccd978 + 0x1ccd878));
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      uVar14 = func_0x026ffbe0(iVar9,0);
      uVar12 = uVar5 - (uint)uVar14;
      iVar1 = iVar1 - ((int)((ulonglong)uVar14 >> 0x20) + (uint)(uVar5 < (uint)uVar14));
      uVar10 = 0;
      iVar9 = 0;
      if ((int)-(iVar1 + (uint)(uVar12 != 0)) < 0 !=
          (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)(uVar12 != 0)))) {
        uVar10 = uVar12;
        iVar9 = iVar1;
      }
      iVar2 = FUN_01ccc5a4(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar5 = *(uint *)(iVar2 + 0x40);
      iVar2 = *(int *)(iVar2 + 0x44);
      if (*(int *)(*piVar13 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01ccd97c + 0x1ccd8fc));
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar14 = func_0x026ffbe0(iVar3,0);
      uVar4 = uVar5 - (uint)uVar14;
      iVar2 = iVar2 - ((int)((ulonglong)uVar14 >> 0x20) + (uint)(uVar5 < (uint)uVar14));
      uVar6 = (uint)((int)-(iVar2 + (uint)(uVar4 != 0)) < 0 !=
                    (SBORROW4(0,iVar2) != SBORROW4(-iVar2,(uint)(uVar4 != 0))));
      if (uVar6 == 0) {
        uVar4 = 0;
        iVar2 = 0;
      }
      uVar5 = (uint)((int)-(iVar1 + (uint)(uVar12 != 0)) < 0 !=
                    (SBORROW4(0,iVar1) != SBORROW4(-iVar1,(uint)(uVar12 != 0))));
      if ((int)(iVar2 - (iVar9 + (uint)(uVar4 < uVar10))) < 0 !=
          (SBORROW4(iVar2,iVar9) != SBORROW4(iVar2 - iVar9,(uint)(uVar4 < uVar10)))) {
        uVar5 = uVar6;
      }
    }
    return uVar5;
  }
  iVar1 = func_0x029540a4(0xd61,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_30 = 0;
  func_0x024f56c0(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
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
  uVar7 = 2;
  if (iVar1 == 0) {
    uVar7 = 1;
  }
  func_0x024f56d0(iVar9,uVar11,&uStack_30,uVar7,0,0);
  uVar5 = func_0x024f56e0(&uStack_30,0,0);
  return uVar5;
}

