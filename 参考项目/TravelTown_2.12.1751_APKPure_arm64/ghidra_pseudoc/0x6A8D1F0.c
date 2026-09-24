/* Ghidra 12.1.2 native pseudocode; RVA 0x6A8D1F0; Merger.MergeBoard.Logic.BoardOperations.BoardMergeOperationDataCreator.CreateOperationData; status ok */


/* WARNING: Removing unreachable block (ram,0x06b8da24) */
/* WARNING: Removing unreachable block (ram,0x06b8da54) */
/* WARNING: Removing unreachable block (ram,0x06b8da68) */
/* WARNING: Removing unreachable block (ram,0x06b8da78) */
/* WARNING: Removing unreachable block (ram,0x06b8da80) */
/* WARNING: Removing unreachable block (ram,0x06b8daa8) */
/* WARNING: Removing unreachable block (ram,0x06b8da8c) */
/* WARNING: Removing unreachable block (ram,0x06b8da98) */
/* WARNING: Removing unreachable block (ram,0x06b8dab4) */
/* WARNING: Removing unreachable block (ram,0x06b8dac0) */
/* WARNING: Removing unreachable block (ram,0x06b8da3c) */
/* WARNING: Removing unreachable block (ram,0x06b8da50) */
/* WARNING: Removing unreachable block (ram,0x06b8d5a0) */
/* WARNING: Removing unreachable block (ram,0x06b8d608) */

void Merger_MergeBoard_Logic_BoardOperations_BoardMergeOperationDataCreator__CreateOperationData
               (long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long *unaff_x22;
  undefined8 uVar10;
  long *unaff_x24;
  long *unaff_x25;
  undefined1 auVar11 [12];
  
  plVar9 = (long *)0x7e2a000;
  if ((bRam0000000007e2a7c5 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831e20);
    func_0x03280a18(PTR_DAT_07831e38);
    func_0x03280a18(PTR_DAT_078304b0);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0782fd50);
    func_0x03280a18(PTR_DAT_0782fc30);
    func_0x03280a18(PTR_DAT_0782fd58);
    func_0x03280a18(PTR_DAT_0782fc38);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_0782fce0);
    func_0x03280a18(PTR_DAT_0782fc40);
    func_0x03280a18(PTR_DAT_07831ee0);
    func_0x03280a18(PTR_DAT_07831ee8);
    bRam0000000007e2a7c5 = 1;
  }
  puVar1 = PTR_DAT_07831ee8;
  if (param_2 != (long *)0x0) {
    plVar9 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_0782fce0);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c(lVar5);
      lVar5 = *(long *)puVar1;
    }
    unaff_x25 = (long *)PTR_DAT_07831e20;
    unaff_x22 = *(long **)(*(long *)(lVar5 + 0xb8) + 8);
    if (unaff_x22 == (long *)0x0) {
      if (*(int *)(lVar5 + 0xe0) == 0) {
        func_0x03280b8c(lVar5);
        lVar5 = *(long *)puVar1;
      }
      uVar10 = **(undefined8 **)(lVar5 + 0xb8);
      unaff_x22 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07831e38);
      func_0x05355fbc(unaff_x22,uVar10,*(undefined8 *)PTR_DAT_07831ee0,0);
      plVar3 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
      *plVar3 = (long)unaff_x22;
      func_0x032809c4(plVar3,unaff_x22);
    }
    plVar3 = (long *)func_0x03d872a8(plVar9,unaff_x22,*unaff_x25);
    unaff_x24 = (long *)puVar1;
    if (plVar3 != (long *)0x0) {
      lVar5 = *plVar3;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0782fd50) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06b8d3d4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar3,*(long *)PTR_DAT_0782fd50,0);
LAB_06b8d3d4:
      unaff_x24 = (long *)PTR_DAT_078304b0;
      unaff_x25 = (long *)PTR_DAT_0774e8c8;
      plVar9 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
      puVar2 = PTR_DAT_0782fd58;
      puVar1 = PTR_DAT_0774e8e0;
      if (plVar9 == (long *)0x0) goto LAB_06b8d954;
LAB_06b8d408:
      lVar5 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06b8d454;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)puVar1,0);
LAB_06b8d454:
      uVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      if ((uVar7 & 1) == 0) {
        if (plVar9 == (long *)0x0) goto LAB_06b8d594;
        lVar5 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 == 0) goto LAB_06b8d56c;
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_06b8d554;
      }
      lVar5 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06b8d4b0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)puVar2,0);
LAB_06b8d4b0:
      lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      if (lVar5 != 0) {
        unaff_x22 = *(long **)(param_1 + 0x10);
        if (unaff_x22 == (long *)0x0) goto LAB_06b8d93c;
        lVar6 = *unaff_x22;
        uVar10 = *(undefined8 *)(lVar5 + 0x18);
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x24) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_06b8d518;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(unaff_x22,*unaff_x24,0);
LAB_06b8d518:
        (*(code *)*puVar4)(unaff_x22,uVar10,0,puVar4[1]);
        goto LAB_06b8d408;
      }
      func_0x03280cac();
LAB_06b8d93c:
      func_0x03280cac();
LAB_06b8d940:
      func_0x03280cac();
LAB_06b8d944:
      func_0x03280cac();
LAB_06b8d948:
      func_0x03280cac();
LAB_06b8d94c:
      func_0x03280cac();
    }
  }
  goto LAB_06b8d950;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_06b8d9e0:
    if (*(long *)(piVar8 + -2) == *unaff_x25) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_06b8da14;
    }
  }
LAB_06b8d9f8:
  puVar4 = (undefined8 *)func_0x03256b10(param_2,*unaff_x25,0);
LAB_06b8da14:
  (*(code *)*puVar4)(param_2,puVar4[1]);
LAB_06b8da20:
  func_0x03365958(auVar11._0_8_);
  func_0x03280ca4(unaff_x22);
  func_0x02f09514();
  return;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_06b8d554:
    if (*(long *)(piVar8 + -2) == *unaff_x25) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_06b8d588;
    }
  }
LAB_06b8d56c:
  puVar4 = (undefined8 *)func_0x03256b10(plVar9,*unaff_x25,0);
LAB_06b8d588:
  (*(code *)*puVar4)(plVar9,puVar4[1]);
LAB_06b8d594:
  unaff_x22 = (long *)0x0;
  plVar3 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_0782fc40);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0782fc30) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06b8d62c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar3,*(long *)PTR_DAT_0782fc30,0);
LAB_06b8d62c:
    param_2 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    puVar2 = PTR_DAT_0782fc38;
    puVar1 = PTR_DAT_0774e8e0;
    if (param_2 == (long *)0x0) goto LAB_06b8d960;
    do {
      lVar5 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06b8d69c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar1,0);
LAB_06b8d69c:
      uVar7 = (*(code *)*puVar4)(param_2,puVar4[1]);
      if ((uVar7 & 1) == 0) {
        plVar9 = (long *)0x0;
        goto LAB_06b8d860;
      }
      lVar5 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06b8d6f8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar2,0);
LAB_06b8d6f8:
      plVar9 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
      if (plVar9 == (long *)0x0) goto LAB_06b8d948;
      plVar3 = *(long **)(param_1 + 0x10);
      unaff_x22 = (long *)0x0;
      if (plVar3 == (long *)0x0) goto LAB_06b8d94c;
      lVar5 = *plVar3;
      lVar6 = plVar9[3];
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_06b8d768;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar3,*unaff_x24,1);
LAB_06b8d768:
      plVar3 = (long *)(*(code *)*puVar4)(plVar3,lVar6,0,puVar4[1]);
      unaff_x22 = (long *)0x0;
      if (plVar3 == (long *)0x0) goto LAB_06b8d940;
      lVar5 = *plVar3;
      lVar6 = plVar9[4];
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_06b8d7d8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar3,*unaff_x24,1);
LAB_06b8d7d8:
      unaff_x22 = (long *)(*(code *)*puVar4)(plVar3,lVar6,0,puVar4[1]);
      if (unaff_x22 == (long *)0x0) goto LAB_06b8d944;
      lVar5 = *unaff_x22;
      lVar6 = plVar9[5];
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x24) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06b8d844;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(unaff_x22,*unaff_x24,0);
LAB_06b8d844:
      (*(code *)*puVar4)(unaff_x22,lVar6,0,puVar4[1]);
    } while( true );
  }
LAB_06b8d950:
  do {
    func_0x03280cac();
LAB_06b8d954:
    func_0x03280cac();
    func_0x03280ca4(unaff_x22);
LAB_06b8d960:
    func_0x03280cac();
    do {
      auVar11 = func_0x03280ca4(plVar9);
      if (auVar11._8_4_ != 1) {
        if (param_2 == (long *)0x0) goto LAB_06b8da20;
        lVar5 = *param_2;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 == 0) goto LAB_06b8d9f8;
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        goto LAB_06b8d9e0;
      }
      puVar4 = (undefined8 *)func_0x072ce910();
      plVar9 = (long *)*puVar4;
      func_0x072ce920();
LAB_06b8d860:
      if (param_2 != (long *)0x0) {
        lVar5 = *param_2;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *unaff_x25) {
              puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_06b8d8b0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(param_2,*unaff_x25,0);
LAB_06b8d8b0:
        (*(code *)*puVar4)(param_2,puVar4[1]);
      }
    } while (plVar9 != (long *)0x0);
    plVar3 = *(long **)(param_1 + 0x10);
    param_1 = 0;
  } while (plVar3 == (long *)0x0);
  lVar5 = *plVar3;
  uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *unaff_x24) {
        puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 4) * 0x10 + 0x138);
        goto LAB_06b8d918;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar7 != 0);
  }
  puVar4 = (undefined8 *)func_0x03256b10(plVar3,*unaff_x24,4);
LAB_06b8d918:
                    /* WARNING: Could not recover jumptable at 0x06b8d934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

