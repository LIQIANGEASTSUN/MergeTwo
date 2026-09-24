/* Ghidra 12.1.2 native pseudocode; RVA 0x666D1C8; MergeEngine.ECS.Systems.Board.ItemCountSystem.InitializeSystem; status ok */


/* WARNING: Possible PIC construction at 0x069f7fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0676d3cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0676d3f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x069aa5c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0676d3f8) */
/* WARNING: Removing unreachable block (ram,0x0676d400) */
/* WARNING: Removing unreachable block (ram,0x0676d414) */
/* WARNING: Removing unreachable block (ram,0x0676d430) */
/* WARNING: Removing unreachable block (ram,0x0676d48c) */
/* WARNING: Removing unreachable block (ram,0x0676d490) */
/* WARNING: Removing unreachable block (ram,0x069aa540) */
/* WARNING: Removing unreachable block (ram,0x069aa574) */
/* WARNING: Removing unreachable block (ram,0x069aa5b8) */
/* WARNING: Removing unreachable block (ram,0x0676d3d0) */
/* WARNING: Removing unreachable block (ram,0x0676d4b4) */
/* WARNING: Removing unreachable block (ram,0x0676d3d4) */
/* WARNING: Removing unreachable block (ram,0x069f7fa8) */
/* WARNING: Removing unreachable block (ram,0x069aa5cc) */
/* WARNING: Removing unreachable block (ram,0x069aa5d0) */
/* WARNING: Removing unreachable block (ram,0x069aa644) */
/* WARNING: Removing unreachable block (ram,0x069aa650) */
/* WARNING: Removing unreachable block (ram,0x069aa690) */
/* WARNING: Removing unreachable block (ram,0x069aa65c) */

void MergeEngine_ECS_Systems_Board_ItemCountSystem__InitializeSystem(long param_1)

{
  ulong *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  long **pplVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined *puVar13;
  undefined *unaff_x24;
  long *unaff_x30;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  long *plStack_40;
  long lStack_38;
  
  puVar8 = PTR_DAT_07808060;
  puVar13 = PTR_DAT_077db230;
  if ((bRam0000000007e28103 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077db230);
    func_0x03280a18(PTR_DAT_07808060);
    bRam0000000007e28103 = 1;
  }
  lVar10 = *(long *)(param_1 + 0x40);
  lVar7 = func_0x03280ca0(*(undefined8 *)puVar13);
  func_0x054221d4(lVar7,param_1,*(undefined8 *)puVar8,0);
  if (lVar10 != 0) {
    func_0x06a026c4(lVar10,lVar7,0);
    lVar11 = *(long *)(param_1 + 0x48);
    lVar10 = func_0x03280ca0(*(undefined8 *)puVar13);
    func_0x054221d4(lVar10,param_1,*(undefined8 *)puVar8,0);
    lVar7 = lVar10;
    if (lVar11 != 0) {
      pplVar5 = &plStack_40;
      plStack_40 = unaff_x30;
      if ((bRam0000000007e2984c & 1) == 0) {
        func_0x03280a18(PTR_DAT_077db230,lVar10,0);
        bRam0000000007e2984c = 1;
      }
      unaff_x24 = PTR_DAT_077db230;
      plVar12 = (long *)(lVar11 + 0x20);
      lVar7 = *plVar12;
      do {
        puVar8 = (undefined *)func_0x057ddb20(lVar7,lVar10,0);
        if (puVar8 == (undefined *)0x0) {
          lVar11 = 0;
        }
        else {
          puVar13 = *(undefined **)unaff_x24;
          lVar11 = func_0x03280b90(puVar8,puVar13);
          if (lVar11 == 0) {
            uVar14 = 0x69f7e84;
            auVar15 = func_0x03281048(puVar8,puVar13);
            goto LAB_069f7e84;
          }
        }
        lVar11 = func_0x032dd140(plVar12,lVar11,lVar7);
        bVar6 = lVar7 == lVar11;
        lVar7 = lVar11;
        if (bVar6) {
          return;
        }
      } while( true );
    }
  }
  lVar10 = func_0x03280cac();
  puVar4 = PTR_DAT_07808060;
  puVar3 = PTR_DAT_077db230;
  plStack_40 = (long *)0x0;
  lStack_38 = param_1;
  if ((bRam0000000007e28104 & 1) == 0) {
    func_0x03280a18(PTR_DAT_077db230);
    func_0x03280a18(PTR_DAT_07808060);
    bRam0000000007e28104 = 1;
  }
  lVar11 = *(long *)(lVar10 + 0x40);
  uVar14 = func_0x03280ca0(*(undefined8 *)puVar3);
  func_0x054221d4(uVar14,lVar10,*(undefined8 *)puVar4,0);
  if (lVar11 != 0) {
    func_0x06a02774(lVar11,uVar14,0);
    lVar11 = *(long *)(lVar10 + 0x48);
    uVar14 = func_0x03280ca0(*(undefined8 *)puVar3);
    auVar15._8_8_ = uVar14;
    auVar15._0_8_ = lVar11;
    func_0x054221d4(uVar14,lVar10,*(undefined8 *)puVar4,0);
    if (lVar11 != 0) {
      pplVar5 = (long **)&stack0xffffffffffffffd0;
      uVar14 = 0x676d28c;
      lVar10 = lStack_38;
      plVar12 = plStack_40;
LAB_069f7e84:
      *(undefined8 *)((long)pplVar5 + -0x40) = uVar14;
      *(undefined **)((long)pplVar5 + -0x30) = unaff_x24;
      *(undefined **)((long)pplVar5 + -0x28) = puVar13;
      *(undefined **)((long)pplVar5 + -0x20) = puVar8;
      *(long *)((long)pplVar5 + -0x18) = lVar7;
      *(long **)((long)pplVar5 + -0x10) = plVar12;
      *(long *)((long)pplVar5 + -8) = lVar10;
      if ((bRam0000000007e2984d & 1) == 0) {
        func_0x03280a18(PTR_DAT_077db230);
        bRam0000000007e2984d = 1;
      }
      puVar13 = PTR_DAT_077db230;
      plVar12 = (long *)(auVar15._0_8_ + 0x20);
      lVar7 = *plVar12;
      do {
        lVar10 = func_0x057ddd18(lVar7,auVar15._8_8_,0);
        if (lVar10 == 0) {
          lVar11 = 0;
        }
        else {
          uVar14 = *(undefined8 *)puVar13;
          lVar11 = func_0x03280b90(lVar10,uVar14);
          if (lVar11 == 0) {
            lVar11 = func_0x03281048(lVar10,uVar14);
            puVar8 = PTR_DAT_077f1be8;
            puVar13 = PTR_DAT_077f1be0;
            *(undefined8 *)((long)pplVar5 + -0x70) = 0x69f7f34;
            *(undefined8 *)((long)pplVar5 + -0x68) = uVar14;
            *(long *)((long)pplVar5 + -0x60) = lVar10;
            *(long *)((long)pplVar5 + -0x58) = lVar7;
            *(long **)((long)pplVar5 + -0x50) = plVar12;
            *(long *)((long)pplVar5 + -0x48) = auVar15._8_8_;
            if ((bRam0000000007e2984e & 1) == 0) {
              func_0x03280a18(PTR_DAT_077f1be0);
              func_0x03280a18(PTR_DAT_077f1be8);
              bRam0000000007e2984e = 1;
            }
            uVar14 = func_0x03280ca0(*(undefined8 *)puVar8);
            func_0x04fb1810(uVar14,*(undefined8 *)puVar13);
            puVar9 = (undefined8 *)(lVar11 + 0x28);
            *puVar9 = uVar14;
            if (iRam00000000080486b8 != 0) {
              puVar1 = (ulong *)(((ulong)puVar9 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
              do {
                cVar2 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar6) {
                  *puVar1 = *puVar1 | 1L << ((ulong)puVar9 >> 0xc & 0x3f);
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            return;
          }
        }
        lVar10 = func_0x032dd140(plVar12,lVar11,lVar7);
        bVar6 = lVar7 != lVar10;
        lVar7 = lVar10;
      } while (bVar6);
      return;
    }
  }
  func_0x03280cac();
  puVar13 = PTR_DAT_07808068;
  if ((bRam0000000007e28105 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07771708);
    func_0x03280a18(PTR_DAT_0777da58);
    func_0x03280a18(PTR_DAT_077f1c68);
    func_0x03280a18(PTR_DAT_07808070);
    func_0x03280a18(PTR_DAT_07808068);
    bRam0000000007e28105 = 1;
  }
  func_0x03280ca0(*(undefined8 *)puVar13);
  return;
}

