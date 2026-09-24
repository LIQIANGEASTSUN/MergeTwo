/* Ghidra 12.1.2 native pseudocode; RVA 0x6137A08; MergeEngine.Model.Configuration.BubbledItemsConfigurationModel.SetupExpiredBubbleSpawns; status ok */


/* WARNING: Possible PIC construction at 0x06237b74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06237c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06237d04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06237dac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06237fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06238044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06238148: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06237fbc) */
/* WARNING: Removing unreachable block (ram,0x06237fc4) */
/* WARNING: Removing unreachable block (ram,0x06237c04) */
/* WARNING: Removing unreachable block (ram,0x06237c84) */
/* WARNING: Removing unreachable block (ram,0x06237c0c) */
/* WARNING: Removing unreachable block (ram,0x06237c88) */
/* WARNING: Removing unreachable block (ram,0x06237c24) */
/* WARNING: Removing unreachable block (ram,0x06237c54) */
/* WARNING: Removing unreachable block (ram,0x06237c34) */
/* WARNING: Removing unreachable block (ram,0x06237b78) */
/* WARNING: Removing unreachable block (ram,0x06237b80) */
/* WARNING: Removing unreachable block (ram,0x06237bbc) */
/* WARNING: Removing unreachable block (ram,0x06237c6c) */
/* WARNING: Removing unreachable block (ram,0x06237d08) */
/* WARNING: Removing unreachable block (ram,0x06237bcc) */
/* WARNING: Removing unreachable block (ram,0x06237c8c) */
/* WARNING: Removing unreachable block (ram,0x06237be8) */
/* WARNING: Removing unreachable block (ram,0x06237c90) */
/* WARNING: Removing unreachable block (ram,0x06237bec) */
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
MergeEngine_Model_Configuration_BubbledItemsConfigurationModel__SetupExpiredBubbleSpawns
          (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  code *pcStack_160;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  if ((bRam0000000007e2455c & 1) == 0) {
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
    bRam0000000007e2455c = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  plVar11 = *(long **)(param_1 + 0x30);
  if (plVar11 != (long *)0x0) {
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777a750) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_06237b18;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0777a750,4);
LAB_06237b18:
    unaff_x23 = (undefined8 *)PTR_DAT_077cf5c8;
    unaff_x24 = (undefined8 *)PTR_DAT_077cf5c0;
    lVar7 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if (((lVar7 != 0) && (*(long *)(lVar7 + 0x30) != 0)) &&
       (0 < *(int *)(*(long *)(lVar7 + 0x30) + 0x18))) {
      uVar6 = func_0x03280ca0(*unaff_x24);
      func_0x04143c38(uVar6,*unaff_x23);
      puVar5 = (undefined8 *)(param_1 + 0x60);
      *puVar5 = uVar6;
      goto SUB_032809c4;
    }
LAB_06237ce4:
    uVar6 = func_0x03280ca0(*unaff_x24);
    func_0x04143c38(uVar6,*unaff_x23);
    puVar5 = (undefined8 *)(param_1 + 0x60);
    *puVar5 = uVar6;
    goto SUB_032809c4;
  }
  auVar14 = func_0x03280cac();
  uVar6 = auVar14._0_8_;
  if (auVar14._8_4_ == 1) {
    plVar11 = (long *)func_0x072ce910(uVar6);
    lVar7 = *plVar11;
    func_0x072ce920();
    func_0x051159b0(&uStack_70,*(undefined8 *)PTR_DAT_077dacf0);
    if (lVar7 == 0) goto LAB_06237ce4;
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
  lVar7 = func_0x02f09514();
  if ((bRam0000000007e2455b & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777a608);
    func_0x03280a18(PTR_DAT_077bd3f0);
    bRam0000000007e2455b = 1;
  }
  plVar11 = (long *)(lVar7 + 0x68);
  if (*plVar11 == 0) {
    uVar6 = 0x6237db0;
  }
  else {
    plVar12 = *(long **)(lVar7 + 0x28);
    if (plVar12 != (long *)0x0) {
      lVar8 = *plVar12;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_077bd3f0) {
            puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 3) * 0x10 + 0x138);
            goto LAB_06237e10;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar12,*(long *)PTR_DAT_077bd3f0,3);
LAB_06237e10:
      lVar8 = (*(code *)*puVar5)(plVar12,puVar5[1]);
      if (lVar8 != 0) {
        if (*(long *)(lVar8 + 0x20) == 0) {
LAB_06237e38:
          return (undefined8 *)*plVar11;
        }
        lVar7 = func_0x062377e4(lVar7);
        if (lVar7 != 0) {
          plVar11 = (long *)(lVar7 + 0x28);
          goto LAB_06237e38;
        }
      }
    }
    uVar6 = 0x6237e4c;
    lVar7 = func_0x03280cac();
  }
  uStack_100 = uVar6;
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
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  plVar11 = *(long **)(lVar7 + 0x30);
  if (plVar11 == (long *)0x0) {
    auVar14 = func_0x03280cac();
    uVar6 = auVar14._0_8_;
    if (auVar14._8_4_ == 1) {
      plVar11 = (long *)func_0x072ce910(uVar6);
      lVar8 = *plVar11;
      func_0x072ce920();
      func_0x051159b0(&uStack_120,*(undefined8 *)PTR_DAT_077dacf0);
      if (lVar8 == 0) goto LAB_06238128;
      uVar6 = func_0x03280ca4(lVar8);
    }
    else {
      lVar8 = 0;
    }
    func_0x051159b0(&uStack_120,*(undefined8 *)PTR_DAT_077dacf0);
    if (lVar8 == 0) {
      func_0x03365958(uVar6);
    }
    func_0x03280ca4(lVar8);
    auVar13 = func_0x02f09514();
    pcStack_160 = 
    MergeEngine_Model_Configuration_BubbledItemsConfigurationModel__GetBlasterTierForHc;
    lStack_158 = lVar8;
    uStack_150 = uVar6;
    lStack_148 = lVar7;
    if ((bRam0000000007e24560 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077dad18);
      func_0x03280a18(PTR_DAT_077dad20);
      func_0x03280a18(PTR_DAT_077dad28);
      func_0x03280a18(PTR_DAT_077dad30);
      func_0x03280a18(PTR_DAT_077dad38);
      bRam0000000007e24560 = 1;
    }
    uStack_178 = 0;
    uStack_170 = 0;
    puStack_168 = (undefined8 *)0x0;
    plVar11 = *(long **)(auVar13._0_8_ + 0x50);
    if (plVar11 != (long *)0x0) {
      lVar7 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_077dad30) {
            puVar5 = (undefined8 *)(lVar7 + (long)(*piVar10 + 4) * 0x10 + 0x138);
            goto LAB_06238274;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_077dad30,4);
LAB_06238274:
      lVar7 = (*(code *)*puVar5)(plVar11,puVar5[1]);
      puVar4 = PTR_DAT_077dad20;
      if (lVar7 != 0) {
        func_0x04145068(&uStack_178,lVar7,*(undefined8 *)PTR_DAT_077dad38);
        while (uVar9 = func_0x051159b4(&uStack_178,*(undefined8 *)puVar4), puVar5 = puStack_168,
              (uVar9 & 1) != 0) {
          uVar9 = func_0x06694a70(puStack_168,auVar13._8_8_ & 0xffffffff,0);
          if ((uVar9 & 1) != 0) {
            func_0x051159b0(&uStack_178,*(undefined8 *)PTR_DAT_077dad18);
            return puVar5;
          }
        }
        func_0x051159b0(&uStack_178,*(undefined8 *)PTR_DAT_077dad18);
      }
      return (undefined8 *)0x0;
    }
    auVar14 = func_0x03280cac();
    if (auVar14._8_4_ == 1) {
      plVar11 = (long *)func_0x072ce910(auVar14._0_8_);
      lVar7 = *plVar11;
      func_0x072ce920();
      func_0x051159b0(&uStack_178,*(undefined8 *)PTR_DAT_077dad18);
      if (lVar7 == 0) {
        return (undefined8 *)0x0;
      }
      func_0x03280ca4(lVar7);
    }
    func_0x051159b0(&uStack_178,*(undefined8 *)PTR_DAT_077dad18);
    func_0x03365958(auVar14._0_8_);
    func_0x03280ca4(0);
    auVar13 = func_0x02f09514();
    if (auVar13._8_8_ == 0) {
      puVar5 = (undefined8 *)func_0x03280cac();
      puVar4 = PTR_DAT_077dad40;
      if ((bRam0000000007e24561 & 1) == 0) {
        func_0x03280a18(PTR_DAT_077dad40);
        bRam0000000007e24561 = 1;
      }
      uVar6 = *(undefined8 *)puVar4;
      return puVar5;
    }
    puVar5 = (undefined8 *)(auVar13._0_8_ + 0x58);
    *puVar5 = *(undefined8 *)(auVar13._8_8_ + 0x70);
  }
  else {
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0777a750) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar10 + 4) * 0x10 + 0x138);
          goto LAB_06237f5c;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar5 = (undefined8 *)func_0x03256b10(plVar11,*(long *)PTR_DAT_0777a750,4);
LAB_06237f5c:
    unaff_x23 = (undefined8 *)PTR_DAT_077cf5c8;
    unaff_x24 = (undefined8 *)PTR_DAT_077cf5c0;
    lVar8 = (*(code *)*puVar5)(plVar11,puVar5[1]);
    if (((lVar8 != 0) && (*(long *)(lVar8 + 0x38) != 0)) &&
       (0 < *(int *)(*(long *)(lVar8 + 0x38) + 0x18))) {
      uVar6 = func_0x03280ca0(*unaff_x24);
      func_0x04143c38(uVar6,*unaff_x23);
      puVar5 = (undefined8 *)(lVar7 + 0x68);
      *puVar5 = uVar6;
      goto SUB_032809c4;
    }
LAB_06238128:
    uVar6 = func_0x03280ca0(*unaff_x24);
    func_0x04143c38(uVar6,*unaff_x23);
    puVar5 = (undefined8 *)(lVar7 + 0x68);
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

