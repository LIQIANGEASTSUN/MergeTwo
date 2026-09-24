/* Ghidra 12.1.2 native pseudocode; RVA 0x6A8C14C; Merger.MergeBoard.Logic.BoardOperations.BoardInteractionOperationDataCreator.CreateOperationData; status ok */


/* WARNING: Possible PIC construction at 0x06b8c7cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b8c7d0) */
/* WARNING: Removing unreachable block (ram,0x06b8c7d4) */
/* WARNING: Removing unreachable block (ram,0x06b8c808) */
/* WARNING: Removing unreachable block (ram,0x06b8c88c) */
/* WARNING: Removing unreachable block (ram,0x06b8c8a0) */
/* WARNING: Removing unreachable block (ram,0x06b8c8b0) */
/* WARNING: Removing unreachable block (ram,0x06b8c8b8) */
/* WARNING: Removing unreachable block (ram,0x06b8c8e0) */
/* WARNING: Removing unreachable block (ram,0x06b8c8c4) */
/* WARNING: Removing unreachable block (ram,0x06b8c8d0) */
/* WARNING: Removing unreachable block (ram,0x06b8c8f0) */
/* WARNING: Removing unreachable block (ram,0x06b8c818) */
/* WARNING: Removing unreachable block (ram,0x06b8c91c) */
/* WARNING: Removing unreachable block (ram,0x06b8c820) */
/* WARNING: Removing unreachable block (ram,0x06b8c834) */
/* WARNING: Removing unreachable block (ram,0x06b8c83c) */
/* WARNING: Removing unreachable block (ram,0x06b8c864) */
/* WARNING: Removing unreachable block (ram,0x06b8c848) */
/* WARNING: Removing unreachable block (ram,0x06b8c854) */
/* WARNING: Removing unreachable block (ram,0x06b8c874) */
/* WARNING: Removing unreachable block (ram,0x06b8ca60) */
/* WARNING: Removing unreachable block (ram,0x06b8ca80) */
/* WARNING: Removing unreachable block (ram,0x06b8ca94) */
/* WARNING: Removing unreachable block (ram,0x06b8caa4) */
/* WARNING: Removing unreachable block (ram,0x06b8caac) */
/* WARNING: Removing unreachable block (ram,0x06b8cad4) */
/* WARNING: Removing unreachable block (ram,0x06b8cab8) */
/* WARNING: Removing unreachable block (ram,0x06b8cac4) */
/* WARNING: Removing unreachable block (ram,0x06b8cae0) */
/* WARNING: Removing unreachable block (ram,0x06b8caec) */
/* WARNING: Removing unreachable block (ram,0x06b8ca70) */
/* WARNING: Removing unreachable block (ram,0x06b8d074) */
/* WARNING: Removing unreachable block (ram,0x06b8d094) */
/* WARNING: Removing unreachable block (ram,0x06b8d0a8) */
/* WARNING: Removing unreachable block (ram,0x06b8d0b8) */
/* WARNING: Removing unreachable block (ram,0x06b8d0c0) */
/* WARNING: Removing unreachable block (ram,0x06b8d0e8) */
/* WARNING: Removing unreachable block (ram,0x06b8d0cc) */
/* WARNING: Removing unreachable block (ram,0x06b8d0d8) */
/* WARNING: Removing unreachable block (ram,0x06b8d0f4) */
/* WARNING: Removing unreachable block (ram,0x06b8d100) */
/* WARNING: Removing unreachable block (ram,0x06b8d084) */

long Merger_MergeBoard_Logic_BoardOperations_BoardInteractionOperationDataCreator__CreateOperationData
               (long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *extraout_x1;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long *unaff_x22;
  undefined *puVar10;
  undefined *puVar11;
  long *unaff_x23;
  long *unaff_x26;
  undefined1 auVar12 [12];
  
  plVar9 = (long *)0x7e2a000;
  if ((bRam0000000007e2a7c1 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831e20);
    func_0x03280a18(PTR_DAT_07831ea0);
    func_0x03280a18(PTR_DAT_07831ea8);
    func_0x03280a18(PTR_DAT_07831eb0);
    func_0x03280a18(PTR_DAT_07831e38);
    func_0x03280a18(PTR_DAT_07831eb8);
    func_0x03280a18(PTR_DAT_078304b0);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0782fd50);
    func_0x03280a18(PTR_DAT_07831ec0);
    func_0x03280a18(PTR_DAT_0782fd58);
    func_0x03280a18(PTR_DAT_07831ec8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_0782fcd8);
    func_0x03280a18(PTR_DAT_0782fce0);
    func_0x03280a18(PTR_DAT_07831ed0);
    func_0x03280a18(PTR_DAT_07831ed8);
    bRam0000000007e2a7c1 = 1;
  }
  if ((param_2 != (long *)0x0) &&
     (plVar3 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_0782fcd8),
     plVar3 != (long *)0x0)) {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07831ec0) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06b8c2cc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar3,*(long *)PTR_DAT_07831ec0,0);
LAB_06b8c2cc:
    puVar11 = PTR_DAT_078304b0;
    unaff_x26 = (long *)PTR_DAT_0774e8c8;
    plVar9 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    puVar1 = PTR_DAT_07831ec8;
    puVar10 = PTR_DAT_0774e8e0;
    if (plVar9 == (long *)0x0) goto LAB_06b8c940;
LAB_06b8c300:
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar10) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06b8c34c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)puVar10,0);
LAB_06b8c34c:
    uVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    if ((uVar7 & 1) == 0) {
      if (plVar9 == (long *)0x0) goto LAB_06b8c48c;
      lVar5 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_06b8c464;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      goto LAB_06b8c44c;
    }
    lVar5 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06b8c3a8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)puVar1,0);
LAB_06b8c3a8:
    lVar5 = (*(code *)*puVar4)(plVar9,puVar4[1]);
    if (lVar5 != 0) {
      unaff_x22 = *(long **)(param_1 + 0x10);
      if (unaff_x22 == (long *)0x0) goto LAB_06b8c924;
      lVar6 = *unaff_x22;
      unaff_x23 = *(long **)(lVar5 + 0x18);
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar11) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 1) * 0x10 + 0x138);
            goto LAB_06b8c414;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(unaff_x22,*(long *)puVar11,1);
LAB_06b8c414:
      (*(code *)*puVar4)(unaff_x22,unaff_x23,0,puVar4[1]);
      goto LAB_06b8c300;
    }
    func_0x03280cac();
LAB_06b8c924:
    func_0x03280cac();
LAB_06b8c928:
    func_0x03280cac();
LAB_06b8c92c:
    func_0x03280cac();
LAB_06b8c930:
    func_0x03280cac();
  }
  goto LAB_06b8c934;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_06b8ca1c:
    if (*(long *)(piVar8 + -2) == *unaff_x26) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_06b8ca50;
    }
  }
LAB_06b8ca34:
  puVar4 = (undefined8 *)func_0x03256b10(plVar9,*unaff_x26,0);
LAB_06b8ca50:
  (*(code *)*puVar4)(plVar9,puVar4[1]);
LAB_06b8ca5c:
  func_0x03365958(auVar12._0_8_);
  func_0x03280ca4(0);
  func_0x02f09514();
  param_2 = extraout_x1;
  goto SUB_06b8cb04;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_06b8cd6c:
    if (*(long *)(piVar8 + -2) == *unaff_x23) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_06b8cda0;
    }
  }
LAB_06b8cd84:
  puVar4 = (undefined8 *)func_0x03256b10(plVar9,*unaff_x23,0);
LAB_06b8cda0:
  (*(code *)*puVar4)(plVar9,puVar4[1]);
LAB_06b8cdac:
  plVar3 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_077c1e50);
  if (plVar3 != (long *)0x0) {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_077c1e30) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06b8ce20;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar3,*(long *)PTR_DAT_077c1e30,0);
LAB_06b8ce20:
    param_2 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    puVar1 = PTR_DAT_07831d80;
    puVar11 = PTR_DAT_077c1e38;
    plVar3 = (long *)PTR_DAT_0774e8e0;
    if (param_2 != (long *)0x0) {
      do {
        lVar6 = *param_2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *plVar3) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_06b8ce98;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(param_2,*plVar3,0);
LAB_06b8ce98:
        uVar7 = (*(code *)*puVar4)(param_2,puVar4[1]);
        if ((uVar7 & 1) == 0) {
          plVar9 = (long *)0x0;
          goto LAB_06b8cf20;
        }
        lVar6 = *param_2;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)puVar11) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_06b8cef4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar4 = (undefined8 *)func_0x03256b10(param_2,*(long *)puVar11,0);
LAB_06b8cef4:
        lVar6 = (*(code *)*puVar4)(param_2,puVar4[1]);
        if (lVar6 == 0) goto LAB_06b8cfa0;
        if (lVar5 == 0) goto LAB_06b8cfa4;
        func_0x053c1024(lVar5,*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)puVar1);
      } while( true );
    }
    goto LAB_06b8cfb8;
  }
  goto LAB_06b8cfa8;
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
LAB_06b8c44c:
    if (*(long *)(piVar8 + -2) == *unaff_x26) {
      puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
      goto LAB_06b8c480;
    }
  }
LAB_06b8c464:
  puVar4 = (undefined8 *)func_0x03256b10(plVar9,*unaff_x26,0);
LAB_06b8c480:
  (*(code *)*puVar4)(plVar9,puVar4[1]);
LAB_06b8c48c:
  puVar10 = PTR_DAT_07831ed8;
  plVar9 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_0782fce0);
  lVar5 = *(long *)puVar10;
  if (*(int *)(lVar5 + 0xe0) == 0) {
    func_0x03280b8c(lVar5);
    lVar5 = *(long *)puVar10;
  }
  puVar1 = PTR_DAT_07831e20;
  unaff_x22 = *(long **)(*(long *)(lVar5 + 0xb8) + 8);
  if (unaff_x22 == (long *)0x0) {
    if (*(int *)(lVar5 + 0xe0) == 0) {
      func_0x03280b8c(lVar5);
      lVar5 = *(long *)puVar10;
    }
    unaff_x23 = (long *)**(undefined8 **)(lVar5 + 0xb8);
    unaff_x22 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07831e38);
    func_0x05355fbc(unaff_x22,unaff_x23,*(undefined8 *)PTR_DAT_07831ed0,0);
    plVar3 = (long *)(*(long *)(*(long *)puVar10 + 0xb8) + 8);
    *plVar3 = (long)unaff_x22;
    func_0x032809c4(plVar3,unaff_x22);
  }
  plVar3 = (long *)func_0x03d872a8(plVar9,unaff_x22,*(undefined8 *)puVar1);
  if (plVar3 != (long *)0x0) {
    lVar5 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_0782fd50) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06b8c5a4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar3,*(long *)PTR_DAT_0782fd50,0);
LAB_06b8c5a4:
    plVar9 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    puVar1 = PTR_DAT_0782fd58;
    puVar10 = PTR_DAT_0774e8e0;
    if (plVar9 == (long *)0x0) goto LAB_06b8c944;
    do {
      lVar5 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar10) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06b8c614;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)puVar10,0);
LAB_06b8c614:
      uVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      if ((uVar7 & 1) == 0) {
        unaff_x22 = (long *)0x0;
        goto LAB_06b8c768;
      }
      lVar5 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06b8c670;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)puVar1,0);
LAB_06b8c670:
      unaff_x22 = (long *)(*(code *)*puVar4)(plVar9,puVar4[1]);
      if (unaff_x22 == (long *)0x0) goto LAB_06b8c92c;
      plVar3 = *(long **)(param_1 + 0x10);
      unaff_x23 = (long *)0x0;
      if (plVar3 == (long *)0x0) goto LAB_06b8c930;
      lVar5 = *plVar3;
      lVar6 = unaff_x22[2];
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar11) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_06b8c6e0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar3,*(long *)puVar11,2);
LAB_06b8c6e0:
      unaff_x23 = (long *)(*(code *)*puVar4)(plVar3,lVar6,0,puVar4[1]);
      if (unaff_x23 == (long *)0x0) goto LAB_06b8c928;
      lVar5 = *unaff_x23;
      lVar6 = unaff_x22[3];
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar11) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06b8c74c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(unaff_x23,*(long *)puVar11,0);
LAB_06b8c74c:
      (*(code *)*puVar4)(unaff_x23,lVar6,0,puVar4[1]);
    } while( true );
  }
LAB_06b8c934:
  func_0x03280cac();
  do {
    func_0x03280ca4(unaff_x22);
LAB_06b8c940:
    func_0x03280cac();
LAB_06b8c944:
    auVar12 = func_0x03280cac();
    if (auVar12._8_4_ != 1) {
      if (plVar9 == (long *)0x0) goto LAB_06b8ca5c;
      lVar5 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 == 0) goto LAB_06b8ca34;
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      goto LAB_06b8ca1c;
    }
    puVar4 = (undefined8 *)func_0x072ce910();
    unaff_x22 = (long *)*puVar4;
    func_0x072ce920();
LAB_06b8c768:
    if (plVar9 != (long *)0x0) {
      lVar5 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06b8c7b8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar9,*unaff_x26,0);
LAB_06b8c7b8:
      (*(code *)*puVar4)(plVar9,puVar4[1]);
    }
  } while (unaff_x22 != (long *)0x0);
SUB_06b8cb04:
  puVar11 = PTR_DAT_07831d78;
  puVar10 = PTR_DAT_07831d70;
  if ((bRam0000000007e2a7c2 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831d80);
    func_0x03280a18(PTR_DAT_07831d78);
    func_0x03280a18(PTR_DAT_07831d70);
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_07831a70);
    func_0x03280a18(PTR_DAT_077c1e30);
    func_0x03280a18(PTR_DAT_077c1e38);
    func_0x03280a18(PTR_DAT_07831a78);
    func_0x03280a18(PTR_DAT_0774e8e0);
    func_0x03280a18(PTR_DAT_077c1e50);
    func_0x03280a18(PTR_DAT_07831ab0);
    bRam0000000007e2a7c2 = 1;
  }
  lVar5 = func_0x03280ca0(*(undefined8 *)puVar10);
  func_0x053bfe40(lVar5,*(undefined8 *)puVar11);
  plVar9 = (long *)0x7e2a000;
  if ((param_2 == (long *)0x0) ||
     (plVar3 = (long *)func_0x03ec4400(param_2,*(undefined8 *)PTR_DAT_07831ab0),
     plVar3 == (long *)0x0)) {
LAB_06b8cfa8:
    func_0x03280cac();
  }
  else {
    lVar6 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_07831a70) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06b8cc48;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(plVar3,*(long *)PTR_DAT_07831a70,0);
LAB_06b8cc48:
    unaff_x23 = (long *)PTR_DAT_0774e8c8;
    plVar9 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    puVar2 = PTR_DAT_07831d80;
    puVar1 = PTR_DAT_07831a78;
    puVar11 = PTR_DAT_0774e8e0;
    if (plVar9 != (long *)0x0) {
LAB_06b8cc7c:
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar11) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06b8ccc8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)puVar11,0);
LAB_06b8ccc8:
      uVar7 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      if ((uVar7 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        if (plVar9 == (long *)0x0) goto LAB_06b8cdac;
        lVar6 = *plVar9;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 == 0) goto LAB_06b8cd84;
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_06b8cd6c;
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar1) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06b8cd24;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(plVar9,*(long *)puVar1,0);
LAB_06b8cd24:
      lVar6 = (*(code *)*puVar4)(plVar9,puVar4[1]);
      if (lVar6 != 0) {
        if (lVar5 == 0) goto LAB_06b8cf9c;
        func_0x053c1024(lVar5,*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)puVar2);
        goto LAB_06b8cc7c;
      }
      func_0x03280cac();
LAB_06b8cf9c:
      func_0x03280cac();
      plVar3 = plVar9;
LAB_06b8cfa0:
      func_0x03280cac();
LAB_06b8cfa4:
      func_0x03280cac();
      plVar9 = plVar3;
      puVar10 = puVar11;
      goto LAB_06b8cfa8;
    }
  }
  func_0x03280cac();
  func_0x03280ca4(puVar10);
LAB_06b8cfb8:
  puVar11 = puVar10;
  func_0x03280cac();
  while( true ) {
    auVar12 = func_0x03280ca4(plVar9);
    if (auVar12._8_4_ != 1) break;
    puVar4 = (undefined8 *)func_0x072ce910();
    plVar9 = (long *)*puVar4;
    func_0x072ce920();
LAB_06b8cf20:
    if (param_2 != (long *)0x0) {
      lVar6 = *param_2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *unaff_x23) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_06b8cf70;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)func_0x03256b10(param_2,*unaff_x23,0);
LAB_06b8cf70:
      (*(code *)*puVar4)(param_2,puVar4[1]);
    }
    if (plVar9 == (long *)0x0) {
      return lVar5;
    }
  }
  if (param_2 != (long *)0x0) {
    lVar5 = *param_2;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x23) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_06b8d064;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)func_0x03256b10(param_2,*unaff_x23,0);
LAB_06b8d064:
    (*(code *)*puVar4)(param_2,puVar4[1]);
  }
  func_0x03365958(auVar12._0_8_);
  func_0x03280ca4(puVar11);
  lVar5 = func_0x02f09514();
  return lVar5;
}

