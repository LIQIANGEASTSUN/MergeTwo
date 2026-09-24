/* Ghidra 12.1.2 bounded pseudocode; RVA 0x665EF68; bound 260 bytes; MergeEngine.ECS.Systems.Board.BoardSystem.MoveItem; status ok */


ulong MergeEngine_ECS_Systems_Board_BoardSystem__MoveItem
                (long *param_1,undefined8 param_2,long param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  undefined8 *unaff_x24;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  code *pcStack_80;
  
  lVar10 = param_3;
  lVar11 = param_4;
  if ((bRam0000000007e280dc & 1) == 0) {
    func_0x03280a18(PTR_DAT_077cc678);
    bRam0000000007e280dc = 1;
  }
  if (param_1[0x11] != 0) {
    lVar10 = 0;
    lVar11 = 0;
    func_0x06a0249c(param_1[0x11],param_2);
    if (param_1[0x11] != 0) {
      lVar11 = 0;
      func_0x06a0249c(param_1[0x11],param_3);
      plVar5 = (long *)(**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
      lVar10 = param_4;
      if (plVar5 != (long *)0x0) {
        lVar10 = *plVar5;
        uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_077cc678) {
              puVar6 = (undefined8 *)(lVar10 + (long)(*piVar13 + 0x16) * 0x10 + 0x138);
              goto LAB_0675f048;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar6 = (undefined8 *)func_0x03256b10(plVar5,*(long *)PTR_DAT_077cc678,0x16);
LAB_0675f048:
                    /* WARNING: Could not recover jumptable at 0x0675f064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar12 = (*(code *)*puVar6)(plVar5,param_2,param_3,puVar6[1]);
        return uVar12;
      }
    }
  }
  auVar16 = func_0x03280cac();
  lVar9 = auVar16._8_8_;
  pcStack_80 = MergeEngine_ECS_Systems_Board_BoardInteractionSystem__CanCombineItems;
  if ((bRam0000000007e28086 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07807a20);
    func_0x03280a18(PTR_DAT_077d7588);
    func_0x03280a18(PTR_DAT_078079f8);
    func_0x03280a18(PTR_DAT_07807a00);
    func_0x03280a18(PTR_DAT_07807a08);
    func_0x03280a18(PTR_DAT_07807a10);
    func_0x03280a18(PTR_DAT_07807a18);
    func_0x03280a18(PTR_DAT_077e6f08);
    bRam0000000007e28086 = 1;
  }
  puVar4 = PTR_DAT_07807a10;
  puVar2 = PTR_DAT_07807a00;
  puVar3 = PTR_DAT_078079f8;
  uStack_a0 = 0;
  uStack_98 = 0;
  plStack_90 = (long *)0x0;
  lVar7 = *(long *)(auVar16._0_8_ + 0xd8);
  if (lVar7 == 0) {
LAB_0675f2d4:
    func_0x03280cac();
LAB_0675f2d8:
    func_0x03280cac();
LAB_0675f2dc:
    func_0x03280cac();
LAB_0675f2e0:
    func_0x03280cac();
LAB_0675f2e4:
    func_0x03280cac();
  }
  else {
    func_0x04145068(&uStack_b8,lVar7,*(undefined8 *)PTR_DAT_07807a18);
    uStack_98 = CONCAT44(uStack_ac,uStack_b0);
    uStack_a0 = uStack_b8;
    plStack_90 = plStack_a8;
    do {
      uVar12 = func_0x051159b4(&uStack_a0,*(undefined8 *)puVar2);
      plVar5 = plStack_90;
      if ((uVar12 & 1) == 0) {
        uVar14 = 0;
        iVar15 = 6;
        goto LAB_0675f294;
      }
      unaff_x24 = (undefined8 *)puVar3;
      if (plStack_90 == (long *)0x0) {
        func_0x03280cac();
        goto LAB_0675f2d4;
      }
      lVar7 = *plStack_90;
      uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0675f1b8;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plStack_90,*(long *)puVar4,0);
LAB_0675f1b8:
      uVar12 = (*(code *)*puVar6)(plVar5,lVar9,lVar10,puVar6[1]);
    } while ((uVar12 & 1) == 0);
    lVar7 = *plVar5;
    bVar1 = *(byte *)(*(long *)PTR_DAT_07807a20 + 0x130);
    if ((bVar1 <= *(byte *)(lVar7 + 0x130)) &&
       (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_07807a20)) {
LAB_0675f284:
      uVar14 = 1;
      iVar15 = 5;
LAB_0675f294:
      func_0x051159b0(&uStack_a0,*(undefined8 *)puVar3);
      goto LAB_0675f2a0;
    }
    lVar7 = *(long *)(auVar16._0_8_ + 0x58);
    uStack_b0 = 0;
    uStack_b8 = 0;
    func_0x04377220(&uStack_b8,lVar11,*(undefined8 *)PTR_DAT_077e6f08);
    if (lVar7 == 0) goto LAB_0675f2d8;
    *(undefined4 *)(lVar7 + 0x38) = uStack_b0;
    *(undefined8 *)(lVar7 + 0x30) = uStack_b8;
    puVar2 = PTR_DAT_077d7588;
    if (lVar10 == 0) goto LAB_0675f2dc;
    lVar10 = func_0x03ced81c(lVar10,*(undefined8 *)PTR_DAT_077d7588);
    if (lVar9 == 0) goto LAB_0675f2e0;
    lVar11 = func_0x03ced81c(lVar9,*(undefined8 *)puVar2);
    if (lVar11 == 0) goto LAB_0675f2e4;
    *(undefined1 *)(lVar11 + 0x2d) = 1;
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 0x2c) = 0x101;
      goto LAB_0675f284;
    }
  }
  auVar17 = func_0x03280cac();
  uVar8 = auVar17._0_8_;
  if (auVar17._8_4_ == 1) {
    plVar5 = (long *)func_0x072ce910(uVar8);
    lVar10 = *plVar5;
    func_0x072ce920();
    func_0x051159b0(&uStack_a0,*unaff_x24);
    if (lVar10 == 0) {
      uVar14 = 0;
      iVar15 = 0;
LAB_0675f2a0:
      return (ulong)(uVar14 & iVar15 == 5);
    }
    uVar8 = func_0x03280ca4(lVar10);
  }
  else {
    lVar10 = 0;
  }
  func_0x051159b0(&uStack_a0,*unaff_x24);
  if (lVar10 == 0) {
    func_0x03365958(uVar8);
  }
  func_0x03280ca4(lVar10);
  lVar10 = func_0x02f09514();
  if ((bRam0000000007e28089 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d7588);
    bRam0000000007e28089 = 1;
  }
  puVar3 = PTR_DAT_077d7588;
  uVar12 = 0;
  if (*(long *)(lVar10 + 0x68) != 0) {
    lVar11 = func_0x03ced81c(*(long *)(lVar10 + 0x68),*(undefined8 *)PTR_DAT_077d7588);
    uVar12 = 0;
    if (lVar11 != 0) {
      if ((*(long *)(lVar10 + 0x68) == 0) ||
         (uVar12 = func_0x03ced81c(*(long *)(lVar10 + 0x68),*(undefined8 *)puVar3), uVar12 == 0)) {
        uVar12 = func_0x03280cac();
        puVar2 = PTR_DAT_07807a30;
        puVar3 = PTR_DAT_07807a28;
        if ((bRam0000000007e2808a & 1) == 0) {
          func_0x03280a18(PTR_DAT_07807a30);
          func_0x03280a18(PTR_DAT_07807a28);
          bRam0000000007e2808a = 1;
        }
        uVar8 = func_0x03280ca0(*(undefined8 *)puVar3);
        func_0x04143c38(uVar8,*(undefined8 *)puVar2);
        *(undefined8 *)(uVar12 + 0xd8) = uVar8;
        func_0x032809c4((undefined8 *)(uVar12 + 0xd8),uVar8);
        return uVar12;
      }
      *(undefined1 *)(uVar12 + 0x2d) = 0;
    }
  }
  return uVar12;
}

