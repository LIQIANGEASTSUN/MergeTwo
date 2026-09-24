/* Ghidra 12.1.2 native pseudocode; RVA 0x6A9AF10; Merger.MergeBoard.Controller.BoardController.Initialize; status ok */

void Merger_MergeBoard_Controller_BoardController__Initialize(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  undefined1 auStack_70 [16];
  
  puVar10 = PTR_DAT_07832688;
  puVar9 = PTR_DAT_07832680;
  puVar8 = PTR_DAT_07832678;
  puVar7 = PTR_DAT_07832670;
  puVar6 = PTR_DAT_07832668;
  puVar5 = PTR_DAT_07832660;
  puVar4 = PTR_DAT_07832658;
  puVar3 = PTR_DAT_07832650;
  puVar2 = PTR_DAT_07832648;
  if ((bRam0000000007e2a838 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07832690);
    func_0x03280a18(PTR_DAT_07832698);
    func_0x03280a18(PTR_DAT_078326a0);
    func_0x03280a18(PTR_DAT_078326a8);
    func_0x03280a18(PTR_DAT_078326b0);
    func_0x03280a18(PTR_DAT_078326b8);
    func_0x03280a18(PTR_DAT_078326c0);
    func_0x03280a18(PTR_DAT_078326c8);
    func_0x03280a18(PTR_DAT_078326d0);
    func_0x03280a18(PTR_DAT_07832680);
    func_0x03280a18(PTR_DAT_078326d8);
    func_0x03280a18(PTR_DAT_078326e0);
    func_0x03280a18(PTR_DAT_078326e8);
    func_0x03280a18(PTR_DAT_07832688);
    func_0x03280a18(PTR_DAT_078326f0);
    func_0x03280a18(PTR_DAT_07832658);
    func_0x03280a18(PTR_DAT_078326f8);
    func_0x03280a18(PTR_DAT_07832700);
    func_0x03280a18(PTR_DAT_07832708);
    func_0x03280a18(PTR_DAT_07832710);
    func_0x03280a18(PTR_DAT_07832718);
    func_0x03280a18(PTR_DAT_07832678);
    func_0x03280a18(PTR_DAT_07832660);
    func_0x03280a18(PTR_DAT_07832720);
    func_0x03280a18(PTR_DAT_07832728);
    func_0x03280a18(PTR_DAT_07832730);
    func_0x03280a18(PTR_DAT_07832738);
    func_0x03280a18(PTR_DAT_07832740);
    func_0x03280a18(PTR_DAT_07832670);
    func_0x03280a18(PTR_DAT_07832650);
    func_0x03280a18(PTR_DAT_07832668);
    func_0x03280a18(PTR_DAT_07832748);
    func_0x03280a18(PTR_DAT_07832750);
    func_0x03280a18(PTR_DAT_07832648);
    bRam0000000007e2a838 = 1;
  }
  lVar11 = func_0x03280ca0(*(undefined8 *)puVar2);
  func_0x06015698(lVar11,0);
  auStack_70 = func_0x06b76570(lVar11,*(undefined8 *)(param_1 + 0x10),0);
  func_0x03f5714c(auStack_70,*(undefined8 *)puVar3);
  func_0x03f5714c(auStack_70,*(undefined8 *)puVar4);
  func_0x03f5714c(auStack_70,*(undefined8 *)puVar5);
  func_0x03f5714c(auStack_70,*(undefined8 *)puVar6);
  func_0x03f5714c(auStack_70,*(undefined8 *)puVar7);
  func_0x03f5714c(auStack_70,*(undefined8 *)puVar8);
  func_0x03f5714c(auStack_70,*(undefined8 *)puVar9);
  func_0x03f5714c(auStack_70,*(undefined8 *)puVar10);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_078326f8);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_078326b0);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_078326e0);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_078326a0);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_07832738);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_07832698);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_07832718);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_07832728);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_07832748);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_07832720);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_07832730);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_078326c0);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_078326b8);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_07832750);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_078326c8);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_078326e8);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_07832740);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_07832700);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_07832708);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_078326d0);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_078326d8);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_078326f0);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_078326a8);
  func_0x03f5714c(auStack_70,*(undefined8 *)PTR_DAT_07832710);
  puVar2 = PTR_DAT_07832690;
  lVar18 = *(long *)(param_1 + 0x20);
  if ((lVar18 != 0) && (uVar1 = *(uint *)(lVar18 + 0x18), 0 < (int)uVar1)) {
    uVar19 = 0;
    do {
      if (uVar1 <= uVar19) {
        func_0x03280cb4();
        goto LAB_06b9b478;
      }
      plVar17 = *(long **)(lVar18 + (long)(int)uVar19 * 8 + 0x20);
      if (plVar17 == (long *)0x0) goto LAB_06b9b478;
      lVar14 = *plVar17;
      uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)puVar2) {
            puVar12 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_06b9b414;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)func_0x03256b10(plVar17,*(long *)puVar2,0);
LAB_06b9b414:
      (*(code *)*puVar12)(plVar17,lVar11,puVar12[1]);
      uVar1 = *(uint *)(lVar18 + 0x18);
      uVar19 = uVar19 + 1;
    } while ((int)uVar19 < (int)uVar1);
  }
  if (lVar11 != 0) {
    uVar13 = func_0x06015454(lVar11,0);
    *(undefined8 *)(param_1 + 0x38) = uVar13;
    func_0x032809c4((undefined8 *)(param_1 + 0x38),uVar13);
    return;
  }
LAB_06b9b478:
  lVar11 = func_0x03280cac();
  *(undefined1 *)(lVar11 + 0x40) = 1;
  return;
}

