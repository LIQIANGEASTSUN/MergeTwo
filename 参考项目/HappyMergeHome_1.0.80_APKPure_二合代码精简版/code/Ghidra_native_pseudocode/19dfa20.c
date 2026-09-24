
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019efa20(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  char *pcVar17;
  int iVar18;
  int iVar19;
  undefined4 *puVar20;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar17 = (char *)(_UNK_019f00d0 + 0x19efa40);
  if (*pcVar17 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_019f00d4 + 0x19efa54));
    func_0x01438628(*(undefined4 *)(_UNK_019f00d8 + 0x19efa60));
    func_0x01438628(*(undefined4 *)(_UNK_019f00dc + 0x19efa6c));
    func_0x01438628(*(undefined4 *)(_UNK_019f00e0 + 0x19efa78));
    func_0x01438628(*(undefined4 *)(_UNK_019f00e4 + 0x19efa84));
    func_0x01438628(*(undefined4 *)(_UNK_019f00e8 + 0x19efa90));
    func_0x01438628(*(undefined4 *)(_UNK_019f00ec + 0x19efa9c));
    func_0x01438628(*(undefined4 *)(_UNK_019f00f0 + 0x19efaa8));
    func_0x01438628(*(undefined4 *)(_UNK_019f00f4 + 0x19efab4));
    func_0x01438628(*(undefined4 *)(_UNK_019f00f8 + 0x19efac0));
    func_0x01438628(*(undefined4 *)(_UNK_019f00fc + 0x19efacc));
    func_0x01438628(*(undefined4 *)(_UNK_019f0100 + 0x19efad8));
    func_0x01438628(*(undefined4 *)(_UNK_019f0104 + 0x19efae4));
    func_0x01438628(*(undefined4 *)(_UNK_019f0108 + 0x19efaf0));
    func_0x01438628(*(undefined4 *)(_UNK_019f010c + 0x19efafc));
    func_0x01438628(*(undefined4 *)(_UNK_019f0110 + 0x19efb08));
    func_0x01438628(*(undefined4 *)(_UNK_019f0114 + 0x19efb14));
    func_0x01438628(*(undefined4 *)(_UNK_019f0118 + 0x19efb20));
    func_0x01438628(*(undefined4 *)(_UNK_019f011c + 0x19efb2c));
    func_0x01438628(*(undefined4 *)(_UNK_019f0120 + 0x19efb38));
    func_0x01438628(*(undefined4 *)(_UNK_019f0124 + 0x19efb44));
    func_0x01438628(*(undefined4 *)(_UNK_019f0128 + 0x19efb50));
    func_0x01438628(*(undefined4 *)(_UNK_019f012c + 0x19efb5c));
    func_0x01438628(*(undefined4 *)(_UNK_019f0130 + 0x19efb68));
    *pcVar17 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_4c = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  iVar6 = func_0x02953fd4(0x286f,0);
  if (iVar6 == 0) {
    iVar6 = func_0x014388d4(**(undefined4 **)(_UNK_019f0134 + 0x19efbdc));
    func_0x024eeca8(iVar6,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    iVar11 = *(int *)(**(int **)(_UNK_019f0138 + 0x19efc04) + 0x74);
    *(undefined4 *)(iVar6 + 8) = param_2;
    if (iVar11 == 0) {
      func_0x014387a4();
    }
    iVar11 = func_0x014e9518(**(undefined4 **)(_UNK_019f013c + 0x19efc24));
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    iVar11 = *(int *)(iVar11 + 0x1c);
    uVar7 = func_0x014388d4(**(undefined4 **)(_UNK_019f0140 + 0x19efc44));
    func_0x024f0614(uVar7,iVar6,**(undefined4 **)(_UNK_019f0144 + 0x19efc64),0);
    if (iVar11 == 0) {
      func_0x014388e4();
    }
    iVar6 = func_0x024f0618(iVar11,uVar7,**(undefined4 **)(_UNK_019f0148 + 0x19efc88));
    if (iVar6 != 0) {
      FUN_019ef878(param_1,*(undefined4 *)(iVar6 + 8));
      iVar11 = func_0x014388d4(**(undefined4 **)(_UNK_019f014c + 0x19efcc4));
      func_0x024eed9c(iVar11,**(undefined4 **)(_UNK_019f0150 + 0x19efcd8));
      iVar18 = 0;
      puVar20 = *(undefined4 **)(_UNK_019f0154 + 0x19efcf0);
      while( true ) {
        iVar13 = *(int *)(iVar6 + 0x18);
        if (iVar13 == 0) {
          func_0x014388e4();
        }
        if (*(int *)(iVar13 + 0xc) <= iVar18) break;
        iVar13 = *(int *)(iVar6 + 0x18);
        if (iVar13 == 0) {
          func_0x014388e4();
        }
        uVar7 = func_0x024f0530(iVar13,iVar18,*puVar20);
        iVar13 = *(int *)(iVar6 + 0x1c);
        if (iVar13 == 0) {
          func_0x014388e4();
        }
        uVar8 = func_0x024f0530(iVar13,iVar18,*puVar20);
        uVar9 = func_0x014388d4(**(undefined4 **)(_UNK_019f0158 + 0x19efd5c));
        func_0x02ca3c70(uVar9,uVar7,uVar8,0,0);
        if (iVar11 == 0) {
          func_0x014388e4();
        }
        iVar13 = *(int *)(iVar11 + 8);
        uVar16 = *(uint *)(iVar11 + 0xc);
        piVar12 = *(int **)(_UNK_019f015c + 0x19efdac);
        *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
        iVar19 = *piVar12;
        if (iVar13 == 0) {
          func_0x014388e4();
        }
        if (uVar16 < *(uint *)(iVar13 + 0xc)) {
          *(uint *)(iVar11 + 0xc) = uVar16 + 1;
          puVar10 = (undefined4 *)(iVar13 + uVar16 * 4 + 0x10);
          *puVar10 = uVar9;
          func_0x014385cc(puVar10,uVar9);
        }
        else {
          func_0x0152874c(iVar11,uVar9,
                          *(undefined4 *)(*(int *)(*(int *)(iVar19 + 0x10) + 0x60) + 0x38));
        }
        iVar18 = iVar18 + 1;
      }
      uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_38 = 0;
      uStack_4c = *(undefined4 *)(iVar6 + 8);
      uStack_48 = 100;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      uVar7 = func_0x01524ffc(&uStack_4c,0);
      uStack_44 = func_0x014e9568(**(undefined4 **)(_UNK_019f0160 + 0x19efe44),uVar7,0);
      func_0x014385cc((uint)&uStack_48 | 4,uStack_44);
      uVar5 = uStack_2c;
      uVar4 = uStack_30;
      uVar3 = uStack_34;
      uVar2 = uStack_38;
      uVar1 = uStack_3c;
      uVar9 = uStack_40;
      uVar8 = uStack_44;
      uVar7 = uStack_48;
      if (*(int *)(**(int **)(_UNK_019f0164 + 0x19efe78) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e9518(**(undefined4 **)(_UNK_019f0168 + 0x19efec0));
      iVar13 = **(int **)(_UNK_019f016c + 0x19efed4);
      iVar18 = *(int *)(iVar13 + 0x1c);
      if (iVar18 == 0) {
        func_0x014909d8(iVar13);
        iVar18 = *(int *)(iVar13 + 0x1c);
      }
      iVar18 = *(int *)(iVar18 + 8);
      if ((*(ushort *)(iVar18 + 0xbd) & 1) == 0) {
        iVar18 = func_0x0149097c();
      }
      if (*(int *)(iVar18 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar18 = *(int *)(*(int *)(iVar13 + 0x1c) + 8);
      if ((*(ushort *)(iVar18 + 0xbd) & 1) == 0) {
        iVar18 = func_0x0149097c();
      }
      uVar14 = **(undefined4 **)(iVar18 + 0x5c);
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x029901b4(iVar6,**(undefined4 **)(_UNK_019f0170 + 0x19eff50),uVar14,0);
      if (*(int *)(**(int **)(_UNK_019f0174 + 0x19eff64) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar6 = func_0x014e96a8(**(undefined4 **)(_UNK_019f0178 + 0x19eff80));
      if (*(int *)(**(int **)(_UNK_019f017c + 0x19eff94) + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar18 = func_0x014e9518(**(undefined4 **)(_UNK_019f0180 + 0x19effb0));
      if (iVar18 == 0) {
        func_0x014388e4();
      }
      uVar14 = func_0x029be154(iVar18,0);
      piVar12 = *(int **)(_UNK_019f0184 + 0x19effe0);
      iVar18 = *piVar12;
      if (*(int *)(iVar18 + 0x74) == 0) {
        func_0x014387a4();
        iVar18 = *piVar12;
      }
      iVar13 = *(int *)(*(int *)(iVar18 + 0x5c) + 0xc);
      if (iVar13 == 0) {
        if (*(int *)(iVar18 + 0x74) == 0) {
          func_0x014387a4();
          iVar18 = *piVar12;
        }
        uVar15 = **(undefined4 **)(iVar18 + 0x5c);
        iVar13 = func_0x014388d4(**(undefined4 **)(_UNK_019f0188 + 0x19f0028));
        func_0x0152e3ec(iVar13,uVar15,**(undefined4 **)(_UNK_019f018c + 0x19f0048),0);
        piVar12 = (int *)(*(int *)(*piVar12 + 0x5c) + 0xc);
        *piVar12 = iVar13;
        func_0x014385cc(piVar12,iVar13);
      }
      if (iVar6 == 0) {
        func_0x014388e4();
      }
      func_0x02b75870(iVar6,iVar11,uVar14,1,uVar7,uVar8,uVar9,uVar1,uVar2,uVar3,uVar4,uVar5,iVar13,0
                      ,0);
    }
  }
  else {
    iVar6 = func_0x029540a4(0x286f,0);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    func_0x0286c2b8(iVar6,param_1,param_2,0);
  }
  return;
}

