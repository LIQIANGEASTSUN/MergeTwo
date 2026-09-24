/* Ghidra 12.1.2 native pseudocode; RVA 0x665F06C; MergeEngine.ECS.Systems.Board.BoardInteractionSystem.CanCombineItems; status ok */

ulong MergeEngine_ECS_Systems_Board_BoardInteractionSystem__CanCombineItems
                (long param_1,long param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  undefined8 *unaff_x24;
  undefined1 auVar14 [12];
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  
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
  uStack_70 = 0;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  if (*(long *)(param_1 + 0xd8) == 0) {
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
    func_0x04145068(&uStack_88,*(long *)(param_1 + 0xd8),*(undefined8 *)PTR_DAT_07807a18);
    uStack_68 = CONCAT44(uStack_7c,uStack_80);
    uStack_70 = uStack_88;
    plStack_60 = plStack_78;
    do {
      uVar5 = func_0x051159b4(&uStack_70,*(undefined8 *)puVar2);
      plVar8 = plStack_60;
      if ((uVar5 & 1) == 0) {
        uVar12 = 0;
        iVar13 = 6;
        goto LAB_0675f294;
      }
      unaff_x24 = (undefined8 *)puVar3;
      if (plStack_60 == (long *)0x0) {
        func_0x03280cac();
        goto LAB_0675f2d4;
      }
      lVar10 = *plStack_60;
      uVar5 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
            puVar6 = (undefined8 *)(lVar10 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0675f1b8;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)func_0x03256b10(plStack_60,*(long *)puVar4,0);
LAB_0675f1b8:
      uVar5 = (*(code *)*puVar6)(plVar8,param_2,param_3,puVar6[1]);
    } while ((uVar5 & 1) == 0);
    lVar10 = *plVar8;
    bVar1 = *(byte *)(*(long *)PTR_DAT_07807a20 + 0x130);
    if ((bVar1 <= *(byte *)(lVar10 + 0x130)) &&
       (*(long *)(*(long *)(lVar10 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_07807a20)) {
LAB_0675f284:
      uVar12 = 1;
      iVar13 = 5;
LAB_0675f294:
      func_0x051159b0(&uStack_70,*(undefined8 *)puVar3);
      goto LAB_0675f2a0;
    }
    lVar10 = *(long *)(param_1 + 0x58);
    uStack_80 = 0;
    uStack_88 = 0;
    func_0x04377220(&uStack_88,param_4,*(undefined8 *)PTR_DAT_077e6f08);
    if (lVar10 == 0) goto LAB_0675f2d8;
    *(undefined4 *)(lVar10 + 0x38) = uStack_80;
    *(undefined8 *)(lVar10 + 0x30) = uStack_88;
    puVar2 = PTR_DAT_077d7588;
    if (param_3 == 0) goto LAB_0675f2dc;
    lVar10 = func_0x03ced81c(param_3,*(undefined8 *)PTR_DAT_077d7588);
    if (param_2 == 0) goto LAB_0675f2e0;
    lVar7 = func_0x03ced81c(param_2,*(undefined8 *)puVar2);
    if (lVar7 == 0) goto LAB_0675f2e4;
    *(undefined1 *)(lVar7 + 0x2d) = 1;
    if (lVar10 != 0) {
      *(undefined2 *)(lVar10 + 0x2c) = 0x101;
      goto LAB_0675f284;
    }
  }
  auVar14 = func_0x03280cac();
  uVar9 = auVar14._0_8_;
  if (auVar14._8_4_ == 1) {
    plVar8 = (long *)func_0x072ce910(uVar9);
    lVar10 = *plVar8;
    func_0x072ce920();
    func_0x051159b0(&uStack_70,*unaff_x24);
    if (lVar10 == 0) {
      uVar12 = 0;
      iVar13 = 0;
LAB_0675f2a0:
      return (ulong)(uVar12 & iVar13 == 5);
    }
    uVar9 = func_0x03280ca4(lVar10);
  }
  else {
    lVar10 = 0;
  }
  func_0x051159b0(&uStack_70,*unaff_x24);
  if (lVar10 == 0) {
    func_0x03365958(uVar9);
  }
  func_0x03280ca4(lVar10);
  lVar10 = func_0x02f09514();
  if ((bRam0000000007e28089 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077d7588);
    bRam0000000007e28089 = 1;
  }
  puVar3 = PTR_DAT_077d7588;
  uVar5 = 0;
  if (*(long *)(lVar10 + 0x68) != 0) {
    lVar7 = func_0x03ced81c(*(long *)(lVar10 + 0x68),*(undefined8 *)PTR_DAT_077d7588);
    uVar5 = 0;
    if (lVar7 != 0) {
      if ((*(long *)(lVar10 + 0x68) == 0) ||
         (uVar5 = func_0x03ced81c(*(long *)(lVar10 + 0x68),*(undefined8 *)puVar3), uVar5 == 0)) {
        uVar5 = func_0x03280cac();
        puVar2 = PTR_DAT_07807a30;
        puVar3 = PTR_DAT_07807a28;
        if ((bRam0000000007e2808a & 1) == 0) {
          func_0x03280a18(PTR_DAT_07807a30);
          func_0x03280a18(PTR_DAT_07807a28);
          bRam0000000007e2808a = 1;
        }
        uVar9 = func_0x03280ca0(*(undefined8 *)puVar3);
        func_0x04143c38(uVar9,*(undefined8 *)puVar2);
        *(undefined8 *)(uVar5 + 0xd8) = uVar9;
        func_0x032809c4((undefined8 *)(uVar5 + 0xd8),uVar9);
        return uVar5;
      }
      *(undefined1 *)(uVar5 + 0x2d) = 0;
    }
  }
  return uVar5;
}

