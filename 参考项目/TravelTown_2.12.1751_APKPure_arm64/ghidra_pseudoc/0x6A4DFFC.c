/* Ghidra 12.1.2 native pseudocode; RVA 0x6A4DFFC; Merger.MergeBoard.Utils.ExpendSpawnService.SelectWeightedItem; status ok */


/* WARNING: Possible PIC construction at 0x06b4e52c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b4e768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b4e7ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b4e530) */
/* WARNING: Removing unreachable block (ram,0x06b4e534) */
/* WARNING: Removing unreachable block (ram,0x06b4e54c) */
/* WARNING: Removing unreachable block (ram,0x06b4e554) */
/* WARNING: Removing unreachable block (ram,0x06b4e5ac) */
/* WARNING: Removing unreachable block (ram,0x06b4e5b8) */
/* WARNING: Removing unreachable block (ram,0x06b4e5e4) */
/* WARNING: Removing unreachable block (ram,0x06b4e5f0) */
/* WARNING: Removing unreachable block (ram,0x06b4e5c4) */
/* WARNING: Removing unreachable block (ram,0x06b4e5f4) */
/* WARNING: Removing unreachable block (ram,0x06b4e5d0) */
/* WARNING: Removing unreachable block (ram,0x06b4e5f8) */
/* WARNING: Removing unreachable block (ram,0x06b4e7b0) */
/* WARNING: Removing unreachable block (ram,0x06b4e608) */
/* WARNING: Removing unreachable block (ram,0x06b4e60c) */
/* WARNING: Removing unreachable block (ram,0x06b4e610) */
/* WARNING: Removing unreachable block (ram,0x06b4e62c) */
/* WARNING: Removing unreachable block (ram,0x06b4e634) */
/* WARNING: Removing unreachable block (ram,0x06b4e65c) */
/* WARNING: Removing unreachable block (ram,0x06b4e640) */
/* WARNING: Removing unreachable block (ram,0x06b4e64c) */
/* WARNING: Removing unreachable block (ram,0x06b4e66c) */
/* WARNING: Removing unreachable block (ram,0x06b4e754) */
/* WARNING: Removing unreachable block (ram,0x06b4e76c) */
/* WARNING: Removing unreachable block (ram,0x06b4e7d0) */
/* WARNING: Removing unreachable block (ram,0x06b4e798) */
/* WARNING: Type propagation algorithm not settling */

ulong Merger_MergeBoard_Utils_ExpendSpawnService__SelectWeightedItem
                (undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined8 *******pppppppuVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  undefined1 (*pauVar9) [16];
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 *******pppppppuVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  long extraout_x1;
  long *plVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int *piVar26;
  long lVar27;
  undefined8 uVar28;
  long lVar29;
  ulong uVar30;
  undefined1 *puVar31;
  long *plVar32;
  long unaff_x25;
  long *unaff_x26;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [12];
  long alStack_3c0 [5];
  long alStack_398 [4];
  long alStack_378 [4];
  long alStack_358 [4];
  long lStack_338;
  undefined1 auStack_330 [24];
  undefined8 auStack_318 [3];
  undefined1 auStack_300 [24];
  ulong auStack_2e8 [5];
  undefined8 uStack_2c0;
  long lStack_2b8;
  undefined1 auStack_2b0 [8];
  long lStack_2a8;
  undefined1 auStack_2a0 [8];
  long alStack_298 [12];
  ulong auStack_238 [8];
  ulong auStack_1f8 [8];
  ulong auStack_1b8 [8];
  ulong auStack_178 [8];
  ulong auStack_138 [5];
  undefined1 auStack_110 [8];
  long *plStack_108;
  undefined8 *******pppppppuStack_100;
  long lStack_f8;
  long lStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  
  if ((bRam0000000007e2a5a8 & 1) == 0) {
    func_0x03280a18(PTR_DAT_0782fec8);
    func_0x03280a18(PTR_DAT_0782fed0);
    func_0x03280a18(PTR_DAT_0782fed8);
    func_0x03280a18(PTR_DAT_0782fee0);
    func_0x03280a18(PTR_DAT_0782fee8);
    func_0x03280a18(PTR_DAT_077cd8f8);
    func_0x03280a18(PTR_DAT_0782fef0);
    func_0x03280a18(PTR_DAT_078103b0);
    func_0x03280a18(PTR_DAT_0782fef8);
    func_0x03280a18(PTR_DAT_0782ff00);
    func_0x03280a18(PTR_DAT_0782fec0);
    bRam0000000007e2a5a8 = 1;
  }
  puVar4 = PTR_DAT_0782fec0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x18) == 0)) {
    uVar12 = 0;
  }
  else if (*(int *)(param_2 + 0x18) == 1) {
    uVar12 = func_0x0414419c(param_2,0,*(undefined8 *)PTR_DAT_0782fef8);
  }
  else {
    lVar13 = *(long *)PTR_DAT_0782fec0;
    if (*(int *)(lVar13 + 0xe0) == 0) {
      func_0x03280b8c();
      lVar13 = *(long *)puVar4;
    }
    lVar27 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x10);
    if (lVar27 == 0) {
      if (*(int *)(lVar13 + 0xe0) == 0) {
        func_0x03280b8c();
        lVar13 = *(long *)puVar4;
      }
      uVar28 = **(undefined8 **)(lVar13 + 0xb8);
      lVar27 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077cd8f8);
      param_4 = 0;
      func_0x05356664(lVar27,uVar28,*(undefined8 *)PTR_DAT_0782ff00);
      plVar14 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
      *plVar14 = lVar27;
      func_0x032809c4(plVar14,lVar27);
    }
    uVar6 = func_0x03d598d0(param_2,lVar27,*(undefined8 *)PTR_DAT_0782fed0);
    plVar14 = (long *)0x0;
    iVar7 = func_0x06fd9864(0,uVar6);
    func_0x04145068(&uStack_48,param_2,*(undefined8 *)PTR_DAT_0782fef0);
    puVar4 = PTR_DAT_0782fee0;
    uVar30 = 0;
    do {
      uVar15 = func_0x051159b4(&uStack_48,*(undefined8 *)puVar4);
      uVar12 = uStack_38;
      if ((uVar15 & 1) == 0) {
        func_0x051159b0(&uStack_48,*(undefined8 *)PTR_DAT_0782fed8);
LAB_06b4e20c:
        uVar12 = func_0x03d476fc(param_2,*(undefined8 *)PTR_DAT_0782fec8);
        return uVar12;
      }
      if (uStack_38 == 0) {
        auVar35 = func_0x03280cac();
        uVar28 = auVar35._0_8_;
        if (auVar35._8_4_ == 1) {
          plVar16 = (long *)func_0x072ce910(uVar28);
          lVar13 = *plVar16;
          func_0x072ce920();
          func_0x051159b0(&uStack_48,*(undefined8 *)PTR_DAT_0782fed8);
          if (lVar13 == 0) goto LAB_06b4e20c;
          func_0x03280ca4(lVar13);
        }
        func_0x051159b0(&uStack_48,*(undefined8 *)PTR_DAT_0782fed8);
        func_0x03365958(uVar28);
        func_0x03280ca4(0);
        func_0x02f09514();
        pcStack_80 = Merger_MergeBoard_Utils_ExpendSpawnService__AddSpawnFailedResult;
        puStack_78 = puVar4;
        uStack_60 = 0;
        uStack_70 = uVar30;
        uStack_68 = uVar28;
        lStack_58 = param_2;
        if ((bRam0000000007e2a5a7 & 1) == 0) {
          func_0x03280a18(PTR_DAT_0782ff08);
          func_0x03280a18(PTR_DAT_077c16b0);
          func_0x03280a18(PTR_DAT_0782ff10);
          func_0x03280a18(PTR_DAT_0782ff18);
          bRam0000000007e2a5a7 = 1;
        }
        if (((extraout_x1 == 0) ||
            (plVar16 = *(long **)(extraout_x1 + 0x10), plVar16 == (long *)0x0)) ||
           (uVar28 = (**(code **)(*plVar16 + 0x1c8))(plVar16,*(undefined8 *)(*plVar16 + 0x1d0)),
           plVar14 == (long *)0x0)) goto LAB_06b4e434;
        lVar13 = *plVar14;
        cVar3 = *(char *)(extraout_x1 + 0x20);
        uVar12 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar12 == 0) goto LAB_06b4e370;
        piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_06b4e358;
      }
      uVar1 = *(int *)(uStack_38 + 0x24) + (int)uVar30;
      uVar30 = (ulong)uVar1;
    } while ((int)uVar1 <= iVar7);
    func_0x051159b0(&uStack_48,*(undefined8 *)PTR_DAT_0782fed8);
  }
  return uVar12;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar26 = piVar26 + 4;
    if (uVar12 == 0) break;
LAB_06b4e358:
    if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_077c16b0) {
      puVar17 = (undefined8 *)(lVar13 + (long)(*piVar26 + 1) * 0x10 + 0x138);
      goto LAB_06b4e390;
    }
  }
LAB_06b4e370:
  puVar17 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_077c16b0,1);
LAB_06b4e390:
  uVar28 = (*(code *)*puVar17)(plVar14,uVar28,0xffffffff,4,cVar3 != '\0',0,puVar17[1]);
  puVar5 = PTR_DAT_0782ff18;
  puVar4 = PTR_DAT_0782ff08;
  plVar14 = *(long **)(extraout_x1 + 0x10);
  if (plVar14 == (long *)0x0) {
LAB_06b4e434:
    func_0x03280cac();
    puVar4 = PTR_DAT_0782ff20;
    lStack_88 = param_4;
    if ((bRam0000000007e2a5a6 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077cd968);
      func_0x03280a18(PTR_DAT_07810470);
      func_0x03280a18(PTR_DAT_07810478);
      func_0x03280a18(PTR_DAT_077c16b0);
      func_0x03280a18(PTR_DAT_0782fe78);
      func_0x03280a18(PTR_DAT_0782fe80);
      func_0x03280a18(PTR_DAT_078103b0);
      func_0x03280a18(PTR_DAT_0782fea8);
      func_0x03280a18(PTR_DAT_0782feb0);
      func_0x03280a18(PTR_DAT_0782ff28);
      func_0x03280a18(PTR_DAT_0782ff20);
      func_0x03280a18(PTR_DAT_0774f158);
      bRam0000000007e2a5a6 = 1;
    }
    uVar12 = func_0x03280ca0(*(undefined8 *)puVar4);
    return uVar12;
  }
  uVar30 = *(ulong *)(param_4 + 0x10);
  uVar12 = (**(code **)(*plVar14 + 0x1e8))(plVar14,*(undefined8 *)(*plVar14 + 0x1f0));
  uVar18 = func_0x03280ca0(*(undefined8 *)puVar4);
  lVar13 = 0;
  func_0x06b9a3cc(uVar18,uVar28,*(undefined8 *)puVar5);
  param_4 = 0;
  if (uVar30 == 0) goto LAB_06b4e434;
  plVar16 = *(long **)PTR_DAT_0782ff10;
  puVar17 = (undefined8 *)plVar16[7];
  plVar14 = plVar16;
  if (puVar17 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar17 = (undefined8 *)plVar16[7];
    if (puVar17 == (undefined8 *)0x0) {
      func_0x03256878(plVar16);
      puVar17 = (undefined8 *)plVar16[7];
    }
  }
  lStack_88 = 0;
  uVar28 = *puVar17;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar28 = func_0x057a51c4(uVar28,0);
  if (*(long *)(uVar30 + 0x10) != 0) {
    plVar14 = &lStack_88;
    uVar12 = *(ulong *)PTR_DAT_0777b730;
    uVar15 = func_0x04fe48b0(*(long *)(uVar30 + 0x10),uVar28);
    if ((uVar15 & 1) == 0) {
      lVar24 = *(long *)(uVar30 + 0x10);
      lVar27 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(lVar27,*(undefined8 *)PTR_DAT_07751030);
      if (lVar27 != 0) {
        lVar29 = *(long *)(lVar27 + 0x10);
        lVar8 = *(long *)PTR_DAT_07751038;
        *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
        if (lVar29 != 0) {
          uVar1 = *(uint *)(lVar27 + 0x18);
          if (uVar1 < *(uint *)(lVar29 + 0x18)) {
            *(uint *)(lVar27 + 0x18) = uVar1 + 1;
            puVar17 = (undefined8 *)(lVar29 + (long)(int)uVar1 * 8 + 0x20);
            *puVar17 = uVar18;
            func_0x032809c4(puVar17,uVar18);
          }
          else {
            plVar14 = *(long **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(lVar27,uVar18);
          }
          if (lVar24 != 0) {
            func_0x04fe2d68(lVar24,uVar28,lVar27,*(undefined8 *)PTR_DAT_0777b738);
            return uVar30;
          }
        }
      }
    }
    else if (lStack_88 != 0) {
      lVar27 = *(long *)(lStack_88 + 0x10);
      lVar24 = *(long *)PTR_DAT_07751038;
      *(int *)(lStack_88 + 0x1c) = *(int *)(lStack_88 + 0x1c) + 1;
      if (lVar27 != 0) {
        uVar1 = *(uint *)(lStack_88 + 0x18);
        if (uVar1 < *(uint *)(lVar27 + 0x18)) {
          *(uint *)(lStack_88 + 0x18) = uVar1 + 1;
          puVar17 = (undefined8 *)(lVar27 + (long)(int)uVar1 * 8 + 0x20);
          *puVar17 = uVar18;
          func_0x032809c4(puVar17,uVar18);
        }
        else {
          func_0x0414446c(lStack_88,uVar18,
                          *(undefined8 *)(*(long *)(*(long *)(lVar24 + 0x20) + 0xc0) + 0x70));
        }
        return uVar30;
      }
    }
  }
  auVar33 = func_0x03280cac();
  pppppppuVar19 = auVar33._8_8_;
  uVar30 = auVar33._0_8_;
  lVar27 = tpidr_el0;
  lStack_f8 = *(long *)(lVar27 + 0x28);
  pppppppuStack_100 = pppppppuVar19;
  plVar22 = (long *)plVar14[7];
  plVar16 = plVar14;
  if (plVar22 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    plVar22 = (long *)plVar14[7];
    if (plVar22 == (long *)0x0) {
      func_0x03256878(plVar14);
      plVar22 = (long *)plVar14[7];
    }
  }
  plVar32 = (long *)(ulong)*(uint *)(plVar22[1] + 0xfc);
  lVar24 = -((long)plVar32 + 0xfU & 0x1fffffff0);
  puVar31 = auStack_110 + lVar24;
  plStack_108 = (long *)0x0;
  lVar29 = *plVar22;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar8 = func_0x057a51c4(lVar29,0);
  plVar22 = plVar14;
  if (*(long *)(uVar30 + 0x10) == 0) {
LAB_03ec38b8:
    func_0x03280cac();
  }
  else {
    uVar12 = *(ulong *)PTR_DAT_0777b730;
    uVar15 = func_0x04fe48b0(*(long *)(uVar30 + 0x10),lVar8,&plStack_108);
    plVar22 = plStack_108;
    plVar16 = plVar32;
    if ((uVar15 & 1) == 0) {
      unaff_x25 = *(long *)(uVar30 + 0x10);
      unaff_x26 = (long *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(unaff_x26,*(undefined8 *)PTR_DAT_07751030);
      plVar22 = (long *)plVar14[7];
      pppppppuVar2 = pppppppuVar19;
      if (-1 < *(int *)(plVar22[1] + 0x28)) {
        pppppppuVar2 = &pppppppuStack_100;
      }
      func_0x072ce970(puVar31,pppppppuVar2);
      uVar28 = func_0x03280b94(plVar22[1],puVar31);
      lVar29 = lVar8;
      if (unaff_x26 != (long *)0x0) {
        lVar23 = unaff_x26[2];
        lVar25 = *(long *)PTR_DAT_07751038;
        *(int *)((long)unaff_x26 + 0x1c) = *(int *)((long)unaff_x26 + 0x1c) + 1;
        if (lVar23 != 0) {
          uVar1 = *(uint *)(unaff_x26 + 3);
          if (uVar1 < *(uint *)(lVar23 + 0x18)) {
            *(uint *)(unaff_x26 + 3) = uVar1 + 1;
            *(undefined8 *)(lVar23 + (long)(int)uVar1 * 8 + 0x20) = uVar28;
            func_0x032809c4();
          }
          else {
            plVar16 = *(long **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(unaff_x26);
          }
          if (unaff_x25 != 0) {
            uVar12 = *(ulong *)PTR_DAT_0777b738;
            plVar16 = unaff_x26;
            func_0x04fe2d68(unaff_x25,lVar8);
            goto LAB_03ec3884;
          }
        }
      }
      goto LAB_03ec38b8;
    }
    lVar8 = plVar14[7];
    pppppppuVar2 = pppppppuVar19;
    if (-1 < *(int *)(*(long *)(lVar8 + 8) + 0x28)) {
      pppppppuVar2 = &pppppppuStack_100;
    }
    func_0x072ce970(puVar31,pppppppuVar2);
    uVar28 = func_0x03280b94(*(undefined8 *)(lVar8 + 8),puVar31);
    lVar29 = lVar8;
    if (plVar22 == (long *)0x0) goto LAB_03ec38b8;
    lVar23 = plVar22[2];
    lVar25 = *(long *)PTR_DAT_07751038;
    *(int *)((long)plVar22 + 0x1c) = *(int *)((long)plVar22 + 0x1c) + 1;
    if (lVar23 == 0) goto LAB_03ec38b8;
    uVar1 = *(uint *)(plVar22 + 3);
    if (uVar1 < *(uint *)(lVar23 + 0x18)) {
      *(uint *)(plVar22 + 3) = uVar1 + 1;
      *(undefined8 *)(lVar23 + (long)(int)uVar1 * 8 + 0x20) = uVar28;
      func_0x032809c4();
    }
    else {
      plVar16 = *(long **)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70);
      func_0x0414446c(plVar22);
    }
LAB_03ec3884:
    lVar29 = lVar8;
    if (*(long *)(lVar27 + 0x28) == lStack_f8) {
      return uVar30;
    }
  }
  auVar33 = func_0x072ce990();
  *(undefined8 *)((long)auStack_178 + lVar24 + 0x38) = 0x3ec38c0;
  *(long *)((long)auStack_138 + lVar24 + 8) = lVar29;
  *(long **)((long)auStack_138 + lVar24 + 0x10) = plVar22;
  *(undefined8 ********)((long)auStack_138 + lVar24 + 0x18) = pppppppuVar19;
  *(ulong *)((long)auStack_138 + lVar24 + 0x20) = uVar30;
  *(undefined8 *)((long)auStack_138 + lVar24) = 0;
  lVar29 = plVar16[4];
  plVar14 = plVar16;
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c(lVar29);
  }
  lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 0x10);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c();
  }
  if (*(int *)(lVar29 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar29 = plVar16[4];
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c();
  }
  lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 0x10);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c();
  }
  lVar29 = **(long **)(lVar29 + 0xb8);
  if (lVar29 != 0) {
    lVar8 = plVar16[4];
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c();
    }
    plVar14 = *(long **)(*(long *)(lVar8 + 0xc0) + 0x18);
    uVar30 = func_0x04e81584(lVar29,(long)auStack_138 + lVar24);
    if ((uVar30 & 1) == 0) {
      lVar8 = plVar16[4];
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar30 = func_0x03280ca0();
      lVar8 = plVar16[4];
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c(lVar8);
      }
      func_0x04645340(uVar30,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x38));
      plVar16 = (long *)0x0;
      if (uVar30 != 0) {
        *(undefined1 (*) [16])(uVar30 + 0x10) = auVar33;
        func_0x032809c4((undefined1 (*) [16])(uVar30 + 0x10),0);
        return uVar30;
      }
    }
    else if (*(long *)((long)auStack_138 + lVar24) != 0) {
      pauVar9 = (undefined1 (*) [16])(*(long *)((long)auStack_138 + lVar24) + 0x10);
      *pauVar9 = auVar33;
      func_0x032809c4(pauVar9,0);
      return *(ulong *)((long)auStack_138 + lVar24);
    }
  }
  auVar34 = func_0x03280cac();
  uVar18 = auVar34._8_8_;
  uVar28 = auVar34._0_8_;
  *(undefined8 *)((long)auStack_178 + lVar24 + 8) = 0x3ec3a10;
  *(undefined1 **)((long)auStack_178 + lVar24 + 0x10) = puVar31;
  *(long *)((long)auStack_178 + lVar24 + 0x18) = lVar29;
  *(long **)((long)auStack_178 + lVar24 + 0x20) = plVar16;
  *(long *)((long)auStack_178 + lVar24 + 0x28) = auVar33._0_8_;
  *(long *)((long)auStack_178 + lVar24 + 0x30) = auVar33._8_8_;
  *(undefined8 *)((long)auStack_178 + lVar24) = 0;
  lVar29 = *(long *)(uVar12 + 0x20);
  plVar16 = plVar14;
  uVar30 = uVar12;
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c(lVar29);
  }
  lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 0x10);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c();
  }
  if (*(int *)(lVar29 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar29 = *(long *)(uVar12 + 0x20);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c();
  }
  lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 0x10);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c();
  }
  lVar29 = **(long **)(lVar29 + 0xb8);
  if (lVar29 != 0) {
    lVar8 = *(long *)(uVar12 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c();
    }
    plVar16 = *(long **)(*(long *)(lVar8 + 0xc0) + 0x18);
    uVar15 = func_0x04e81584(lVar29,(long)auStack_178 + lVar24);
    if ((uVar15 & 1) == 0) {
      lVar8 = *(long *)(uVar12 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar15 = func_0x03280ca0();
      lVar8 = *(long *)(uVar12 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c(lVar8);
      }
      func_0x046453e4(uVar15,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x40));
      uVar12 = 0;
      if (uVar15 != 0) {
        *(undefined8 *)(uVar15 + 0x10) = uVar28;
        func_0x032809c4((undefined8 *)(uVar15 + 0x10),uVar28);
        *(undefined8 *)(uVar15 + 0x18) = uVar18;
        *(long **)(uVar15 + 0x20) = plVar14;
        func_0x032809c4((undefined8 *)(uVar15 + 0x18),0);
        return uVar15;
      }
    }
    else if (*(long *)((long)auStack_178 + lVar24) != 0) {
      puVar17 = (undefined8 *)(*(long *)((long)auStack_178 + lVar24) + 0x10);
      *puVar17 = uVar28;
      func_0x032809c4(puVar17,uVar28);
      lVar8 = *(long *)((long)auStack_178 + lVar24);
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 0x18) = uVar18;
        *(long **)(lVar8 + 0x20) = plVar14;
        func_0x032809c4((undefined8 *)(lVar8 + 0x18),0);
        return *(ulong *)((long)auStack_178 + lVar24);
      }
    }
  }
  auVar33 = func_0x03280cac();
  uVar20 = auVar33._8_8_;
  uVar10 = auVar33._0_8_;
  *(undefined8 *)((long)auStack_1b8 + lVar24 + 8) = 0x3ec3b90;
  *(long *)((long)auStack_1b8 + lVar24 + 0x10) = lVar29;
  *(ulong *)((long)auStack_1b8 + lVar24 + 0x18) = uVar12;
  *(undefined8 *)((long)auStack_1b8 + lVar24 + 0x20) = uVar28;
  *(undefined8 *)((long)auStack_1b8 + lVar24 + 0x28) = uVar18;
  *(long **)((long)auStack_1b8 + lVar24 + 0x30) = plVar14;
  *(undefined8 *)((long)auStack_1b8 + lVar24) = 0;
  lVar29 = *(long *)(uVar30 + 0x20);
  plVar14 = plVar16;
  uVar12 = uVar30;
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c(lVar29);
  }
  lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 0x10);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c();
  }
  if (*(int *)(lVar29 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar29 = *(long *)(uVar30 + 0x20);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c();
  }
  lVar29 = *(long *)(*(long *)(lVar29 + 0xc0) + 0x10);
  if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
    lVar29 = func_0x0325681c();
  }
  lVar29 = **(long **)(lVar29 + 0xb8);
  if (lVar29 != 0) {
    lVar8 = *(long *)(uVar30 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c();
    }
    plVar14 = *(long **)(*(long *)(lVar8 + 0xc0) + 0x18);
    uVar15 = func_0x04e81584(lVar29,(long)auStack_1b8 + lVar24);
    if ((uVar15 & 1) == 0) {
      lVar8 = *(long *)(uVar30 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar15 = func_0x03280ca0();
      lVar8 = *(long *)(uVar30 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c(lVar8);
      }
      func_0x04645488(uVar15,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x40));
      uVar30 = 0;
      if (uVar15 != 0) {
        *(undefined8 *)(uVar15 + 0x10) = uVar10;
        func_0x032809c4((undefined8 *)(uVar15 + 0x10),uVar10);
        *(undefined8 *)(uVar15 + 0x18) = uVar20;
        *(long **)(uVar15 + 0x20) = plVar16;
        func_0x032809c4((undefined8 *)(uVar15 + 0x18),0);
        return uVar15;
      }
    }
    else if (*(long *)((long)auStack_1b8 + lVar24) != 0) {
      puVar17 = (undefined8 *)(*(long *)((long)auStack_1b8 + lVar24) + 0x10);
      *puVar17 = uVar10;
      func_0x032809c4(puVar17,uVar10);
      lVar8 = *(long *)((long)auStack_1b8 + lVar24);
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 0x18) = uVar20;
        *(long **)(lVar8 + 0x20) = plVar16;
        func_0x032809c4((undefined8 *)(lVar8 + 0x18),0);
        return *(ulong *)((long)auStack_1b8 + lVar24);
      }
    }
  }
  auVar33 = func_0x03280cac();
  uVar18 = auVar33._8_8_;
  uVar28 = auVar33._0_8_;
  *(undefined8 *)((long)auStack_238 + lVar24 + 0x38) = 0x3ec3d10;
  *(long **)((long)auStack_1f8 + lVar24 + 8) = plVar32;
  *(long *)((long)auStack_1f8 + lVar24 + 0x10) = lVar29;
  *(ulong *)((long)auStack_1f8 + lVar24 + 0x18) = uVar30;
  *(undefined8 *)((long)auStack_1f8 + lVar24 + 0x20) = uVar10;
  *(undefined8 *)((long)auStack_1f8 + lVar24 + 0x28) = uVar20;
  *(long **)((long)auStack_1f8 + lVar24 + 0x30) = plVar16;
  *(undefined8 *)((long)auStack_1f8 + lVar24) = 0;
  lVar8 = *(long *)(lVar13 + 0x20);
  plVar16 = plVar14;
  uVar30 = uVar12;
  lVar29 = lVar13;
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = func_0x0325681c(lVar8);
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = func_0x0325681c();
  }
  if (*(int *)(lVar8 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar8 = *(long *)(lVar13 + 0x20);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = func_0x0325681c();
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
  if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = func_0x0325681c();
  }
  lVar8 = **(long **)(lVar8 + 0xb8);
  if (lVar8 != 0) {
    lVar23 = *(long *)(lVar13 + 0x20);
    if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
      lVar23 = func_0x0325681c();
    }
    plVar16 = *(long **)(*(long *)(lVar23 + 0xc0) + 0x18);
    uVar15 = func_0x04e81584(lVar8,(long)auStack_1f8 + lVar24);
    if ((uVar15 & 1) == 0) {
      lVar23 = *(long *)(lVar13 + 0x20);
      if ((*(byte *)(lVar23 + 0x135) & 1) == 0) {
        lVar23 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar23 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar15 = func_0x03280ca0();
      lVar13 = *(long *)(lVar13 + 0x20);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c(lVar13);
      }
      func_0x04645704(uVar15,*(undefined8 *)(*(long *)(lVar13 + 0xc0) + 0x48));
      lVar13 = 0;
      if (uVar15 != 0) {
        *(undefined8 *)(uVar15 + 0x10) = uVar28;
        func_0x032809c4((undefined8 *)(uVar15 + 0x10),uVar28);
        *(undefined8 *)(uVar15 + 0x18) = uVar18;
        *(long **)(uVar15 + 0x20) = plVar14;
        func_0x032809c4((undefined8 *)(uVar15 + 0x18),0);
LAB_03ec3e7c:
        *(int *)(uVar15 + 0x28) = (int)uVar12;
        return uVar15;
      }
    }
    else if (*(long *)((long)auStack_1f8 + lVar24) != 0) {
      puVar17 = (undefined8 *)(*(long *)((long)auStack_1f8 + lVar24) + 0x10);
      *puVar17 = uVar28;
      func_0x032809c4(puVar17,uVar28);
      lVar23 = *(long *)((long)auStack_1f8 + lVar24);
      if (lVar23 != 0) {
        *(undefined8 *)(lVar23 + 0x18) = uVar18;
        *(long **)(lVar23 + 0x20) = plVar14;
        func_0x032809c4((undefined8 *)(lVar23 + 0x18),0);
        uVar15 = *(ulong *)((long)auStack_1f8 + lVar24);
        if (uVar15 != 0) goto LAB_03ec3e7c;
        lVar13 = 0;
      }
    }
  }
  auVar33 = func_0x03280cac();
  uVar20 = auVar33._8_8_;
  uVar10 = auVar33._0_8_;
  *(undefined8 *)((long)alStack_298 + lVar24 + 0x58) = 0x3ec3ea0;
  *(long *)((long)auStack_238 + lVar24 + 8) = lVar8;
  *(long *)((long)auStack_238 + lVar24 + 0x10) = lVar13;
  *(undefined8 *)((long)auStack_238 + lVar24 + 0x18) = uVar28;
  *(undefined8 *)((long)auStack_238 + lVar24 + 0x20) = uVar18;
  *(long **)((long)auStack_238 + lVar24 + 0x28) = plVar14;
  *(ulong *)((long)auStack_238 + lVar24 + 0x30) = uVar12 & 0xffffffff;
  *(undefined8 *)((long)auStack_238 + lVar24) = 0;
  lVar13 = *(long *)(lVar29 + 0x20);
  plVar14 = plVar16;
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c(lVar13);
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c();
  }
  if (*(int *)(lVar13 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar13 = *(long *)(lVar29 + 0x20);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c();
  }
  lVar13 = *(long *)(*(long *)(lVar13 + 0xc0) + 0x10);
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    lVar13 = func_0x0325681c();
  }
  lVar13 = **(long **)(lVar13 + 0xb8);
  if (lVar13 != 0) {
    lVar8 = *(long *)(lVar29 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c();
    }
    plVar14 = *(long **)(*(long *)(lVar8 + 0xc0) + 0x18);
    uVar12 = func_0x04e81584(lVar13,(long)auStack_238 + lVar24);
    if ((uVar12 & 1) == 0) {
      lVar8 = *(long *)(lVar29 + 0x20);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar12 = func_0x03280ca0();
      lVar29 = *(long *)(lVar29 + 0x20);
      if ((*(byte *)(lVar29 + 0x135) & 1) == 0) {
        lVar29 = func_0x0325681c(lVar29);
      }
      func_0x046457b8(uVar12,*(undefined8 *)(*(long *)(lVar29 + 0xc0) + 0x48));
      lVar29 = 0;
      if (uVar12 != 0) {
        *(undefined8 *)(uVar12 + 0x10) = uVar10;
        func_0x032809c4((undefined8 *)(uVar12 + 0x10),uVar10);
        *(undefined8 *)(uVar12 + 0x18) = uVar20;
        *(long **)(uVar12 + 0x20) = plVar16;
        func_0x032809c4((undefined8 *)(uVar12 + 0x18),0);
LAB_03ec400c:
        *(int *)(uVar12 + 0x28) = (int)uVar30;
        return uVar12;
      }
    }
    else if (*(long *)((long)auStack_238 + lVar24) != 0) {
      puVar17 = (undefined8 *)(*(long *)((long)auStack_238 + lVar24) + 0x10);
      *puVar17 = uVar10;
      func_0x032809c4(puVar17,uVar10);
      lVar8 = *(long *)((long)auStack_238 + lVar24);
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 0x18) = uVar20;
        *(long **)(lVar8 + 0x20) = plVar16;
        func_0x032809c4((undefined8 *)(lVar8 + 0x18),0);
        uVar12 = *(ulong *)((long)auStack_238 + lVar24);
        if (uVar12 != 0) goto LAB_03ec400c;
        lVar29 = 0;
      }
    }
  }
  auVar33 = func_0x03280cac();
  plVar22 = auVar33._8_8_;
  uVar12 = auVar33._0_8_;
  *(undefined1 **)(auStack_2a0 + lVar24) = &stack0xffffffffffffff10;
  *(undefined8 *)((long)alStack_298 + lVar24) = 0x3ec4030;
  *(long *)((long)alStack_298 + lVar24 + 8) = lVar27;
  *(long **)((long)alStack_298 + lVar24 + 0x18) = unaff_x26;
  *(long *)((long)alStack_298 + lVar24 + 0x20) = unaff_x25;
  *(long *)((long)alStack_298 + lVar24 + 0x28) = lVar13;
  *(long *)((long)alStack_298 + lVar24 + 0x30) = lVar29;
  *(undefined8 *)((long)alStack_298 + lVar24 + 0x38) = uVar10;
  *(undefined8 *)((long)alStack_298 + lVar24 + 0x40) = uVar20;
  *(long **)((long)alStack_298 + lVar24 + 0x48) = plVar16;
  *(ulong *)((long)alStack_298 + lVar24 + 0x50) = uVar30 & 0xffffffff;
  lVar13 = tpidr_el0;
  *(undefined8 *)((long)&lStack_2a8 + lVar24) = *(undefined8 *)(lVar13 + 0x28);
  plVar16 = (long *)plVar14[7];
  if (plVar16 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar16 = (long *)plVar14[7];
    if (plVar16 == (long *)0x0) {
      func_0x03256878(plVar14);
      plVar16 = (long *)plVar14[7];
    }
  }
  uVar15 = (ulong)*(uint *)(plVar16[4] + 0xfc);
  uVar30 = uVar15 + 0xf & 0x1fffffff0;
  lVar27 = (long)&uStack_2c0 + (lVar24 - uVar30);
  puVar17 = (undefined8 *)(lVar27 - uVar30);
  lVar29 = (long)puVar17 - uVar30;
  func_0x072ce9a0(lVar29,0,uVar15);
  if (plVar22 == (long *)0x0) {
    func_0x03280cac();
    plVar16 = (long *)0x0;
  }
  else {
    lVar8 = *plVar16;
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = func_0x0325681c(lVar8);
    }
    lVar23 = *plVar22;
    uVar30 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar30 != 0) {
      piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar26 + -2) == lVar8) {
          puVar11 = (undefined8 *)(lVar23 + (long)*piVar26 * 0x10 + 0x138);
          goto LAB_03ec4144;
        }
        uVar30 = uVar30 - 1;
        piVar26 = piVar26 + 4;
      } while (uVar30 != 0);
    }
    puVar11 = (undefined8 *)func_0x03256b10(plVar22,lVar8,0);
LAB_03ec4144:
    plVar16 = (long *)(*(code *)*puVar11)(plVar22,puVar11[1]);
    puVar4 = PTR_DAT_0774e8e0;
    if (plVar16 != (long *)0x0) {
      do {
        lVar8 = *plVar16;
        uVar30 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar30 != 0) {
          piVar26 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == *(long *)puVar4) {
              puVar11 = (undefined8 *)(lVar8 + (long)*piVar26 * 0x10 + 0x138);
              goto LAB_03ec41ac;
            }
            uVar30 = uVar30 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar30 != 0);
        }
        puVar11 = (undefined8 *)func_0x03256b10(plVar16,*(long *)puVar4,0);
LAB_03ec41ac:
        uVar30 = (*(code *)*puVar11)(plVar16,puVar11[1]);
        if ((uVar30 & 1) == 0) {
          plVar14 = (long *)0x0;
          goto LAB_03ec429c;
        }
        lVar8 = *(long *)(plVar14[7] + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = func_0x0325681c(lVar8);
        }
        lVar23 = *plVar16;
        uVar30 = (ulong)*(ushort *)(lVar23 + 0x12e);
        if (uVar30 != 0) {
          piVar26 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
          do {
            if (*(long *)(piVar26 + -2) == lVar8) {
              lVar8 = lVar23 + (long)*piVar26 * 0x10 + 0x138;
              goto LAB_03ec4220;
            }
            uVar30 = uVar30 - 1;
            piVar26 = piVar26 + 4;
          } while (uVar30 != 0);
        }
        lVar8 = func_0x03256b10(plVar16,lVar8,0);
LAB_03ec4220:
        *(long *)((long)&lStack_2b8 + lVar24) = lVar27;
        lVar8 = *(long *)(lVar8 + 8);
        (**(code **)(lVar8 + 0x10))
                  (*(undefined8 *)(lVar8 + 8),lVar8,plVar16,(long)&lStack_2b8 + lVar24,lVar27);
        func_0x072ce970(lVar29,lVar27,uVar15);
        func_0x072ce970(puVar17,lVar29,uVar15);
        puVar11 = puVar17;
        if (-1 < *(int *)(*(long *)(plVar14[7] + 0x20) + 0x28)) {
          puVar11 = (undefined8 *)*puVar17;
        }
        puVar21 = *(undefined8 **)(plVar14[7] + 0x28);
        uVar28 = *puVar21;
        *(undefined8 **)((long)&lStack_2b8 + lVar24) = puVar11;
        (*(code *)puVar21[2])(uVar28,puVar21,uVar12,(long)&lStack_2b8 + lVar24,auStack_2b0 + lVar24)
        ;
      } while( true );
    }
  }
  func_0x03280cac();
LAB_03ec4340:
  func_0x03280ca4(plVar14);
  do {
    auVar35 = func_0x072ce990();
    if (auVar35._8_4_ != 1) {
      if (plVar16 == (long *)0x0) goto LAB_03ec43e8;
      lVar13 = *plVar16;
      uVar30 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar30 == 0) goto LAB_03ec43c0;
      piVar26 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      break;
    }
    puVar17 = (undefined8 *)func_0x072ce910(auVar35._0_8_);
    plVar14 = (long *)*puVar17;
    func_0x072ce920();
LAB_03ec429c:
    if (plVar16 != (long *)0x0) {
      lVar27 = *plVar16;
      uVar30 = (ulong)*(ushort *)(lVar27 + 0x12e);
      if (uVar30 != 0) {
        piVar26 = (int *)(*(long *)(lVar27 + 0xb0) + 8);
        do {
          if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar17 = (undefined8 *)(lVar27 + (long)*piVar26 * 0x10 + 0x138);
            goto LAB_03ec42f4;
          }
          uVar30 = uVar30 - 1;
          piVar26 = piVar26 + 4;
        } while (uVar30 != 0);
      }
      puVar17 = (undefined8 *)func_0x03256b10(plVar16,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec42f4:
      (*(code *)*puVar17)(plVar16,puVar17[1]);
    }
    if (plVar14 != (long *)0x0) goto LAB_03ec4340;
    if (*(long *)(lVar13 + 0x28) == *(long *)((long)&lStack_2a8 + lVar24)) {
      return uVar12;
    }
  } while( true );
  while( true ) {
    uVar30 = uVar30 - 1;
    piVar26 = piVar26 + 4;
    if (uVar30 == 0) break;
    if (*(long *)(piVar26 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar17 = (undefined8 *)(lVar13 + (long)*piVar26 * 0x10 + 0x138);
      goto LAB_03ec43dc;
    }
  }
LAB_03ec43c0:
  puVar17 = (undefined8 *)func_0x03256b10(plVar16,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec43dc:
  (*(code *)*puVar17)(plVar16,puVar17[1]);
LAB_03ec43e8:
  func_0x03365958(auVar35._0_8_);
  func_0x03280ca4(0);
  auVar33 = func_0x02f09514();
  lVar13 = auVar33._8_8_;
  *(undefined8 *)(lVar29 + -0x20) = 0x3ec4400;
  *(undefined8 *)(lVar29 + -0x18) = 0;
  *(long **)(lVar29 + -0x10) = plVar16;
  *(ulong *)(lVar29 + -8) = uVar12;
  puVar17 = *(undefined8 **)(lVar13 + 0x38);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar17 = *(undefined8 **)(lVar13 + 0x38);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x03256878(lVar13);
      puVar17 = *(undefined8 **)(lVar13 + 0x38);
    }
  }
  *(undefined8 *)(lVar29 + -0x28) = 0;
  uVar28 = *puVar17;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar18 = func_0x057a51c4(uVar28,0);
  lVar27 = *(long *)(auVar33._0_8_ + 0x10);
  if (lVar27 != 0) {
    uVar12 = func_0x04fe48b0(lVar27,uVar18,lVar29 + -0x28,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar12 & 1) == 0) {
      lVar27 = *(long *)(*(long *)(lVar13 + 0x38) + 8);
      lVar13 = *(long *)(lVar27 + 0x38);
      if (lVar13 == 0) {
        func_0x03256878(lVar27);
        lVar13 = *(long *)(lVar27 + 0x38);
      }
      lVar13 = *(long *)(lVar13 + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c();
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar13 = *(long *)(*(long *)(lVar27 + 0x38) + 0x10);
      if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
        lVar13 = func_0x0325681c();
      }
      uVar12 = **(ulong **)(lVar13 + 0xb8);
    }
    else {
      uVar12 = func_0x03d2c6a8(*(undefined8 *)(lVar29 + -0x28),
                               *(undefined8 *)(*(long *)(lVar13 + 0x38) + 0x18));
    }
    return uVar12;
  }
  auVar34 = func_0x03280cac();
  lVar13 = auVar34._8_8_;
  *(undefined8 *)(lVar29 + -0x50) = 0x3ec4518;
  *(undefined8 *)(lVar29 + -0x48) = uVar28;
  *(undefined1 (*) [16])(lVar29 + -0x40) = auVar33;
  puVar17 = *(undefined8 **)(lVar13 + 0x38);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar17 = *(undefined8 **)(lVar13 + 0x38);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x03256878(lVar13);
      puVar17 = *(undefined8 **)(lVar13 + 0x38);
    }
  }
  *(undefined8 *)(lVar29 + -0x58) = 0;
  uVar28 = *puVar17;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar28 = func_0x057a51c4(uVar28,0);
  lVar27 = *(long *)(auVar34._0_8_ + 0x10);
  if (lVar27 != 0) {
    uVar12 = func_0x04fe48b0(lVar27,uVar28,lVar29 + -0x58,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar12 & 1) == 0) {
      uVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + 8))();
    }
    else {
      uVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + 0x18))
                         (*(undefined8 *)(lVar29 + -0x58));
    }
    return uVar12;
  }
  auVar33 = func_0x03280cac();
  lVar13 = auVar33._8_8_;
  *(undefined8 *)(lVar29 + -0x80) = 0x3ec45f0;
  *(undefined1 (*) [16])(lVar29 + -0x70) = auVar34;
  puVar17 = *(undefined8 **)(lVar13 + 0x38);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b740);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar17 = *(undefined8 **)(lVar13 + 0x38);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x03256878(lVar13);
      puVar17 = *(undefined8 **)(lVar13 + 0x38);
    }
  }
  *(undefined8 *)(lVar29 + -0x78) = 0;
  uVar28 = *puVar17;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar18 = func_0x057a51c4(uVar28,0);
  lVar13 = *(long *)(auVar33._0_8_ + 0x10);
  if (lVar13 != 0) {
    uVar12 = func_0x04fe48b0(lVar13,uVar18,lVar29 + -0x78,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    lVar13 = *(long *)(lVar29 + -0x78);
    if (lVar13 != 0) {
      iVar7 = *(int *)(lVar13 + 0x18);
      if (iVar7 < 1) {
        return 0;
      }
      *(undefined4 *)(lVar13 + 0x18) = 0;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      func_0x057b9c7c(*(undefined8 *)(lVar13 + 0x10),0,iVar7,0);
      return 1;
    }
  }
  auVar34 = func_0x03280cac();
  lVar13 = auVar34._8_8_;
  *(undefined8 *)(lVar29 + -0xa0) = 0x3ec46ec;
  *(undefined8 *)(lVar29 + -0x90) = uVar28;
  *(long *)(lVar29 + -0x88) = auVar33._0_8_;
  puVar17 = *(undefined8 **)(lVar13 + 0x38);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar17 = *(undefined8 **)(lVar13 + 0x38);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x03256878(lVar13);
      puVar17 = *(undefined8 **)(lVar13 + 0x38);
    }
  }
  *(undefined8 *)(lVar29 + -0x98) = 0;
  uVar28 = *puVar17;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar18 = func_0x057a51c4(uVar28,0);
  lVar13 = *(long *)(auVar34._0_8_ + 0x10);
  if (lVar13 != 0) {
    uVar12 = func_0x04fe48b0(lVar13,uVar18,lVar29 + -0x98,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar29 + -0x98) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar29 + -0x98) + 0x18));
    }
  }
  auVar33 = func_0x03280cac();
  lVar13 = auVar33._8_8_;
  *(undefined8 *)(lVar29 + -0xc0) = 0x3ec47bc;
  *(undefined8 *)(lVar29 + -0xb0) = uVar28;
  *(long *)(lVar29 + -0xa8) = auVar34._0_8_;
  puVar17 = *(undefined8 **)(lVar13 + 0x38);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar17 = *(undefined8 **)(lVar13 + 0x38);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x03256878(lVar13);
      puVar17 = *(undefined8 **)(lVar13 + 0x38);
    }
  }
  *(undefined8 *)(lVar29 + -0xb8) = 0;
  uVar28 = *puVar17;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar18 = func_0x057a51c4(uVar28,0);
  lVar13 = *(long *)(auVar33._0_8_ + 0x10);
  if (lVar13 != 0) {
    uVar12 = func_0x04fe48b0(lVar13,uVar18,lVar29 + -0xb8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar29 + -0xb8) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar29 + -0xb8) + 0x18));
    }
  }
  auVar34 = func_0x03280cac();
  lVar13 = auVar34._8_8_;
  *(undefined8 *)(lVar29 + -0xe0) = 0x3ec488c;
  *(undefined8 *)(lVar29 + -0xd0) = uVar28;
  *(long *)(lVar29 + -200) = auVar33._0_8_;
  puVar17 = *(undefined8 **)(lVar13 + 0x38);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar17 = *(undefined8 **)(lVar13 + 0x38);
    if (puVar17 == (undefined8 *)0x0) {
      func_0x03256878(lVar13);
      puVar17 = *(undefined8 **)(lVar13 + 0x38);
    }
  }
  *(undefined8 *)(lVar29 + -0xd8) = 0;
  uVar28 = *puVar17;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar18 = func_0x057a51c4(uVar28,0);
  lVar13 = *(long *)(auVar34._0_8_ + 0x10);
  if (lVar13 != 0) {
    uVar12 = func_0x04fe48b0(lVar13,uVar18,lVar29 + -0xd8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar12 & 1) == 0) {
      uVar12 = 0;
    }
    else {
      if (*(long *)(lVar29 + -0xd8) == 0) goto LAB_03ec4958;
      uVar12 = (ulong)(0 < *(int *)(*(long *)(lVar29 + -0xd8) + 0x18));
    }
    return uVar12;
  }
LAB_03ec4958:
  auVar33 = func_0x03280cac();
  lVar13 = auVar33._8_8_;
  *(undefined8 *)(lVar29 + -0x100) = 0x3ec495c;
  *(undefined8 *)(lVar29 + -0xf0) = uVar28;
  *(long *)(lVar29 + -0xe8) = auVar34._0_8_;
  puVar17 = *(undefined8 **)(lVar13 + 0x38);
  if (puVar17 == (undefined8 *)0x0) {
    func_0x03256878(lVar13);
    puVar17 = *(undefined8 **)(lVar13 + 0x38);
  }
  uVar12 = (**(code **)*puVar17)(auVar33._0_8_);
  if ((uVar12 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x03ec49bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar12 = (*(code *)**(undefined8 **)(*(long *)(lVar13 + 0x38) + 8))(auVar33._0_8_);
  return uVar12;
}

