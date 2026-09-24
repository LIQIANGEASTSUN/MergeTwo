/* Ghidra 12.1.2 native pseudocode; RVA 0x69040B8; MergeEngine.ECS.Components.Board.BoardQueueComponent.Enqueue; status ok */


/* WARNING: Possible PIC construction at 0x04321a14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x04321a50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a04094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a04194: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a041e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a04334: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a04384: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06a04338) */
/* WARNING: Removing unreachable block (ram,0x06a041e8) */
/* WARNING: Removing unreachable block (ram,0x06a04198) */
/* WARNING: Removing unreachable block (ram,0x06a041ec) */
/* WARNING: Removing unreachable block (ram,0x06a0419c) */
/* WARNING: Removing unreachable block (ram,0x06a041a8) */
/* WARNING: Removing unreachable block (ram,0x06a041c4) */
/* WARNING: Removing unreachable block (ram,0x06a041f8) */
/* WARNING: Removing unreachable block (ram,0x06a041cc) */
/* WARNING: Removing unreachable block (ram,0x06a04098) */
/* WARNING: Removing unreachable block (ram,0x04321a54) */
/* WARNING: Removing unreachable block (ram,0x04321a18) */
/* WARNING: Removing unreachable block (ram,0x04d0f32c) */
/* WARNING: Removing unreachable block (ram,0x04d0f33c) */
/* WARNING: Removing unreachable block (ram,0x04d0f350) */
/* WARNING: Removing unreachable block (ram,0x04d0f36c) */
/* WARNING: Removing unreachable block (ram,0x04d0f358) */
/* WARNING: Removing unreachable block (ram,0x06a04388) */
/* WARNING: Removing unreachable block (ram,0x06a0438c) */
/* WARNING: Removing unreachable block (ram,0x06a04390) */

undefined8 *
MergeEngine_ECS_Components_Board_BoardQueueComponent__Enqueue(long param_1,long param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined *unaff_x21;
  undefined *puVar12;
  undefined8 unaff_x22;
  undefined8 unaff_x30;
  undefined1 auVar13 [16];
  undefined8 auStack_40 [2];
  long lStack_30;
  long lStack_28;
  
  auVar4._8_8_ = unaff_x20;
  auVar4._0_8_ = unaff_x19;
  auVar13._8_8_ = unaff_x20;
  auVar13._0_8_ = unaff_x19;
  puVar12 = (undefined *)0x7e29000;
  lVar9 = param_1;
  if ((bRam0000000007e29917 & 1) == 0) {
    lVar9 = func_0x03280a18(PTR_DAT_07752c80);
    bRam0000000007e29917 = 1;
  }
  if ((param_2 == 0) || (param_1 == 0)) {
    lVar9 = func_0x03280cac();
    auStack_40[0] = 0x6a04140;
    lStack_30 = param_2;
    lStack_28 = param_1;
    if ((bRam0000000007e29918 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07752c80);
      func_0x03280a18(PTR_DAT_078269a0);
      func_0x03280a18(PTR_DAT_07826980);
      func_0x03280a18(PTR_DAT_078269a8);
      bRam0000000007e29918 = 1;
    }
    uVar8 = 0x6a04198;
    puVar7 = auStack_40;
    do {
      *(undefined8 *)((long)puVar7 + -0x20) = uVar8;
      *(undefined8 *)((long)puVar7 + -0x10) = 0x7e29000;
      *(long *)((long)puVar7 + -8) = lVar9;
      if ((bRam0000000007e29920 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07826908);
        func_0x03280a18(PTR_DAT_07826998);
        func_0x03280a18(PTR_DAT_078269b0);
        bRam0000000007e29920 = 1;
      }
      lVar11 = *(long *)(lVar9 + 0x28);
      if (lVar11 != 0) {
        if (0 < *(int *)(lVar11 + 0x18)) {
          return *(undefined8 **)(lVar11 + 0x10);
        }
        lVar11 = *(long *)(lVar9 + 0x30);
        if (lVar11 != 0) {
          if (*(int *)(lVar11 + 0x18) < 1) {
            return (undefined8 *)0x0;
          }
          uVar8 = *(undefined8 *)PTR_DAT_078269b0;
          if (*(long *)(lVar11 + 0x10) != 0) {
            return *(undefined8 **)(*(long *)(lVar11 + 0x10) + 0x20);
          }
          return (undefined8 *)0x0;
        }
      }
      auVar13 = func_0x03280cac();
      lVar11 = auVar13._8_8_;
      param_1 = auVar13._0_8_;
      register0x00000008 = (BADSPACEBASE *)((long)puVar7 + -0x40);
      *(undefined8 *)((long)puVar7 + -0x40) = 0x6a0429c;
      *(undefined **)((long)puVar7 + -0x38) = puVar12;
      *(undefined8 *)((long)puVar7 + -0x30) = 0x7e29000;
      *(long *)((long)puVar7 + -0x28) = lVar9;
      if ((bRam0000000007e29919 & 1) == 0) {
        func_0x03280a18(PTR_DAT_07752c80);
        func_0x03280a18(PTR_DAT_078269b8);
        bRam0000000007e29919 = 1;
      }
      unaff_x21 = PTR_DAT_078269b8;
      puVar12 = (undefined *)0x7e29000;
      if (*(long *)(param_1 + 0x28) != 0) {
        uVar10 = func_0x054f0d40(*(long *)(param_1 + 0x28),lVar11,*(undefined8 *)PTR_DAT_078269b8);
        puVar12 = unaff_x21;
        if ((uVar10 & 1) == 0) {
          if (*(long *)(param_1 + 0x30) == 0) goto LAB_06a04350;
          uVar10 = func_0x054f0d40(*(long *)(param_1 + 0x30),lVar11,*(undefined8 *)unaff_x21);
          if ((uVar10 & 1) == 0) {
            return (undefined8 *)0x0;
          }
        }
        if ((lVar11 != 0) && (*(long *)(param_1 + 0x38) != 0)) goto code_r0x06a0431c;
      }
LAB_06a04350:
      lVar9 = func_0x03280cac();
      *(undefined8 *)((long)puVar7 + -0x60) = 0x6a04354;
      *(long *)((long)puVar7 + -0x50) = lVar11;
      *(long *)((long)puVar7 + -0x48) = param_1;
      if ((bRam0000000007e2991a & 1) == 0) {
        func_0x03280a18(PTR_DAT_07826980);
        bRam0000000007e2991a = 1;
      }
      uVar8 = 0x6a04388;
      puVar7 = (undefined8 *)((long)puVar7 + -0x60);
    } while( true );
  }
  lVar11 = 0x28;
  if (*(int *)(param_2 + 0x40) != 1) {
    lVar11 = 0x30;
  }
  func_0x06a03ee4(lVar9,*(undefined8 *)(param_1 + lVar11),param_2);
  if (*(long *)(param_1 + 0x40) != 0) {
    func_0x053c1024(*(long *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x20),
                    *(undefined8 *)PTR_DAT_07752c80);
    auVar13 = auVar4;
  }
SUB_06a03fd0:
  *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x30;
  *(long *)((long)register0x00000008 + -0x10) = auVar13._8_8_;
  *(long *)((long)register0x00000008 + -8) = auVar13._0_8_;
  if ((bRam0000000007e29921 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826940);
    bRam0000000007e29921 = 1;
  }
  lVar9 = *(long *)(param_1 + 0x58);
  uVar8 = func_0x06a048b4(param_1);
  if (lVar9 == 0) {
    lVar9 = func_0x03280cac();
    *(undefined8 *)((long)register0x00000008 + -0x40) = 0x6a04030;
    *(undefined8 *)((long)register0x00000008 + -0x30) = 0;
    *(long *)((long)register0x00000008 + -0x28) = param_1;
    if ((bRam0000000007e29916 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07826970);
      bRam0000000007e29916 = 1;
    }
    puVar12 = PTR_DAT_07826970;
    if (*(long *)(lVar9 + 0x28) != 0) {
      func_0x054f0998(*(long *)(lVar9 + 0x28),*(undefined8 *)PTR_DAT_07826970);
      if (*(long *)(lVar9 + 0x30) != 0) {
        func_0x054f0998(*(long *)(lVar9 + 0x30),*(undefined8 *)puVar12);
        *(undefined1 *)(lVar9 + 0x50) = 0;
        puVar7 = (undefined8 *)(lVar9 + 0x40);
        *puVar7 = 0;
        goto SUB_032809c4;
      }
    }
    lVar9 = func_0x03280cac();
    puVar7 = (undefined8 *)(lVar9 + 0x40);
    *puVar7 = 0;
  }
  else {
    lVar11 = *(long *)PTR_DAT_07826940;
    *(undefined8 *)((long)register0x00000008 + -0x30) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined **)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
    plVar5 = (long *)func_0x039574b0(*(undefined8 *)
                                      (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x20));
    if (plVar5 == (long *)0x0) {
      auVar13 = func_0x03280cac();
      *(undefined8 *)((long)register0x00000008 + -0x50) = 0x4321a3c;
      *(long *)((long)register0x00000008 + -0x40) = lVar9;
      *(long *)((long)register0x00000008 + -0x38) = lVar11;
      puVar7 = (undefined8 *)(auVar13._0_8_ + 0x20);
      *puVar7 = auVar13._8_8_;
    }
    else {
      puVar7 = (undefined8 *)(lVar9 + 0x20);
      puVar6 = (undefined8 *)
               (**(code **)(*plVar5 + 0x1b8))(plVar5,*puVar7,uVar8,*(undefined8 *)(*plVar5 + 0x1c0))
      ;
      if (((ulong)puVar6 & 1) != 0) {
        return puVar6;
      }
      *(undefined8 *)(lVar9 + 0x20) = uVar8;
    }
  }
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar7 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar7 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return puVar7;
code_r0x06a0431c:
  func_0x053c1024(*(long *)(param_1 + 0x38),*(undefined8 *)(lVar11 + 0x20),
                  *(undefined8 *)PTR_DAT_07752c80);
  unaff_x30 = 0x6a04338;
  goto SUB_06a03fd0;
}

