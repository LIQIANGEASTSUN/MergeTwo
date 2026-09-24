/* Ghidra 12.1.2 native pseudocode; RVA 0x6660AA4; MergeEngine.ECS.Systems.Board.BoardItemConsumerSystem.UnlockConsumedItems; status ok */

/* WARNING: Possible PIC construction at 0x06760dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x067610bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x067610f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0676111c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x067610f8) */
/* WARNING: Removing unreachable block (ram,0x067610c0) */
/* WARNING: Removing unreachable block (ram,0x067610c4) */
/* WARNING: Removing unreachable block (ram,0x06760dd4) */
/* WARNING: Removing unreachable block (ram,0x06760dd8) */
/* WARNING: Removing unreachable block (ram,0x06760df4) */
/* WARNING: Removing unreachable block (ram,0x06760dfc) */
/* WARNING: Removing unreachable block (ram,0x06760e74) */
/* WARNING: Removing unreachable block (ram,0x06760e14) */
/* WARNING: Removing unreachable block (ram,0x06760e80) */
/* WARNING: Removing unreachable block (ram,0x06760eb8) */
/* WARNING: Removing unreachable block (ram,0x06760ed8) */
/* WARNING: Removing unreachable block (ram,0x06760ee4) */
/* WARNING: Removing unreachable block (ram,0x06760eec) */
/* WARNING: Removing unreachable block (ram,0x06760f04) */
/* WARNING: Removing unreachable block (ram,0x06760f1c) */
/* WARNING: Removing unreachable block (ram,0x06760f4c) */
/* WARNING: Removing unreachable block (ram,0x06760f54) */
/* WARNING: Removing unreachable block (ram,0x06760f7c) */
/* WARNING: Removing unreachable block (ram,0x06760f60) */
/* WARNING: Removing unreachable block (ram,0x06760f6c) */
/* WARNING: Removing unreachable block (ram,0x06760f8c) */
/* WARNING: Removing unreachable block (ram,0x06760ff4) */
/* WARNING: Removing unreachable block (ram,0x06761030) */
/* WARNING: Removing unreachable block (ram,0x067610a4) */
/* WARNING: Removing unreachable block (ram,0x06760fb8) */
/* WARNING: Removing unreachable block (ram,0x06761120) */
/* WARNING: Removing unreachable block (ram,0x06761128) */
/* WARNING: Removing unreachable block (ram,0x06761134) */
/* WARNING: Removing unreachable block (ram,0x06761248) */
/* WARNING: Removing unreachable block (ram,0x06761250) */
/* WARNING: Removing unreachable block (ram,0x06761258) */
/* WARNING: Removing unreachable block (ram,0x06761154) */
/* WARNING: Removing unreachable block (ram,0x0676115c) */
/* WARNING: Removing unreachable block (ram,0x067611a0) */
/* WARNING: Removing unreachable block (ram,0x0676121c) */
/* WARNING: Removing unreachable block (ram,0x067611b0) */
/* WARNING: Removing unreachable block (ram,0x067611b8) */
/* WARNING: Removing unreachable block (ram,0x067611e8) */
/* WARNING: Removing unreachable block (ram,0x0676126c) */
/* WARNING: Removing unreachable block (ram,0x06761270) */
/* WARNING: Removing unreachable block (ram,0x06761274) */
/* WARNING: Removing unreachable block (ram,0x06761278) */
/* WARNING: Removing unreachable block (ram,0x06761298) */
/* WARNING: Removing unreachable block (ram,0x067612a4) */
/* WARNING: Removing unreachable block (ram,0x06761228) */
/* WARNING: Removing unreachable block (ram,0x067612c4) */
/* WARNING: Removing unreachable block (ram,0x067612cc) */
/* WARNING: Removing unreachable block (ram,0x067612d8) */
/* WARNING: Removing unreachable block (ram,0x067612e8) */
/* WARNING: Removing unreachable block (ram,0x067612f0) */
/* WARNING: Removing unreachable block (ram,0x06761204) */

void MergeEngine_ECS_Systems_Board_BoardItemConsumerSystem__UnlockConsumedItems
               (long param_1,long param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long lVar13;
  undefined8 *puVar14;
  undefined8 unaff_x21;
  long *plVar15;
  ulong unaff_x22;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x30;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x26;
    *(undefined **)((long)register0x00000008 + -0x38) = unaff_x25;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
    if ((bRam0000000007e28092 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0777e638);
      func_0x03280a18(PTR_DAT_07807638);
      func_0x03280a18(PTR_DAT_07807640);
      func_0x03280a18(PTR_DAT_07807648);
      func_0x03280a18(PTR_DAT_07807650);
      func_0x03280a18(PTR_DAT_0777e4f0);
      bRam0000000007e28092 = 1;
    }
    unaff_x24 = PTR_DAT_07807640;
    puVar6 = PTR_DAT_07807638;
    unaff_x25 = PTR_DAT_0777e638;
    unaff_x26 = PTR_DAT_0777e4f0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x68) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x60) = 0;
    if (param_2 == 0) {
      return;
    }
    func_0x04145068((undefined1 *)((long)register0x00000008 + -0x88),param_2,
                    *(undefined8 *)PTR_DAT_07807650);
    *(undefined8 *)((long)register0x00000008 + -0x68) =
         *(undefined8 *)((long)register0x00000008 + -0x80);
    *(undefined8 *)((long)register0x00000008 + -0x70) =
         *(undefined8 *)((long)register0x00000008 + -0x88);
    *(undefined8 *)((long)register0x00000008 + -0x60) =
         *(undefined8 *)((long)register0x00000008 + -0x78);
    while( true ) {
      uVar8 = func_0x051159b4((undefined1 *)((long)register0x00000008 + -0x70),
                              *(undefined8 *)unaff_x24);
      if ((uVar8 & 1) == 0) {
        func_0x051159b0((undefined1 *)((long)register0x00000008 + -0x70),*(undefined8 *)puVar6);
        return;
      }
      plVar15 = *(long **)((long)register0x00000008 + -0x60);
      if (plVar15 == (long *)0x0) goto LAB_06760c1c;
      lVar9 = func_0x03ced81c(plVar15,*(undefined8 *)unaff_x25);
      if (lVar9 == 0) goto LAB_06760c20;
      *(undefined1 *)(lVar9 + 0x78) = 0;
      lVar9 = *(long *)(param_1 + 0x60);
      unaff_x22 = plVar15[6];
      plVar15 = (long *)func_0x03280ca0(*(undefined8 *)unaff_x26);
      func_0x06104718(plVar15,unaff_x22,0);
      if (plVar15 == (long *)0x0) break;
      uVar10 = (**(code **)(*plVar15 + 0x1e8))(plVar15,*(undefined8 *)(*plVar15 + 0x1f0));
      auVar16._8_8_ = uVar10;
      auVar16._0_8_ = uVar10;
      if (lVar9 == 0) goto LAB_06760c18;
      func_0x06a035ec(lVar9,uVar10,0);
    }
    auVar16 = func_0x03280cac();
LAB_06760c18:
    func_0x03280cac(auVar16._0_8_,auVar16._8_8_);
LAB_06760c1c:
    func_0x03280cac();
LAB_06760c20:
    auVar17 = func_0x03280cac();
    uVar10 = auVar17._0_8_;
    auVar5._8_8_ = plVar15;
    auVar5._0_8_ = uVar10;
    if (auVar17._8_4_ == 1) {
      plVar11 = (long *)func_0x072ce910(uVar10);
      lVar9 = *plVar11;
      func_0x072ce920();
      func_0x051159b0((undefined1 *)((long)register0x00000008 + -0x70),*(undefined8 *)puVar6);
      if (lVar9 == 0) {
        return;
      }
      func_0x03280ca4(lVar9);
    }
    lVar13 = 0;
    func_0x051159b0((undefined1 *)((long)register0x00000008 + -0x70),*(undefined8 *)puVar6);
    func_0x03365958(uVar10);
    func_0x03280ca4(0);
    auVar16 = func_0x02f09514();
    lVar9 = auVar16._8_8_;
    param_1 = auVar16._0_8_;
    *(undefined8 *)((long)register0x00000008 + -0xc0) = 0x6760ca4;
    *(undefined **)((long)register0x00000008 + -0xb8) = puVar6;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(long **)((long)register0x00000008 + -0xa8) = plVar15;
    *(undefined8 *)((long)register0x00000008 + -0xa0) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x98) = uVar10;
    if ((lVar9 == 0) || (auVar5 = auVar16, *(long *)(lVar9 + 0x18) == 0)) goto LAB_06760d58;
    iVar7 = func_0x06228b54(*(long *)(lVar9 + 0x18),0);
    if (iVar7 != 0) {
      return;
    }
    lVar13 = *(long *)(lVar9 + 0x38);
    if (*(char *)(lVar9 + 0x10) != '\0') {
      if (*(long *)(lVar9 + 0x18) != 0) {
        unaff_x22 = (ulong)*(uint *)(lVar9 + 0x30);
        uVar10 = *(undefined8 *)(lVar9 + 0x20);
        auVar5._8_8_ = uVar10;
        auVar5._0_8_ = param_1;
        uVar2 = *(undefined8 *)(lVar9 + 0x28);
        uVar12 = func_0x06228bf4(*(long *)(lVar9 + 0x18),0);
        uVar10 = MergeEngine_ECS_Systems_Board_BoardItemConsumerSystem__LockConsumeItems
                           (param_1,uVar10,uVar2,unaff_x22,uVar12);
        if (lVar13 != 0) {
          puVar14 = (undefined8 *)(lVar13 + 0x10);
          *puVar14 = uVar10;
          if (iRam00000000080486b8 != 0) {
            puVar1 = (ulong *)(((ulong)puVar14 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = *puVar1 | 1L << ((ulong)puVar14 >> 0xc & 0x3f);
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          return;
        }
      }
LAB_06760d58:
      func_0x03280cac();
      puVar6 = PTR_DAT_07807ad8;
      *(undefined8 *)((long)register0x00000008 + -0x100) = unaff_d9;
      *(undefined8 *)((long)register0x00000008 + -0xf8) = unaff_d8;
      *(undefined8 *)((long)register0x00000008 + -0xf0) = 0x6760d5c;
      *(ulong *)((long)register0x00000008 + -0xe0) = unaff_x22;
      *(long *)((long)register0x00000008 + -0xd8) = auVar5._8_8_;
      *(long *)((long)register0x00000008 + -0xd0) = lVar13;
      *(long *)((long)register0x00000008 + -200) = auVar5._0_8_;
      if ((bRam0000000007e28093 & 1) == 0) {
        func_0x03280a18(PTR_DAT_0777a940);
        func_0x03280a18(PTR_DAT_0776bc20);
        func_0x03280a18(PTR_DAT_07807ae0);
        func_0x03280a18(PTR_DAT_07807ad8);
        bRam0000000007e28093 = 1;
      }
      func_0x03280ca0(*(undefined8 *)puVar6);
      return;
    }
    if (lVar13 == 0) goto LAB_06760d58;
    param_2 = *(long *)(lVar13 + 0x10);
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(undefined8 *)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x90);
  } while( true );
}

