/* Ghidra 12.1.2 native pseudocode; RVA 0x690249C; MergeEngine.ECS.Components.Board.BoardComponent.SetItem; status ok */


/* WARNING: Possible PIC construction at 0x06a02894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a028b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a028dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06a028bc) */
/* WARNING: Removing unreachable block (ram,0x06a02898) */
/* WARNING: Removing unreachable block (ram,0x06a028e0) */

undefined8 *
MergeEngine_ECS_Components_Board_BoardComponent__SetItem
          (long param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  int *piVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  long lStack_78;
  
  uVar17 = param_3;
  if ((bRam0000000007e29904 & 1) == 0) {
    func_0x03280a18(PTR_DAT_078268f8);
    bRam0000000007e29904 = 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar7 = func_0x0475450c(*(long *)(param_1 + 0x40),param_2,param_3,
                            *(undefined8 *)PTR_DAT_078268f8);
    if (param_3 == 0) {
      uVar7 = uVar7 & 1;
    }
    else {
      *(undefined8 *)(param_3 + 0x30) = param_2;
    }
    return (undefined8 *)(ulong)(uVar7 & 1);
  }
  auVar19 = func_0x03280cac();
  lVar16 = auVar19._0_8_;
  if ((bRam0000000007e29905 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826900);
    bRam0000000007e29905 = 1;
  }
  puVar5 = PTR_DAT_0777ecd0;
  puVar4 = PTR_DAT_0777ecc8;
  lVar9 = *(long *)(lVar16 + 0x40);
  if (lVar9 == 0) {
    auVar19 = func_0x03280cac();
    lStack_78 = lVar16;
    if ((bRam0000000007e29906 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e758);
      bRam0000000007e29906 = 1;
    }
    puVar4 = PTR_DAT_0774e758;
    plVar15 = (long *)(auVar19._0_8_ + 0x20);
    puVar8 = (undefined8 *)*plVar15;
    while ((plVar10 = (long *)func_0x057ddb20(puVar8,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
           (*plVar10 == *(long *)puVar4))) {
      puVar11 = (undefined8 *)func_0x032dd140(plVar15,plVar10,puVar8);
      bVar6 = puVar8 == puVar11;
      puVar8 = puVar11;
      if (bVar6) {
        return puVar11;
      }
    }
    auVar19 = func_0x03281048(plVar10);
    if ((bRam0000000007e29907 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e758);
      bRam0000000007e29907 = 1;
    }
    puVar4 = PTR_DAT_0774e758;
    plVar15 = (long *)(auVar19._0_8_ + 0x20);
    puVar8 = (undefined8 *)*plVar15;
    while ((plVar10 = (long *)func_0x057ddd18(puVar8,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
           (*plVar10 == *(long *)puVar4))) {
      puVar11 = (undefined8 *)func_0x032dd140(plVar15,plVar10,puVar8);
      bVar6 = puVar8 == puVar11;
      puVar8 = puVar11;
      if (bVar6) {
        return puVar11;
      }
    }
    auVar19 = func_0x03281048(plVar10);
    if ((bRam0000000007e29908 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077db230);
      bRam0000000007e29908 = 1;
    }
    puVar4 = PTR_DAT_077db230;
    plVar15 = (long *)(auVar19._0_8_ + 0x28);
    puVar8 = (undefined8 *)*plVar15;
    do {
      lVar16 = func_0x057ddb20(puVar8,auVar19._8_8_,0);
      if (lVar16 == 0) {
        lVar9 = 0;
      }
      else {
        uVar18 = *(undefined8 *)puVar4;
        lVar9 = func_0x03280b90(lVar16,uVar18);
        if (lVar9 == 0) {
          auVar19 = func_0x03281048(lVar16,uVar18);
          if ((bRam0000000007e29909 & 1) == 0) {
            func_0x03280a18(PTR_DAT_077db230);
            bRam0000000007e29909 = 1;
          }
          puVar4 = PTR_DAT_077db230;
          plVar15 = (long *)(auVar19._0_8_ + 0x28);
          puVar8 = (undefined8 *)*plVar15;
          do {
            lVar16 = func_0x057ddd18(puVar8,auVar19._8_8_,0);
            if (lVar16 == 0) {
              lVar9 = 0;
            }
            else {
              uVar18 = *(undefined8 *)puVar4;
              lVar9 = func_0x03280b90(lVar16,uVar18);
              if (lVar9 == 0) {
                lVar16 = func_0x03281048(lVar16,uVar18);
                puVar5 = PTR_DAT_0774e748;
                puVar4 = PTR_DAT_0774e740;
                if ((bRam0000000007e2990a & 1) == 0) {
                  func_0x03280a18(PTR_DAT_0774e748);
                  func_0x03280a18(PTR_DAT_0774e740);
                  bRam0000000007e2990a = 1;
                }
                uVar18 = func_0x03280ca0(*(undefined8 *)puVar4);
                func_0x04fb1810(uVar18,*(undefined8 *)puVar5);
                puVar8 = (undefined8 *)(lVar16 + 0x30);
                *puVar8 = uVar18;
                if (iRam00000000080486b8 != 0) {
                  puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
                  do {
                    cVar3 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar6) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
                      cVar3 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar3 != '\0');
                }
                return puVar8;
              }
            }
            puVar11 = (undefined8 *)func_0x032dd140(plVar15,lVar9,puVar8);
            bVar6 = puVar8 != puVar11;
            puVar8 = puVar11;
          } while (bVar6);
          return puVar11;
        }
      }
      puVar11 = (undefined8 *)func_0x032dd140(plVar15,lVar9,puVar8);
      bVar6 = puVar8 == puVar11;
      puVar8 = puVar11;
      if (bVar6) {
        return puVar11;
      }
    } while( true );
  }
  if ((bRam0000000007e196dc & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ece0,auVar19._8_8_,(uint)uVar17 & 1,*(undefined8 *)PTR_DAT_07826900)
    ;
    func_0x03280a18(PTR_DAT_0777ecd0);
    func_0x03280a18(PTR_DAT_0777ecc8);
    bRam0000000007e196dc = 1;
  }
  lStack_78 = 0;
  puVar8 = (undefined8 *)func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x040ce3d4(puVar8,*(undefined8 *)puVar5);
  puVar4 = PTR_DAT_0777ece0;
  lVar16 = 0x30;
  if ((uVar17 & 1) == 0) {
    lVar16 = 0x28;
  }
  lVar16 = *(long *)(lVar9 + lVar16);
  if (lVar16 != 0) {
    if (0 < (int)*(ulong *)(lVar16 + 0x18)) {
      uVar17 = 0;
      uVar12 = *(ulong *)(lVar16 + 0x18) & 0xffffffff;
      do {
        if (uVar12 <= uVar17) {
          func_0x03280cb4();
          goto LAB_047547f0;
        }
        piVar2 = (int *)(lVar16 + 0x20 + uVar17 * 8);
        func_0x069fdc94(&lStack_78,*piVar2 + auVar19._8_4_,piVar2[1] + auVar19._12_4_,0);
        if ((((-1 < (int)lStack_78) && (-1 < lStack_78)) &&
            ((int)lStack_78 < *(int *)(lVar9 + 0x10))) &&
           ((int)((ulong)lStack_78 >> 0x20) < *(int *)(lVar9 + 0x14))) {
          if (puVar8 == (undefined8 *)0x0) goto LAB_047547f0;
          lVar13 = puVar8[2];
          lVar14 = *(long *)puVar4;
          *(int *)((long)puVar8 + 0x1c) = *(int *)((long)puVar8 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_047547f0;
          uVar7 = *(uint *)(puVar8 + 3);
          if (uVar7 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(puVar8 + 3) = uVar7 + 1;
            *(long *)(lVar13 + (long)(int)uVar7 * 8 + 0x20) = lStack_78;
          }
          else {
            func_0x040cec28(puVar8,lStack_78,
                            *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar12 = (ulong)*(uint *)(lVar16 + 0x18);
        uVar17 = uVar17 + 1;
      } while ((long)uVar17 < (long)(int)*(uint *)(lVar16 + 0x18));
    }
    return puVar8;
  }
LAB_047547f0:
  auVar19 = func_0x03280cac();
  if (-1 < auVar19._8_4_) {
    puVar8 = (undefined8 *)0x0;
    if ((-1 < auVar19._8_8_) && (auVar19._8_4_ < *(int *)(auVar19._0_8_ + 0x10))) {
      puVar8 = (undefined8 *)(ulong)(auVar19._12_4_ < *(int *)(auVar19._0_8_ + 0x14));
    }
    return puVar8;
  }
  return (undefined8 *)0x0;
}

