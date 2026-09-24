/* Ghidra 12.1.2 native pseudocode; RVA 0x6137E4C; MergeEngine.Model.Configuration.BubbledItemsConfigurationModel.SetupRemovedBubbleSpawns; status ok */


/* WARNING: Possible PIC construction at 0x06237fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06238044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06238148: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06237fbc) */
/* WARNING: Removing unreachable block (ram,0x06237fc4) */
/* WARNING: Removing unreachable block (ram,0x06238048) */
/* WARNING: Removing unreachable block (ram,0x062380c8) */
/* WARNING: Removing unreachable block (ram,0x06238050) */
/* WARNING: Removing unreachable block (ram,0x062380cc) */
/* WARNING: Removing unreachable block (ram,0x06238068) */
/* WARNING: Removing unreachable block (ram,0x06238098) */
/* WARNING: Removing unreachable block (ram,0x06238078) */
/* WARNING: Removing unreachable block (ram,0x06238000) */
/* WARNING: Removing unreachable block (ram,0x062380b0) */
/* WARNING: Removing unreachable block (ram,0x0623814c) */
/* WARNING: Removing unreachable block (ram,0x06238010) */
/* WARNING: Removing unreachable block (ram,0x062380d0) */
/* WARNING: Removing unreachable block (ram,0x0623802c) */
/* WARNING: Removing unreachable block (ram,0x062380d4) */
/* WARNING: Removing unreachable block (ram,0x06238030) */

undefined8 *
MergeEngine_Model_Configuration_BubbledItemsConfigurationModel__SetupRemovedBubbleSpawns
          (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  code *pcStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((bRam0000000007e2455d & 1) == 0) {
    func_0x03280a18(PTR_DAT_077dacf0);
    func_0x03280a18(PTR_DAT_077dacf8);
    func_0x03280a18(PTR_DAT_077dad00);
    func_0x03280a18(PTR_DAT_0777a750);
    func_0x03280a18(PTR_DAT_077cf798);
    func_0x03280a18(PTR_DAT_077dad08);
    func_0x03280a18(PTR_DAT_077cf5c8);
    func_0x03280a18(PTR_DAT_077dad10);
    func_0x03280a18(PTR_DAT_077cf5c0);
    func_0x03280a18(PTR_DAT_0777e550);
    bRam0000000007e2455d = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  plVar10 = *(long **)(param_1 + 0x30);
  if (plVar10 == (long *)0x0) {
    auVar12 = func_0x03280cac();
    uVar6 = auVar12._0_8_;
    if (auVar12._8_4_ == 1) {
      plVar10 = (long *)func_0x072ce910(uVar6);
      lVar7 = *plVar10;
      func_0x072ce920();
      func_0x051159b0(&uStack_70,*(undefined8 *)PTR_DAT_077dacf0);
      if (lVar7 == 0) goto LAB_06238128;
      uVar6 = func_0x03280ca4(lVar7);
    }
    else {
      lVar7 = 0;
    }
    func_0x051159b0(&uStack_70,*(undefined8 *)PTR_DAT_077dacf0);
    if (lVar7 == 0) {
      func_0x03365958(uVar6);
    }
    func_0x03280ca4(lVar7);
    auVar11 = func_0x02f09514();
    pcStack_b0 = MergeEngine_Model_Configuration_BubbledItemsConfigurationModel__GetBlasterTierForHc
    ;
    lStack_a8 = lVar7;
    uStack_a0 = uVar6;
    lStack_98 = param_1;
    if ((bRam0000000007e24560 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077dad18);
      func_0x03280a18(PTR_DAT_077dad20);
      func_0x03280a18(PTR_DAT_077dad28);
      func_0x03280a18(PTR_DAT_077dad30);
      func_0x03280a18(PTR_DAT_077dad38);
      bRam0000000007e24560 = 1;
    }
    uStack_c8 = 0;
    uStack_c0 = 0;
    puStack_b8 = (undefined8 *)0x0;
    plVar10 = *(long **)(auVar11._0_8_ + 0x50);
    if (plVar10 != (long *)0x0) {
      lVar7 = *plVar10;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_077dad30) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 4) * 0x10 + 0x138);
            goto LAB_06238274;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_077dad30,4);
LAB_06238274:
      lVar7 = (*(code *)*puVar5)(plVar10,puVar5[1]);
      puVar4 = PTR_DAT_077dad20;
      if (lVar7 != 0) {
        func_0x04145068(&uStack_c8,lVar7,*(undefined8 *)PTR_DAT_077dad38);
        while (uVar8 = func_0x051159b4(&uStack_c8,*(undefined8 *)puVar4), puVar5 = puStack_b8,
              (uVar8 & 1) != 0) {
          uVar8 = func_0x06694a70(puStack_b8,auVar11._8_8_ & 0xffffffff,0);
          if ((uVar8 & 1) != 0) {
            func_0x051159b0(&uStack_c8,*(undefined8 *)PTR_DAT_077dad18);
            return puVar5;
          }
        }
        func_0x051159b0(&uStack_c8,*(undefined8 *)PTR_DAT_077dad18);
      }
      return (undefined8 *)0x0;
    }
    auVar12 = func_0x03280cac();
    if (auVar12._8_4_ == 1) {
      plVar10 = (long *)func_0x072ce910(auVar12._0_8_);
      lVar7 = *plVar10;
      func_0x072ce920();
      func_0x051159b0(&uStack_c8,*(undefined8 *)PTR_DAT_077dad18);
      if (lVar7 == 0) {
        return (undefined8 *)0x0;
      }
      func_0x03280ca4(lVar7);
    }
    func_0x051159b0(&uStack_c8,*(undefined8 *)PTR_DAT_077dad18);
    func_0x03365958(auVar12._0_8_);
    func_0x03280ca4(0);
    auVar11 = func_0x02f09514();
    if (auVar11._8_8_ == 0) {
      puVar5 = (undefined8 *)func_0x03280cac();
      puVar4 = PTR_DAT_077dad40;
      if ((bRam0000000007e24561 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077dad40);
        bRam0000000007e24561 = 1;
      }
      uVar6 = *(undefined8 *)puVar4;
      return puVar5;
    }
    puVar5 = (undefined8 *)(auVar11._0_8_ + 0x58);
    *puVar5 = *(undefined8 *)(auVar11._8_8_ + 0x70);
  }
  else {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0777a750) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 4) * 0x10 + 0x138);
          goto LAB_06237f5c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0777a750,4);
LAB_06237f5c:
    unaff_x23 = (undefined8 *)PTR_DAT_077cf5c8;
    unaff_x24 = (undefined8 *)PTR_DAT_077cf5c0;
    lVar7 = (*(code *)*puVar5)(plVar10,puVar5[1]);
    if (((lVar7 != 0) && (*(long *)(lVar7 + 0x38) != 0)) &&
       (0 < *(int *)(*(long *)(lVar7 + 0x38) + 0x18))) {
      uVar6 = func_0x03280ca0(*unaff_x24);
      func_0x04143c38(uVar6,*unaff_x23);
      puVar5 = (undefined8 *)(param_1 + 0x68);
      *puVar5 = uVar6;
      goto SUB_032809c4;
    }
LAB_06238128:
    uVar6 = func_0x03280ca0(*unaff_x24);
    func_0x04143c38(uVar6,*unaff_x23);
    puVar5 = (undefined8 *)(param_1 + 0x68);
    *puVar5 = uVar6;
  }
SUB_032809c4:
  if (iRam00000000080486b8 != 0) {
    puVar1 = (ulong *)(((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return puVar5;
}

