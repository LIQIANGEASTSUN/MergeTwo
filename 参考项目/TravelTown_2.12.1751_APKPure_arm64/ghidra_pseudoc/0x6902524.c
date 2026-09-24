/* Ghidra 12.1.2 native pseudocode; RVA 0x6902524; MergeEngine.ECS.Components.Board.BoardComponent.GetAdjacentPositions; status ok */


/* WARNING: Possible PIC construction at 0x06a02894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a028b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06a028dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06a028bc) */
/* WARNING: Removing unreachable block (ram,0x06a02898) */
/* WARNING: Removing unreachable block (ram,0x06a028e0) */

undefined8 *
MergeEngine_ECS_Components_Board_BoardComponent__GetAdjacentPositions
          (long param_1,undefined8 param_2,uint param_3)

{
  ulong *puVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
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
  long lStack_48;
  
  if ((bRam0000000007e29905 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07826900);
    bRam0000000007e29905 = 1;
  }
  puVar6 = PTR_DAT_0777ecd0;
  puVar5 = PTR_DAT_0777ecc8;
  lVar9 = *(long *)(param_1 + 0x40);
  if (lVar9 == 0) {
    auVar19 = func_0x03280cac();
    lStack_48 = param_1;
    if ((bRam0000000007e29906 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e758);
      bRam0000000007e29906 = 1;
    }
    puVar5 = PTR_DAT_0774e758;
    plVar15 = (long *)(auVar19._0_8_ + 0x20);
    puVar8 = (undefined8 *)*plVar15;
    while ((plVar10 = (long *)func_0x057ddb20(puVar8,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
           (*plVar10 == *(long *)puVar5))) {
      puVar11 = (undefined8 *)func_0x032dd140(plVar15,plVar10,puVar8);
      bVar7 = puVar8 == puVar11;
      puVar8 = puVar11;
      if (bVar7) {
        return puVar11;
      }
    }
    auVar19 = func_0x03281048(plVar10);
    if ((bRam0000000007e29907 & 1) == 0) {
      func_0x03280a18(PTR_DAT_0774e758);
      bRam0000000007e29907 = 1;
    }
    puVar5 = PTR_DAT_0774e758;
    plVar15 = (long *)(auVar19._0_8_ + 0x20);
    puVar8 = (undefined8 *)*plVar15;
    while ((plVar10 = (long *)func_0x057ddd18(puVar8,auVar19._8_8_,0), plVar10 == (long *)0x0 ||
           (*plVar10 == *(long *)puVar5))) {
      puVar11 = (undefined8 *)func_0x032dd140(plVar15,plVar10,puVar8);
      bVar7 = puVar8 == puVar11;
      puVar8 = puVar11;
      if (bVar7) {
        return puVar11;
      }
    }
    auVar19 = func_0x03281048(plVar10);
    if ((bRam0000000007e29908 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077db230);
      bRam0000000007e29908 = 1;
    }
    puVar5 = PTR_DAT_077db230;
    plVar15 = (long *)(auVar19._0_8_ + 0x28);
    puVar8 = (undefined8 *)*plVar15;
    do {
      lVar9 = func_0x057ddb20(puVar8,auVar19._8_8_,0);
      if (lVar9 == 0) {
        lVar16 = 0;
      }
      else {
        uVar18 = *(undefined8 *)puVar5;
        lVar16 = func_0x03280b90(lVar9,uVar18);
        if (lVar16 == 0) {
          auVar19 = func_0x03281048(lVar9,uVar18);
          if ((bRam0000000007e29909 & 1) == 0) {
            func_0x03280a18(PTR_DAT_077db230);
            bRam0000000007e29909 = 1;
          }
          puVar5 = PTR_DAT_077db230;
          plVar15 = (long *)(auVar19._0_8_ + 0x28);
          puVar8 = (undefined8 *)*plVar15;
          do {
            lVar9 = func_0x057ddd18(puVar8,auVar19._8_8_,0);
            if (lVar9 == 0) {
              lVar16 = 0;
            }
            else {
              uVar18 = *(undefined8 *)puVar5;
              lVar16 = func_0x03280b90(lVar9,uVar18);
              if (lVar16 == 0) {
                lVar9 = func_0x03281048(lVar9,uVar18);
                puVar6 = PTR_DAT_0774e748;
                puVar5 = PTR_DAT_0774e740;
                if ((bRam0000000007e2990a & 1) == 0) {
                  func_0x03280a18(PTR_DAT_0774e748);
                  func_0x03280a18(PTR_DAT_0774e740);
                  bRam0000000007e2990a = 1;
                }
                uVar18 = func_0x03280ca0(*(undefined8 *)puVar5);
                func_0x04fb1810(uVar18,*(undefined8 *)puVar6);
                puVar8 = (undefined8 *)(lVar9 + 0x30);
                *puVar8 = uVar18;
                if (iRam00000000080486b8 != 0) {
                  puVar1 = (ulong *)(((ulong)puVar8 >> 0x12 & 0x7fff) * 8 + 0x7e7c690);
                  do {
                    cVar4 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar7) {
                      *puVar1 = *puVar1 | 1L << ((ulong)puVar8 >> 0xc & 0x3f);
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                }
                return puVar8;
              }
            }
            puVar11 = (undefined8 *)func_0x032dd140(plVar15,lVar16,puVar8);
            bVar7 = puVar8 != puVar11;
            puVar8 = puVar11;
          } while (bVar7);
          return puVar11;
        }
      }
      puVar11 = (undefined8 *)func_0x032dd140(plVar15,lVar16,puVar8);
      bVar7 = puVar8 == puVar11;
      puVar8 = puVar11;
      if (bVar7) {
        return puVar11;
      }
    } while( true );
  }
  if ((bRam0000000007e196dc & 1) == 0) {
    func_0x03280a18(PTR_DAT_0777ece0,param_2,param_3 & 1,*(undefined8 *)PTR_DAT_07826900);
    func_0x03280a18(PTR_DAT_0777ecd0);
    func_0x03280a18(PTR_DAT_0777ecc8);
    bRam0000000007e196dc = 1;
  }
  lStack_48 = 0;
  puVar8 = (undefined8 *)func_0x03280ca0(*(undefined8 *)puVar5);
  func_0x040ce3d4(puVar8,*(undefined8 *)puVar6);
  puVar5 = PTR_DAT_0777ece0;
  lVar16 = 0x30;
  if ((param_3 & 1) == 0) {
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
        func_0x069fdc94(&lStack_48,*piVar2 + (int)param_2,piVar2[1] + (int)((ulong)param_2 >> 0x20),
                        0);
        if ((((-1 < (int)lStack_48) && (-1 < lStack_48)) &&
            ((int)lStack_48 < *(int *)(lVar9 + 0x10))) &&
           ((int)((ulong)lStack_48 >> 0x20) < *(int *)(lVar9 + 0x14))) {
          if (puVar8 == (undefined8 *)0x0) goto LAB_047547f0;
          lVar13 = puVar8[2];
          lVar14 = *(long *)puVar5;
          *(int *)((long)puVar8 + 0x1c) = *(int *)((long)puVar8 + 0x1c) + 1;
          if (lVar13 == 0) goto LAB_047547f0;
          uVar3 = *(uint *)(puVar8 + 3);
          if (uVar3 < *(uint *)(lVar13 + 0x18)) {
            *(uint *)(puVar8 + 3) = uVar3 + 1;
            *(long *)(lVar13 + (long)(int)uVar3 * 8 + 0x20) = lStack_48;
          }
          else {
            func_0x040cec28(puVar8,lStack_48,
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

