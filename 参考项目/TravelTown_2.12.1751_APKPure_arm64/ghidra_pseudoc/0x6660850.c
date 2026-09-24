/* Ghidra 12.1.2 native pseudocode; RVA 0x6660850; MergeEngine.ECS.Systems.Board.BoardItemConsumerSystem.LockConsumeItems; status ok */

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

undefined8 *
MergeEngine_ECS_Systems_Board_BoardItemConsumerSystem__LockConsumeItems
          (long param_1,ulong param_2,long *param_3,undefined *param_4,undefined8 param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined8 uVar17;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 *puStack_48;
  
  puVar16 = (undefined *)0x7e28000;
  if ((bRam0000000007e28091 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777e638);
    func_0x03280a18(PTR_DAT_07807638);
    func_0x03280a18(PTR_DAT_07807640);
    func_0x03280a18(PTR_DAT_07807648);
    func_0x03280a18(PTR_DAT_07807650);
    func_0x03280a18(PTR_DAT_0777e4f0);
    bRam0000000007e28091 = 1;
  }
  puStack_48 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_68 = 0;
  plStack_60 = (long *)0x0;
  uVar7 = MergeEngine_ECS_Systems_Board_BoardItemConsumerSystem__GetTaskConsumeItems
                    (param_1,param_2,param_3,(ulong)param_4 & 0xffffffff,param_5,&puStack_48);
  puVar11 = (undefined8 *)0x0;
  if ((uVar7 & 1) != 0) {
    if (puStack_48 == (undefined8 *)0x0) {
LAB_06760a10:
      auVar21 = func_0x03280cac();
      uVar9 = auVar21._0_8_;
      if (auVar21._8_4_ == 1) {
        plVar10 = (long *)func_0x072ce910(uVar9);
        lVar8 = *plVar10;
        func_0x072ce920();
        func_0x051159b0(&uStack_70,*(undefined8 *)PTR_DAT_07807638);
        if (lVar8 == 0) {
          return puStack_48;
        }
        func_0x03280ca4(lVar8);
      }
      uVar14 = 0;
      func_0x051159b0(&uStack_70,*(undefined8 *)PTR_DAT_07807638);
      func_0x03365958(uVar9);
      func_0x03280ca4(0);
      uVar17 = 0x6760aa4;
      auVar18 = func_0x02f09514();
      puVar6 = auStack_90;
      do {
        *(undefined8 *)(puVar6 + -0x50) = uVar17;
        *(undefined **)(puVar6 + -0x40) = unaff_x26;
        *(undefined **)(puVar6 + -0x38) = unaff_x25;
        *(undefined **)(puVar6 + -0x30) = puVar16;
        *(undefined **)(puVar6 + -0x28) = param_4;
        *(ulong *)(puVar6 + -0x20) = param_2;
        *(long **)(puVar6 + -0x18) = param_3;
        *(undefined8 *)(puVar6 + -0x10) = uVar14;
        *(undefined8 *)(puVar6 + -8) = uVar9;
        puVar11 = auVar18._0_8_;
        if ((bRam0000000007e28092 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0777e638);
          func_0x03280a18(PTR_DAT_07807638);
          func_0x03280a18(PTR_DAT_07807640);
          func_0x03280a18(PTR_DAT_07807648);
          func_0x03280a18(PTR_DAT_07807650);
          puVar11 = (undefined8 *)func_0x03280a18(PTR_DAT_0777e4f0);
          bRam0000000007e28092 = 1;
        }
        puVar16 = PTR_DAT_07807640;
        puVar5 = PTR_DAT_07807638;
        unaff_x25 = PTR_DAT_0777e638;
        unaff_x26 = PTR_DAT_0777e4f0;
        *(undefined8 *)(puVar6 + -0x70) = 0;
        *(undefined8 *)(puVar6 + -0x68) = 0;
        *(undefined8 *)(puVar6 + -0x60) = 0;
        if (auVar18._8_8_ == 0) {
          return puVar11;
        }
        func_0x04145068(puVar6 + -0x88,auVar18._8_8_,*(undefined8 *)PTR_DAT_07807650);
        *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)(puVar6 + -0x80);
        *(undefined8 *)(puVar6 + -0x70) = *(undefined8 *)(puVar6 + -0x88);
        *(undefined8 *)(puVar6 + -0x60) = *(undefined8 *)(puVar6 + -0x78);
        while( true ) {
          uVar7 = func_0x051159b4(puVar6 + -0x70,*(undefined8 *)puVar16);
          if ((uVar7 & 1) == 0) {
            puVar11 = (undefined8 *)func_0x051159b0(puVar6 + -0x70,*(undefined8 *)puVar5);
            return puVar11;
          }
          plVar10 = *(long **)(puVar6 + -0x60);
          if (plVar10 == (long *)0x0) goto LAB_06760c1c;
          lVar8 = func_0x03ced81c(plVar10,*(undefined8 *)unaff_x25);
          if (lVar8 == 0) goto LAB_06760c20;
          *(undefined1 *)(lVar8 + 0x78) = 0;
          lVar8 = auVar18._0_8_[0xc];
          param_2 = plVar10[6];
          plVar10 = (long *)func_0x03280ca0(*(undefined8 *)unaff_x26);
          func_0x06104718(plVar10,param_2,0);
          if (plVar10 == (long *)0x0) break;
          uVar9 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
          auVar19._8_8_ = uVar9;
          auVar19._0_8_ = uVar9;
          if (lVar8 == 0) goto LAB_06760c18;
          func_0x06a035ec(lVar8,uVar9,0);
        }
        auVar19 = func_0x03280cac();
LAB_06760c18:
        func_0x03280cac(auVar19._0_8_,auVar19._8_8_);
LAB_06760c1c:
        func_0x03280cac();
LAB_06760c20:
        auVar21 = func_0x03280cac();
        uVar9 = auVar21._0_8_;
        auVar4._8_8_ = plVar10;
        auVar4._0_8_ = uVar9;
        if (auVar21._8_4_ == 1) {
          plVar12 = (long *)func_0x072ce910(uVar9);
          lVar8 = *plVar12;
          func_0x072ce920();
          puVar11 = (undefined8 *)func_0x051159b0(puVar6 + -0x70,*(undefined8 *)puVar5);
          if (lVar8 == 0) {
            return puVar11;
          }
          func_0x03280ca4(lVar8);
        }
        lVar15 = 0;
        func_0x051159b0(puVar6 + -0x70,*(undefined8 *)puVar5);
        func_0x03365958(uVar9);
        func_0x03280ca4(0);
        auVar20 = func_0x02f09514();
        lVar8 = auVar20._8_8_;
        uVar14 = auVar20._0_8_;
        *(undefined8 *)(puVar6 + -0xc0) = 0x6760ca4;
        *(undefined **)(puVar6 + -0xb8) = puVar5;
        *(ulong *)(puVar6 + -0xb0) = param_2;
        *(long **)(puVar6 + -0xa8) = plVar10;
        *(undefined8 *)(puVar6 + -0xa0) = 0;
        *(undefined8 *)(puVar6 + -0x98) = uVar9;
        if ((lVar8 == 0) || (auVar4 = auVar20, *(long *)(lVar8 + 0x18) == 0)) goto LAB_06760d58;
        puVar11 = (undefined8 *)func_0x06228b54(*(long *)(lVar8 + 0x18),0);
        if ((int)puVar11 != 0) {
          return puVar11;
        }
        lVar15 = *(long *)(lVar8 + 0x38);
        if (*(char *)(lVar8 + 0x10) != '\0') {
          if (*(long *)(lVar8 + 0x18) != 0) {
            param_2 = (ulong)*(uint *)(lVar8 + 0x30);
            uVar9 = *(undefined8 *)(lVar8 + 0x20);
            auVar4._8_8_ = uVar9;
            auVar4._0_8_ = uVar14;
            uVar17 = *(undefined8 *)(lVar8 + 0x28);
            uVar13 = func_0x06228bf4(*(long *)(lVar8 + 0x18),0);
            uVar9 = MergeEngine_ECS_Systems_Board_BoardItemConsumerSystem__LockConsumeItems
                              (uVar14,uVar9,uVar17,param_2,uVar13);
            if (lVar15 != 0) {
              puVar11 = (undefined8 *)(lVar15 + 0x10);
              *puVar11 = uVar9;
              if (iRam00000000080486b8 != 0) {
                puVar1 = (ulong *)(((ulong)puVar11 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
                do {
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar3) {
                    *puVar1 = *puVar1 | 1L << ((ulong)puVar11 >> 0xc & 0x3f);
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
              }
              return puVar11;
            }
          }
LAB_06760d58:
          func_0x03280cac();
          puVar16 = PTR_DAT_07807ad8;
          *(undefined8 *)(puVar6 + -0x100) = unaff_d9;
          *(undefined8 *)(puVar6 + -0xf8) = unaff_d8;
          *(undefined8 *)(puVar6 + -0xf0) = 0x6760d5c;
          *(ulong *)(puVar6 + -0xe0) = param_2;
          *(long *)(puVar6 + -0xd8) = auVar4._8_8_;
          *(long *)(puVar6 + -0xd0) = lVar15;
          *(long *)(puVar6 + -200) = auVar4._0_8_;
          if ((bRam0000000007e28093 & 1) == 0) {
            func_0x03280a18(PTR_DAT_0777a940);
            func_0x03280a18(PTR_DAT_0776bc20);
            func_0x03280a18(PTR_DAT_07807ae0);
            func_0x03280a18(PTR_DAT_07807ad8);
            bRam0000000007e28093 = 1;
          }
          puVar11 = (undefined8 *)func_0x03280ca0(*(undefined8 *)puVar16);
          return puVar11;
        }
        if (lVar15 == 0) goto LAB_06760d58;
        auVar18._8_8_ = *(undefined8 *)(lVar15 + 0x10);
        auVar18._0_8_ = uVar14;
        uVar14 = *(undefined8 *)(puVar6 + -0xa0);
        uVar9 = *(undefined8 *)(puVar6 + -0x98);
        param_2 = *(ulong *)(puVar6 + -0xb0);
        param_3 = *(long **)(puVar6 + -0xa8);
        uVar17 = *(undefined8 *)(puVar6 + -0xc0);
        param_4 = *(undefined **)(puVar6 + -0xb8);
        puVar6 = puVar6 + -0x90;
      } while( true );
    }
    func_0x04145068(&uStack_88,puStack_48,*(undefined8 *)PTR_DAT_07807650);
    param_4 = PTR_DAT_07807640;
    puVar16 = PTR_DAT_0777e638;
    unaff_x26 = PTR_DAT_0777e4f0;
    uStack_68 = uStack_80;
    uStack_70 = uStack_88;
    plStack_60 = plStack_78;
    unaff_x25 = (undefined *)0x1;
    while (uVar7 = func_0x051159b4(&uStack_70,*(undefined8 *)param_4), param_3 = plStack_60,
          (uVar7 & 1) != 0) {
      if (plStack_60 == (long *)0x0) {
LAB_06760a08:
        func_0x03280cac();
LAB_06760a0c:
        func_0x03280cac();
        goto LAB_06760a10;
      }
      lVar8 = func_0x03ced81c(plStack_60,*(undefined8 *)puVar16);
      if (lVar8 == 0) goto LAB_06760a0c;
      *(undefined1 *)(lVar8 + 0x78) = 1;
      lVar8 = *(long *)(param_1 + 0x60);
      param_2 = param_3[6];
      param_3 = (long *)func_0x03280ca0(*(undefined8 *)unaff_x26);
      func_0x06104718(param_3,param_2,0);
      if (param_3 == (long *)0x0) {
        auVar20 = func_0x03280cac();
LAB_06760a04:
        func_0x03280cac(auVar20._0_8_,auVar20._8_8_);
        goto LAB_06760a08;
      }
      uVar9 = (**(code **)(*param_3 + 0x1e8))(param_3,*(undefined8 *)(*param_3 + 0x1f0));
      auVar20._8_8_ = uVar9;
      auVar20._0_8_ = uVar9;
      if (lVar8 == 0) goto LAB_06760a04;
      func_0x06a03448(lVar8,uVar9,0);
    }
    func_0x051159b0(&uStack_70,*(undefined8 *)PTR_DAT_07807638);
    puVar11 = puStack_48;
  }
  return puVar11;
}

