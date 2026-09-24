
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01cca6e4(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar7 = (char *)(_UNK_01ccab28 + 0x1cca6fc);
  if (*pcVar7 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01ccab2c + 0x1cca710));
    func_0x01438628(*(undefined4 *)(_UNK_01ccab30 + 0x1cca71c));
    func_0x01438628(*(undefined4 *)(_UNK_01ccab34 + 0x1cca728));
    func_0x01438628(*(undefined4 *)(_UNK_01ccab38 + 0x1cca734));
    func_0x01438628(*(undefined4 *)(_UNK_01ccab3c + 0x1cca740));
    func_0x01438628(*(undefined4 *)(_UNK_01ccab40 + 0x1cca74c));
    func_0x01438628(*(undefined4 *)(_UNK_01ccab44 + 0x1cca758));
    *pcVar7 = '\x01';
  }
  uVar8 = 0;
  iVar2 = func_0x02953fd4(0x937,0);
  if (iVar2 != 0) {
    iVar2 = func_0x029540a4(0x937,0);
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x024f56c0(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01523a6c(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01523a6c(&uStack_30,param_1,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar11 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    uVar6 = 2;
    if (iVar2 == 0) {
      uVar6 = 1;
    }
    func_0x024f56d0(iVar9,uVar11,&uStack_30,uVar6,0,0);
    uVar8 = func_0x024f56e0(&uStack_30,0,0);
    return uVar8;
  }
  iVar2 = (**(code **)(*param_1 + 0x110))(param_1,0,*(undefined4 *)(*param_1 + 0x114));
  if (iVar2 != 0) {
    if (*(int *)(**(int **)(_UNK_01ccab48 + 0x1cca7d8) + 0x74) == 0) {
      func_0x014387a4();
    }
    uVar8 = 0;
    iVar2 = func_0x02c35d10(0x4c,0);
    if ((iVar2 != 0) && (iVar2 = func_0x01ccceec(param_1), iVar2 != 0)) {
      iVar2 = func_0x01ccc5a4(param_1);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(uint *)(iVar2 + 0x28);
      iVar2 = *(int *)(iVar2 + 0x2c);
      if (*(int *)(**(int **)(_UNK_01ccab4c + 0x1cca834) + 0x74) == 0) {
        func_0x014387a4();
      }
      puVar10 = *(undefined4 **)(_UNK_01ccab50 + 0x1cca858);
      iVar9 = func_0x014e9518(*puVar10);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      uVar15 = func_0x026ffbe0(iVar9,0);
      uVar14 = uVar8 - (uint)uVar15;
      iVar2 = iVar2 - ((int)((ulonglong)uVar15 >> 0x20) + (uint)(uVar8 < (uint)uVar15));
      iVar9 = func_0x01ccc5a4(param_1);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      uVar8 = *(uint *)(iVar9 + 0x40);
      iVar9 = *(int *)(iVar9 + 0x44);
      iVar3 = func_0x014e9518(*puVar10);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      uVar15 = func_0x026ffbe0(iVar3,0);
      uVar4 = uVar8 - (uint)uVar15;
      iVar9 = iVar9 - ((int)((ulonglong)uVar15 >> 0x20) + (uint)(uVar8 < (uint)uVar15));
      if ((int)-(iVar9 + (uint)(uVar4 != 0)) < 0 ==
          (SBORROW4(0,iVar9) != SBORROW4(-iVar9,(uint)(uVar4 != 0)))) {
        uVar4 = 0;
        iVar9 = 0;
      }
      if ((int)(iVar9 - (iVar2 + (uint)(uVar4 < uVar14))) < 0 ==
          (SBORROW4(iVar9,iVar2) != SBORROW4(iVar9 - iVar2,(uint)(uVar4 < uVar14)))) {
        uVar4 = uVar14;
        iVar9 = iVar2;
      }
      bVar1 = (int)-(iVar9 + (uint)(uVar4 != 0)) < 0 !=
              (SBORROW4(0,iVar9) != SBORROW4(-iVar9,(uint)(uVar4 != 0)));
      if ((bool)(char)param_1[0x10] != bVar1) {
        if (*(int *)(**(int **)(_UNK_01ccab54 + 0x1cca930) + 0x74) == 0) {
          func_0x014387a4();
        }
        iStack_28 = func_0x014e9518(**(undefined4 **)(_UNK_01ccab58 + 0x1cca94c));
        piVar12 = *(int **)(_UNK_01ccab5c + 0x1cca960);
        iVar3 = *piVar12;
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x014387a4();
          iVar3 = *piVar12;
        }
        iVar13 = **(int **)(_UNK_01ccab60 + 0x1cca980);
        iVar5 = *(int *)(iVar13 + 0x1c);
        uStack_2c = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x40);
        if (iVar5 == 0) {
          func_0x014909d8(iVar13);
          iVar5 = *(int *)(iVar13 + 0x1c);
        }
        iVar3 = *(int *)(iVar5 + 8);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x0149097c();
        }
        if (*(int *)(iVar3 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = *(int *)(*(int *)(iVar13 + 0x1c) + 8);
        if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
          iVar3 = func_0x0149097c();
        }
        uVar11 = **(undefined4 **)(iVar3 + 0x5c);
        if (iStack_28 == 0) {
          func_0x014388e4();
        }
        func_0x029901b4(iStack_28,uStack_2c,uVar11,0);
        *(bool *)(param_1 + 0x10) = bVar1;
      }
      uVar8 = (uint)((int)-(iVar2 + (uint)(uVar14 != 0)) < 0 !=
                    (SBORROW4(0,iVar2) != SBORROW4(-iVar2,(uint)(uVar14 != 0))));
      if ((uVar8 == 0) && ((int)(uint)(uVar4 == 0) <= iVar9)) {
        if (*(int *)(**(int **)(_UNK_01ccab64 + 0x1ccaa40) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_01ccab68 + 0x1ccaa5c));
        piVar12 = *(int **)(_UNK_01ccab6c + 0x1ccaa70);
        iVar9 = *piVar12;
        if (*(int *)(iVar9 + 0x74) == 0) {
          func_0x014387a4();
          iVar9 = *piVar12;
        }
        iVar5 = **(int **)(_UNK_01ccab70 + 0x1ccaa90);
        iVar3 = *(int *)(iVar5 + 0x1c);
        uVar11 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x40);
        if (iVar3 == 0) {
          func_0x014909d8(iVar5);
          iVar3 = *(int *)(iVar5 + 0x1c);
        }
        iVar9 = *(int *)(iVar3 + 8);
        if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
          iVar9 = func_0x0149097c();
        }
        if (*(int *)(iVar9 + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = *(int *)(*(int *)(iVar5 + 0x1c) + 8);
        if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
          iVar9 = func_0x0149097c();
        }
        uVar6 = **(undefined4 **)(iVar9 + 0x5c);
        if (iVar2 == 0) {
          func_0x014388e4();
        }
        uVar8 = 0;
        func_0x029901b4(iVar2,uVar11,uVar6,0);
        *(undefined1 *)(param_1 + 0x10) = 0;
      }
    }
  }
  return uVar8;
}

