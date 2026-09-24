/* Ghidra 12.1.2 native pseudocode; RVA 0x6A7A45C; Merger.MergeBoard.Systems.TransformSystem.TransformTimeLimitedItem; status ok */


/* WARNING: Possible PIC construction at 0x06b7a568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x06b7a738: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x06b7a56c) */
/* WARNING: Removing unreachable block (ram,0x06b7a590) */
/* WARNING: Removing unreachable block (ram,0x06b7a5cc) */
/* WARNING: Removing unreachable block (ram,0x06b7a5d4) */
/* WARNING: Removing unreachable block (ram,0x06b7a5fc) */
/* WARNING: Removing unreachable block (ram,0x06b7a5e0) */
/* WARNING: Removing unreachable block (ram,0x06b7a5ec) */
/* WARNING: Removing unreachable block (ram,0x06b7a60c) */
/* WARNING: Removing unreachable block (ram,0x06b7a670) */
/* WARNING: Removing unreachable block (ram,0x06b7a6a0) */
/* WARNING: Removing unreachable block (ram,0x06b7a6a8) */
/* WARNING: Removing unreachable block (ram,0x06b7a6d0) */
/* WARNING: Removing unreachable block (ram,0x06b7a6b4) */
/* WARNING: Removing unreachable block (ram,0x06b7a6c0) */
/* WARNING: Removing unreachable block (ram,0x06b7a6dc) */
/* WARNING: Removing unreachable block (ram,0x06b7a73c) */
/* WARNING: Type propagation algorithm not settling */

ulong Merger_MergeBoard_Systems_TransformSystem__TransformTimeLimitedItem
                (undefined8 param_1,long param_2,ulong param_3,ulong param_4,ulong param_5,
                ulong param_6,undefined8 param_7)

{
  undefined8 *******pppppppuVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 (*pauVar6) [16];
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong *puVar12;
  ulong *puVar13;
  undefined8 *******pppppppuVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 *puVar17;
  long extraout_x1;
  ulong *puVar18;
  ulong *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  int *piVar28;
  undefined8 uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined1 *puVar32;
  ulong *puVar33;
  ulong uVar34;
  long *plVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [12];
  long alStack_590 [5];
  long alStack_568 [4];
  long alStack_548 [4];
  long alStack_528 [4];
  long lStack_508;
  undefined1 auStack_500 [24];
  undefined8 auStack_4e8 [3];
  undefined1 auStack_4d0 [24];
  ulong auStack_4b8 [5];
  undefined8 uStack_490;
  long lStack_488;
  undefined1 auStack_480 [8];
  long lStack_478;
  undefined1 auStack_470 [8];
  long alStack_468 [12];
  ulong auStack_408 [8];
  ulong auStack_3c8 [8];
  ulong auStack_388 [8];
  ulong auStack_348 [8];
  ulong auStack_308 [5];
  undefined1 auStack_2e0 [8];
  ulong *puStack_2d8;
  undefined8 *******pppppppuStack_2d0;
  long lStack_2c8;
  undefined8 uStack_260;
  ulong uStack_258;
  undefined8 uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  long lStack_238;
  ulong uStack_230;
  ulong uStack_228;
  
  puVar4 = PTR_DAT_07831848;
  uVar31 = param_3;
  uVar20 = param_4;
  uVar27 = param_5;
  uVar5 = param_6;
  if ((bRam0000000007e2a721 & 1) == 0) {
    func_0x03280a18(PTR_DAT_07831848);
    func_0x03280a18(PTR_DAT_07830b00);
    func_0x03280a18(PTR_DAT_07831850);
    func_0x03280a18(PTR_DAT_07814400);
    func_0x03280a18(PTR_DAT_078104c8);
    func_0x03280a18(PTR_DAT_0777e958);
    bRam0000000007e2a721 = 1;
  }
  uVar34 = *(ulong *)(param_2 + 0x10);
  puVar12 = (ulong *)func_0x03280ca0(*(undefined8 *)puVar4);
  func_0x06b9a4b8(puVar12,0);
  puVar4 = PTR_DAT_0777e958;
  uVar30 = uVar27;
  if (puVar12 == (ulong *)0x0) {
LAB_06b7a75c:
    func_0x03280cac();
    uStack_260 = 0x6b7a760;
    uVar27 = uVar30;
    uStack_258 = uVar34;
    uStack_250 = param_1;
    uStack_248 = param_4;
    uStack_240 = param_5;
    lStack_238 = param_2;
    uStack_230 = param_3;
    uStack_228 = param_6;
    if ((bRam0000000007e2a722 & 1) == 0) {
      func_0x03280a18(PTR_DAT_07830b08);
      func_0x03280a18(PTR_DAT_07830b38);
      bRam0000000007e2a722 = 1;
    }
    puVar4 = PTR_DAT_07830b08;
    if (uVar30 != 0) {
      *(ulong *)(uVar30 + 0xb8) = uVar5;
      func_0x032809c4((ulong *)(uVar30 + 0xb8),uVar5);
      *(undefined8 *)(uVar30 + 0xc0) = param_7;
      func_0x032809c4((undefined8 *)(uVar30 + 0xc0),param_7);
      *(undefined4 *)(uVar30 + 0xa0) = 0;
      *(undefined8 *)(uVar30 + 0x108) = 0;
    }
    uVar34 = *(ulong *)(extraout_x1 + 0x10);
    puVar13 = (ulong *)func_0x03280ca0(*(undefined8 *)puVar4);
    func_0x06b9a8d4(puVar13,0);
    if (puVar13 == (ulong *)0x0) {
SUB_057da5fc:
      uVar20 = func_0x03280cac();
      return uVar20;
    }
    puVar13[2] = uVar31;
    func_0x032809c4(puVar13 + 2,uVar31);
    puVar13[3] = uVar5;
    func_0x032809c4(puVar13 + 3,uVar5);
    puVar13[4] = uVar30;
    func_0x032809c4(puVar13 + 4,uVar30);
    if (uVar34 == 0) goto SUB_057da5fc;
    puVar19 = *(ulong **)PTR_DAT_07830b38;
    param_6 = uStack_228;
    param_3 = uStack_230;
    param_2 = lStack_238;
    param_5 = uStack_240;
    param_4 = uStack_248;
    uVar31 = uStack_258;
  }
  else {
    puVar12[2] = param_3;
    func_0x032809c4(puVar12 + 2,param_3);
    *(int *)(puVar12 + 3) = (int)param_5;
    puVar12[4] = *(ulong *)puVar4;
    func_0x032809c4(puVar12 + 4);
    *(undefined1 *)(puVar12 + 5) = *(undefined1 *)(param_4 + 0x20);
    *(undefined4 *)((long)puVar12 + 0x2c) = *(undefined4 *)(param_4 + 0x24);
    uVar30 = uVar27;
    if (uVar34 == 0) goto LAB_06b7a75c;
    puVar19 = *(ulong **)PTR_DAT_07831850;
    uStack_260 = 0x6b7a56c;
    puVar13 = puVar12;
    uVar31 = uVar34;
  }
  puVar21 = (undefined8 *)puVar19[7];
  puVar18 = puVar19;
  uStack_250 = uStack_260;
  uStack_248 = param_4;
  uStack_240 = param_5;
  lStack_238 = param_2;
  uStack_230 = param_3;
  uStack_228 = param_6;
  if (puVar21 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar21 = (undefined8 *)puVar19[7];
    if (puVar21 == (undefined8 *)0x0) {
      func_0x03256878(puVar19);
      puVar21 = (undefined8 *)puVar19[7];
    }
  }
  uStack_258 = 0;
  uVar29 = *puVar21;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar29 = func_0x057a51c4(uVar29,0);
  if (*(long *)(uVar34 + 0x10) != 0) {
    puVar18 = &uStack_258;
    uVar20 = *(ulong *)PTR_DAT_0777b730;
    uVar5 = func_0x04fe48b0(*(long *)(uVar34 + 0x10),uVar29);
    if ((uVar5 & 1) == 0) {
      lVar25 = *(long *)(uVar34 + 0x10);
      lVar22 = func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(lVar22,*(undefined8 *)PTR_DAT_07751030);
      if (lVar22 != 0) {
        lVar26 = *(long *)(lVar22 + 0x10);
        lVar7 = *(long *)PTR_DAT_07751038;
        *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
        if (lVar26 != 0) {
          uVar3 = *(uint *)(lVar22 + 0x18);
          if (uVar3 < *(uint *)(lVar26 + 0x18)) {
            *(uint *)(lVar22 + 0x18) = uVar3 + 1;
            puVar21 = (undefined8 *)(lVar26 + (long)(int)uVar3 * 8 + 0x20);
            *puVar21 = puVar13;
            func_0x032809c4(puVar21,puVar13);
          }
          else {
            puVar18 = *(ulong **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(lVar22,puVar13);
          }
          if (lVar25 != 0) {
            func_0x04fe2d68(lVar25,uVar29,lVar22,*(undefined8 *)PTR_DAT_0777b738);
            return uVar34;
          }
        }
      }
    }
    else if (uStack_258 != 0) {
      lVar22 = *(long *)(uStack_258 + 0x10);
      lVar25 = *(long *)PTR_DAT_07751038;
      *(int *)(uStack_258 + 0x1c) = *(int *)(uStack_258 + 0x1c) + 1;
      if (lVar22 != 0) {
        uVar3 = *(uint *)(uStack_258 + 0x18);
        if (uVar3 < *(uint *)(lVar22 + 0x18)) {
          *(uint *)(uStack_258 + 0x18) = uVar3 + 1;
          puVar21 = (undefined8 *)(lVar22 + (long)(int)uVar3 * 8 + 0x20);
          *puVar21 = puVar13;
          func_0x032809c4(puVar21,puVar13);
        }
        else {
          func_0x0414446c(uStack_258,puVar13,
                          *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
        }
        return uVar34;
      }
    }
  }
  auVar36 = func_0x03280cac();
  pppppppuVar14 = auVar36._8_8_;
  uVar5 = auVar36._0_8_;
  lVar22 = tpidr_el0;
  lStack_2c8 = *(long *)(lVar22 + 0x28);
  pppppppuStack_2d0 = pppppppuVar14;
  puVar19 = (ulong *)puVar18[7];
  puVar13 = puVar18;
  if (puVar19 == (ulong *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b738);
    func_0x03280a18(PTR_DAT_07751038);
    func_0x03280a18(PTR_DAT_07751030);
    func_0x03280a18(PTR_DAT_07751028);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar19 = (ulong *)puVar18[7];
    if (puVar19 == (ulong *)0x0) {
      func_0x03256878(puVar18);
      puVar19 = (ulong *)puVar18[7];
    }
  }
  puVar33 = (ulong *)(ulong)*(uint *)(puVar19[1] + 0xfc);
  lVar25 = -((long)puVar33 + 0xfU & 0x1fffffff0);
  puVar32 = auStack_2e0 + lVar25;
  puStack_2d8 = (ulong *)0x0;
  uVar30 = *puVar19;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar34 = func_0x057a51c4(uVar30,0);
  puVar19 = puVar18;
  if (*(long *)(uVar5 + 0x10) == 0) {
LAB_03ec38b8:
    func_0x03280cac();
  }
  else {
    uVar20 = *(ulong *)PTR_DAT_0777b730;
    uVar30 = func_0x04fe48b0(*(long *)(uVar5 + 0x10),uVar34,&puStack_2d8);
    puVar19 = puStack_2d8;
    puVar13 = puVar33;
    if ((uVar30 & 1) == 0) {
      uVar31 = *(ulong *)(uVar5 + 0x10);
      puVar12 = (ulong *)func_0x03280ca0(*(undefined8 *)PTR_DAT_07751028);
      func_0x04143c38(puVar12,*(undefined8 *)PTR_DAT_07751030);
      puVar19 = (ulong *)puVar18[7];
      pppppppuVar1 = pppppppuVar14;
      if (-1 < *(int *)(puVar19[1] + 0x28)) {
        pppppppuVar1 = &pppppppuStack_2d0;
      }
      func_0x072ce970(puVar32,pppppppuVar1);
      uVar29 = func_0x03280b94(puVar19[1],puVar32);
      uVar30 = uVar34;
      if (puVar12 != (ulong *)0x0) {
        uVar23 = puVar12[2];
        lVar26 = *(long *)PTR_DAT_07751038;
        *(int *)((long)puVar12 + 0x1c) = *(int *)((long)puVar12 + 0x1c) + 1;
        if (uVar23 != 0) {
          uVar3 = (uint)puVar12[3];
          if (uVar3 < *(uint *)(uVar23 + 0x18)) {
            *(uint *)(puVar12 + 3) = uVar3 + 1;
            *(undefined8 *)(uVar23 + (long)(int)uVar3 * 8 + 0x20) = uVar29;
            func_0x032809c4();
          }
          else {
            puVar13 = *(ulong **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70);
            func_0x0414446c(puVar12);
          }
          if (uVar31 != 0) {
            uVar20 = *(ulong *)PTR_DAT_0777b738;
            puVar13 = puVar12;
            func_0x04fe2d68(uVar31,uVar34);
            goto LAB_03ec3884;
          }
        }
      }
      goto LAB_03ec38b8;
    }
    uVar34 = puVar18[7];
    pppppppuVar1 = pppppppuVar14;
    if (-1 < *(int *)(*(long *)(uVar34 + 8) + 0x28)) {
      pppppppuVar1 = &pppppppuStack_2d0;
    }
    func_0x072ce970(puVar32,pppppppuVar1);
    uVar29 = func_0x03280b94(*(undefined8 *)(uVar34 + 8),puVar32);
    uVar30 = uVar34;
    if (puVar19 == (ulong *)0x0) goto LAB_03ec38b8;
    uVar23 = puVar19[2];
    lVar26 = *(long *)PTR_DAT_07751038;
    *(int *)((long)puVar19 + 0x1c) = *(int *)((long)puVar19 + 0x1c) + 1;
    if (uVar23 == 0) goto LAB_03ec38b8;
    uVar3 = (uint)puVar19[3];
    if (uVar3 < *(uint *)(uVar23 + 0x18)) {
      *(uint *)(puVar19 + 3) = uVar3 + 1;
      *(undefined8 *)(uVar23 + (long)(int)uVar3 * 8 + 0x20) = uVar29;
      func_0x032809c4();
    }
    else {
      puVar13 = *(ulong **)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70);
      func_0x0414446c(puVar19);
    }
LAB_03ec3884:
    uVar30 = uVar34;
    if (*(long *)(lVar22 + 0x28) == lStack_2c8) {
      return uVar5;
    }
  }
  auVar36 = func_0x072ce990();
  *(undefined8 *)((long)auStack_348 + lVar25 + 0x38) = 0x3ec38c0;
  *(ulong *)((long)auStack_308 + lVar25 + 8) = uVar30;
  *(ulong **)((long)auStack_308 + lVar25 + 0x10) = puVar19;
  *(undefined8 ********)((long)auStack_308 + lVar25 + 0x18) = pppppppuVar14;
  *(ulong *)((long)auStack_308 + lVar25 + 0x20) = uVar5;
  *(undefined8 *)((long)auStack_308 + lVar25) = 0;
  uVar5 = puVar13[4];
  puVar19 = puVar13;
  if ((*(byte *)(uVar5 + 0x135) & 1) == 0) {
    uVar5 = func_0x0325681c(uVar5);
  }
  lVar26 = *(long *)(*(long *)(uVar5 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  if (*(int *)(lVar26 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar5 = puVar13[4];
  if ((*(byte *)(uVar5 + 0x135) & 1) == 0) {
    uVar5 = func_0x0325681c();
  }
  lVar26 = *(long *)(*(long *)(uVar5 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = **(long **)(lVar26 + 0xb8);
  if (lVar26 != 0) {
    uVar5 = puVar13[4];
    if ((*(byte *)(uVar5 + 0x135) & 1) == 0) {
      uVar5 = func_0x0325681c();
    }
    puVar19 = *(ulong **)(*(long *)(uVar5 + 0xc0) + 0x18);
    uVar5 = func_0x04e81584(lVar26,(long)auStack_308 + lVar25);
    if ((uVar5 & 1) == 0) {
      uVar5 = puVar13[4];
      if ((*(byte *)(uVar5 + 0x135) & 1) == 0) {
        uVar5 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(uVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar5 = func_0x03280ca0();
      uVar30 = puVar13[4];
      if ((*(byte *)(uVar30 + 0x135) & 1) == 0) {
        uVar30 = func_0x0325681c(uVar30);
      }
      func_0x04645340(uVar5,*(undefined8 *)(*(long *)(uVar30 + 0xc0) + 0x38));
      puVar13 = (ulong *)0x0;
      if (uVar5 != 0) {
        *(undefined1 (*) [16])(uVar5 + 0x10) = auVar36;
        func_0x032809c4((undefined1 (*) [16])(uVar5 + 0x10),0);
        return uVar5;
      }
    }
    else if (*(long *)((long)auStack_308 + lVar25) != 0) {
      pauVar6 = (undefined1 (*) [16])(*(long *)((long)auStack_308 + lVar25) + 0x10);
      *pauVar6 = auVar36;
      func_0x032809c4(pauVar6,0);
      return *(ulong *)((long)auStack_308 + lVar25);
    }
  }
  auVar37 = func_0x03280cac();
  uVar11 = auVar37._8_8_;
  uVar29 = auVar37._0_8_;
  *(undefined8 *)((long)auStack_348 + lVar25 + 8) = 0x3ec3a10;
  *(undefined1 **)((long)auStack_348 + lVar25 + 0x10) = puVar32;
  *(long *)((long)auStack_348 + lVar25 + 0x18) = lVar26;
  *(ulong **)((long)auStack_348 + lVar25 + 0x20) = puVar13;
  *(long *)((long)auStack_348 + lVar25 + 0x28) = auVar36._0_8_;
  *(long *)((long)auStack_348 + lVar25 + 0x30) = auVar36._8_8_;
  *(undefined8 *)((long)auStack_348 + lVar25) = 0;
  lVar26 = *(long *)(uVar20 + 0x20);
  puVar13 = puVar19;
  uVar5 = uVar20;
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c(lVar26);
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  if (*(int *)(lVar26 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar26 = *(long *)(uVar20 + 0x20);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = **(long **)(lVar26 + 0xb8);
  if (lVar26 != 0) {
    lVar7 = *(long *)(uVar20 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = func_0x0325681c();
    }
    puVar13 = *(ulong **)(*(long *)(lVar7 + 0xc0) + 0x18);
    uVar30 = func_0x04e81584(lVar26,(long)auStack_348 + lVar25);
    if ((uVar30 & 1) == 0) {
      lVar7 = *(long *)(uVar20 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar30 = func_0x03280ca0();
      lVar7 = *(long *)(uVar20 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = func_0x0325681c(lVar7);
      }
      func_0x046453e4(uVar30,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x40));
      uVar20 = 0;
      if (uVar30 != 0) {
        *(undefined8 *)(uVar30 + 0x10) = uVar29;
        func_0x032809c4((undefined8 *)(uVar30 + 0x10),uVar29);
        *(undefined8 *)(uVar30 + 0x18) = uVar11;
        *(ulong **)(uVar30 + 0x20) = puVar19;
        func_0x032809c4((undefined8 *)(uVar30 + 0x18),0);
        return uVar30;
      }
    }
    else if (*(long *)((long)auStack_348 + lVar25) != 0) {
      puVar21 = (undefined8 *)(*(long *)((long)auStack_348 + lVar25) + 0x10);
      *puVar21 = uVar29;
      func_0x032809c4(puVar21,uVar29);
      lVar7 = *(long *)((long)auStack_348 + lVar25);
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x18) = uVar11;
        *(ulong **)(lVar7 + 0x20) = puVar19;
        func_0x032809c4((undefined8 *)(lVar7 + 0x18),0);
        return *(ulong *)((long)auStack_348 + lVar25);
      }
    }
  }
  auVar36 = func_0x03280cac();
  uVar15 = auVar36._8_8_;
  uVar8 = auVar36._0_8_;
  *(undefined8 *)((long)auStack_388 + lVar25 + 8) = 0x3ec3b90;
  *(long *)((long)auStack_388 + lVar25 + 0x10) = lVar26;
  *(ulong *)((long)auStack_388 + lVar25 + 0x18) = uVar20;
  *(undefined8 *)((long)auStack_388 + lVar25 + 0x20) = uVar29;
  *(undefined8 *)((long)auStack_388 + lVar25 + 0x28) = uVar11;
  *(ulong **)((long)auStack_388 + lVar25 + 0x30) = puVar19;
  *(undefined8 *)((long)auStack_388 + lVar25) = 0;
  lVar26 = *(long *)(uVar5 + 0x20);
  puVar19 = puVar13;
  uVar20 = uVar5;
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c(lVar26);
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  if (*(int *)(lVar26 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar26 = *(long *)(uVar5 + 0x20);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = **(long **)(lVar26 + 0xb8);
  if (lVar26 != 0) {
    lVar7 = *(long *)(uVar5 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = func_0x0325681c();
    }
    puVar19 = *(ulong **)(*(long *)(lVar7 + 0xc0) + 0x18);
    uVar30 = func_0x04e81584(lVar26,(long)auStack_388 + lVar25);
    if ((uVar30 & 1) == 0) {
      lVar7 = *(long *)(uVar5 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar30 = func_0x03280ca0();
      lVar7 = *(long *)(uVar5 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = func_0x0325681c(lVar7);
      }
      func_0x04645488(uVar30,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x40));
      uVar5 = 0;
      if (uVar30 != 0) {
        *(undefined8 *)(uVar30 + 0x10) = uVar8;
        func_0x032809c4((undefined8 *)(uVar30 + 0x10),uVar8);
        *(undefined8 *)(uVar30 + 0x18) = uVar15;
        *(ulong **)(uVar30 + 0x20) = puVar13;
        func_0x032809c4((undefined8 *)(uVar30 + 0x18),0);
        return uVar30;
      }
    }
    else if (*(long *)((long)auStack_388 + lVar25) != 0) {
      puVar21 = (undefined8 *)(*(long *)((long)auStack_388 + lVar25) + 0x10);
      *puVar21 = uVar8;
      func_0x032809c4(puVar21,uVar8);
      lVar7 = *(long *)((long)auStack_388 + lVar25);
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x18) = uVar15;
        *(ulong **)(lVar7 + 0x20) = puVar13;
        func_0x032809c4((undefined8 *)(lVar7 + 0x18),0);
        return *(ulong *)((long)auStack_388 + lVar25);
      }
    }
  }
  auVar36 = func_0x03280cac();
  uVar11 = auVar36._8_8_;
  uVar29 = auVar36._0_8_;
  *(undefined8 *)((long)auStack_408 + lVar25 + 0x38) = 0x3ec3d10;
  *(ulong **)((long)auStack_3c8 + lVar25 + 8) = puVar33;
  *(long *)((long)auStack_3c8 + lVar25 + 0x10) = lVar26;
  *(ulong *)((long)auStack_3c8 + lVar25 + 0x18) = uVar5;
  *(undefined8 *)((long)auStack_3c8 + lVar25 + 0x20) = uVar8;
  *(undefined8 *)((long)auStack_3c8 + lVar25 + 0x28) = uVar15;
  *(ulong **)((long)auStack_3c8 + lVar25 + 0x30) = puVar13;
  *(undefined8 *)((long)auStack_3c8 + lVar25) = 0;
  lVar26 = *(long *)(uVar27 + 0x20);
  puVar13 = puVar19;
  uVar30 = uVar20;
  uVar5 = uVar27;
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c(lVar26);
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  if (*(int *)(lVar26 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar26 = *(long *)(uVar27 + 0x20);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = **(long **)(lVar26 + 0xb8);
  if (lVar26 != 0) {
    lVar7 = *(long *)(uVar27 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = func_0x0325681c();
    }
    puVar13 = *(ulong **)(*(long *)(lVar7 + 0xc0) + 0x18);
    uVar34 = func_0x04e81584(lVar26,(long)auStack_3c8 + lVar25);
    if ((uVar34 & 1) == 0) {
      lVar7 = *(long *)(uVar27 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar34 = func_0x03280ca0();
      lVar7 = *(long *)(uVar27 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = func_0x0325681c(lVar7);
      }
      func_0x04645704(uVar34,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48));
      uVar27 = 0;
      if (uVar34 != 0) {
        *(undefined8 *)(uVar34 + 0x10) = uVar29;
        func_0x032809c4((undefined8 *)(uVar34 + 0x10),uVar29);
        *(undefined8 *)(uVar34 + 0x18) = uVar11;
        *(ulong **)(uVar34 + 0x20) = puVar19;
        func_0x032809c4((undefined8 *)(uVar34 + 0x18),0);
LAB_03ec3e7c:
        *(int *)(uVar34 + 0x28) = (int)uVar20;
        return uVar34;
      }
    }
    else if (*(long *)((long)auStack_3c8 + lVar25) != 0) {
      puVar21 = (undefined8 *)(*(long *)((long)auStack_3c8 + lVar25) + 0x10);
      *puVar21 = uVar29;
      func_0x032809c4(puVar21,uVar29);
      lVar7 = *(long *)((long)auStack_3c8 + lVar25);
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x18) = uVar11;
        *(ulong **)(lVar7 + 0x20) = puVar19;
        func_0x032809c4((undefined8 *)(lVar7 + 0x18),0);
        uVar34 = *(ulong *)((long)auStack_3c8 + lVar25);
        if (uVar34 != 0) goto LAB_03ec3e7c;
        uVar27 = 0;
      }
    }
  }
  auVar36 = func_0x03280cac();
  uVar15 = auVar36._8_8_;
  uVar8 = auVar36._0_8_;
  *(undefined8 *)((long)alStack_468 + lVar25 + 0x58) = 0x3ec3ea0;
  *(long *)((long)auStack_408 + lVar25 + 8) = lVar26;
  *(ulong *)((long)auStack_408 + lVar25 + 0x10) = uVar27;
  *(undefined8 *)((long)auStack_408 + lVar25 + 0x18) = uVar29;
  *(undefined8 *)((long)auStack_408 + lVar25 + 0x20) = uVar11;
  *(ulong **)((long)auStack_408 + lVar25 + 0x28) = puVar19;
  *(ulong *)((long)auStack_408 + lVar25 + 0x30) = uVar20 & 0xffffffff;
  *(undefined8 *)((long)auStack_408 + lVar25) = 0;
  lVar26 = *(long *)(uVar5 + 0x20);
  puVar19 = puVar13;
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c(lVar26);
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  if (*(int *)(lVar26 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  lVar26 = *(long *)(uVar5 + 0x20);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = *(long *)(*(long *)(lVar26 + 0xc0) + 0x10);
  if ((*(byte *)(lVar26 + 0x135) & 1) == 0) {
    lVar26 = func_0x0325681c();
  }
  lVar26 = **(long **)(lVar26 + 0xb8);
  if (lVar26 != 0) {
    lVar7 = *(long *)(uVar5 + 0x20);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = func_0x0325681c();
    }
    puVar19 = *(ulong **)(*(long *)(lVar7 + 0xc0) + 0x18);
    uVar20 = func_0x04e81584(lVar26,(long)auStack_408 + lVar25);
    if ((uVar20 & 1) == 0) {
      lVar7 = *(long *)(uVar5 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = func_0x0325681c();
      }
      if ((*(byte *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
        func_0x0325681c();
      }
      uVar20 = func_0x03280ca0();
      lVar7 = *(long *)(uVar5 + 0x20);
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = func_0x0325681c(lVar7);
      }
      func_0x046457b8(uVar20,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x48));
      uVar5 = 0;
      if (uVar20 != 0) {
        *(undefined8 *)(uVar20 + 0x10) = uVar8;
        func_0x032809c4((undefined8 *)(uVar20 + 0x10),uVar8);
        *(undefined8 *)(uVar20 + 0x18) = uVar15;
        *(ulong **)(uVar20 + 0x20) = puVar13;
        func_0x032809c4((undefined8 *)(uVar20 + 0x18),0);
LAB_03ec400c:
        *(int *)(uVar20 + 0x28) = (int)uVar30;
        return uVar20;
      }
    }
    else if (*(long *)((long)auStack_408 + lVar25) != 0) {
      puVar21 = (undefined8 *)(*(long *)((long)auStack_408 + lVar25) + 0x10);
      *puVar21 = uVar8;
      func_0x032809c4(puVar21,uVar8);
      lVar7 = *(long *)((long)auStack_408 + lVar25);
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x18) = uVar15;
        *(ulong **)(lVar7 + 0x20) = puVar13;
        func_0x032809c4((undefined8 *)(lVar7 + 0x18),0);
        uVar20 = *(ulong *)((long)auStack_408 + lVar25);
        if (uVar20 != 0) goto LAB_03ec400c;
        uVar5 = 0;
      }
    }
  }
  auVar36 = func_0x03280cac();
  plVar10 = auVar36._8_8_;
  uVar20 = auVar36._0_8_;
  *(undefined1 **)(auStack_470 + lVar25) = &stack0xfffffffffffffd40;
  *(undefined8 *)((long)alStack_468 + lVar25) = 0x3ec4030;
  *(long *)((long)alStack_468 + lVar25 + 8) = lVar22;
  *(ulong **)((long)alStack_468 + lVar25 + 0x18) = puVar12;
  *(ulong *)((long)alStack_468 + lVar25 + 0x20) = uVar31;
  *(long *)((long)alStack_468 + lVar25 + 0x28) = lVar26;
  *(ulong *)((long)alStack_468 + lVar25 + 0x30) = uVar5;
  *(undefined8 *)((long)alStack_468 + lVar25 + 0x38) = uVar8;
  *(undefined8 *)((long)alStack_468 + lVar25 + 0x40) = uVar15;
  *(ulong **)((long)alStack_468 + lVar25 + 0x48) = puVar13;
  *(ulong *)((long)alStack_468 + lVar25 + 0x50) = uVar30 & 0xffffffff;
  lVar22 = tpidr_el0;
  *(undefined8 *)((long)&lStack_478 + lVar25) = *(undefined8 *)(lVar22 + 0x28);
  plVar35 = (long *)puVar19[7];
  if (plVar35 == (long *)0x0) {
    func_0x03280a18(PTR_DAT_0774e8c8);
    func_0x03280a18(PTR_DAT_0774e8e0);
    plVar35 = (long *)puVar19[7];
    if (plVar35 == (long *)0x0) {
      func_0x03256878(puVar19);
      plVar35 = (long *)puVar19[7];
    }
  }
  uVar31 = (ulong)*(uint *)(plVar35[4] + 0xfc);
  uVar27 = uVar31 + 0xf & 0x1fffffff0;
  lVar26 = (long)&uStack_490 + (lVar25 - uVar27);
  puVar21 = (undefined8 *)(lVar26 - uVar27);
  lVar7 = (long)puVar21 - uVar27;
  func_0x072ce9a0(lVar7,0,uVar31);
  if (plVar10 == (long *)0x0) {
    func_0x03280cac();
    plVar10 = (long *)0x0;
  }
  else {
    lVar16 = *plVar35;
    if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = func_0x0325681c(lVar16);
    }
    lVar24 = *plVar10;
    uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar27 != 0) {
      piVar28 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar28 + -2) == lVar16) {
          puVar9 = (undefined8 *)(lVar24 + (long)*piVar28 * 0x10 + 0x138);
          goto LAB_03ec4144;
        }
        uVar27 = uVar27 - 1;
        piVar28 = piVar28 + 4;
      } while (uVar27 != 0);
    }
    puVar9 = (undefined8 *)func_0x03256b10(plVar10,lVar16,0);
LAB_03ec4144:
    plVar10 = (long *)(*(code *)*puVar9)(plVar10,puVar9[1]);
    puVar4 = PTR_DAT_0774e8e0;
    if (plVar10 != (long *)0x0) {
      do {
        lVar16 = *plVar10;
        uVar27 = (ulong)*(ushort *)(lVar16 + 0x12e);
        if (uVar27 != 0) {
          piVar28 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == *(long *)puVar4) {
              puVar9 = (undefined8 *)(lVar16 + (long)*piVar28 * 0x10 + 0x138);
              goto LAB_03ec41ac;
            }
            uVar27 = uVar27 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar27 != 0);
        }
        puVar9 = (undefined8 *)func_0x03256b10(plVar10,*(long *)puVar4,0);
LAB_03ec41ac:
        uVar27 = (*(code *)*puVar9)(plVar10,puVar9[1]);
        if ((uVar27 & 1) == 0) {
          puVar19 = (ulong *)0x0;
          goto LAB_03ec429c;
        }
        lVar16 = *(long *)(puVar19[7] + 0x10);
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          lVar16 = func_0x0325681c(lVar16);
        }
        lVar24 = *plVar10;
        uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
        if (uVar27 != 0) {
          piVar28 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
          do {
            if (*(long *)(piVar28 + -2) == lVar16) {
              lVar16 = lVar24 + (long)*piVar28 * 0x10 + 0x138;
              goto LAB_03ec4220;
            }
            uVar27 = uVar27 - 1;
            piVar28 = piVar28 + 4;
          } while (uVar27 != 0);
        }
        lVar16 = func_0x03256b10(plVar10,lVar16,0);
LAB_03ec4220:
        *(long *)((long)&lStack_488 + lVar25) = lVar26;
        lVar16 = *(long *)(lVar16 + 8);
        (**(code **)(lVar16 + 0x10))
                  (*(undefined8 *)(lVar16 + 8),lVar16,plVar10,(long)&lStack_488 + lVar25,lVar26);
        func_0x072ce970(lVar7,lVar26,uVar31);
        func_0x072ce970(puVar21,lVar7,uVar31);
        puVar9 = puVar21;
        if (-1 < *(int *)(*(long *)(puVar19[7] + 0x20) + 0x28)) {
          puVar9 = (undefined8 *)*puVar21;
        }
        puVar17 = *(undefined8 **)(puVar19[7] + 0x28);
        uVar29 = *puVar17;
        *(undefined8 **)((long)&lStack_488 + lVar25) = puVar9;
        (*(code *)puVar17[2])(uVar29,puVar17,uVar20,(long)&lStack_488 + lVar25,auStack_480 + lVar25)
        ;
      } while( true );
    }
  }
  func_0x03280cac();
LAB_03ec4340:
  func_0x03280ca4(puVar19);
  do {
    auVar38 = func_0x072ce990();
    if (auVar38._8_4_ != 1) {
      if (plVar10 == (long *)0x0) goto LAB_03ec43e8;
      lVar22 = *plVar10;
      uVar27 = (ulong)*(ushort *)(lVar22 + 0x12e);
      if (uVar27 == 0) goto LAB_03ec43c0;
      piVar28 = (int *)(*(long *)(lVar22 + 0xb0) + 8);
      break;
    }
    puVar21 = (undefined8 *)func_0x072ce910(auVar38._0_8_);
    puVar19 = (ulong *)*puVar21;
    func_0x072ce920();
LAB_03ec429c:
    if (plVar10 != (long *)0x0) {
      lVar26 = *plVar10;
      uVar27 = (ulong)*(ushort *)(lVar26 + 0x12e);
      if (uVar27 != 0) {
        piVar28 = (int *)(*(long *)(lVar26 + 0xb0) + 8);
        do {
          if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
            puVar21 = (undefined8 *)(lVar26 + (long)*piVar28 * 0x10 + 0x138);
            goto LAB_03ec42f4;
          }
          uVar27 = uVar27 - 1;
          piVar28 = piVar28 + 4;
        } while (uVar27 != 0);
      }
      puVar21 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec42f4:
      (*(code *)*puVar21)(plVar10,puVar21[1]);
    }
    if (puVar19 != (ulong *)0x0) goto LAB_03ec4340;
    if (*(long *)(lVar22 + 0x28) == *(long *)((long)&lStack_478 + lVar25)) {
      return uVar20;
    }
  } while( true );
  while( true ) {
    uVar27 = uVar27 - 1;
    piVar28 = piVar28 + 4;
    if (uVar27 == 0) break;
    if (*(long *)(piVar28 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar21 = (undefined8 *)(lVar22 + (long)*piVar28 * 0x10 + 0x138);
      goto LAB_03ec43dc;
    }
  }
LAB_03ec43c0:
  puVar21 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0774e8c8,0);
LAB_03ec43dc:
  (*(code *)*puVar21)(plVar10,puVar21[1]);
LAB_03ec43e8:
  func_0x03365958(auVar38._0_8_);
  func_0x03280ca4(0);
  auVar36 = func_0x02f09514();
  lVar22 = auVar36._8_8_;
  *(undefined8 *)(lVar7 + -0x20) = 0x3ec4400;
  *(undefined8 *)(lVar7 + -0x18) = 0;
  *(long **)(lVar7 + -0x10) = plVar10;
  *(ulong *)(lVar7 + -8) = uVar20;
  puVar21 = *(undefined8 **)(lVar22 + 0x38);
  if (puVar21 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar21 = *(undefined8 **)(lVar22 + 0x38);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x03256878(lVar22);
      puVar21 = *(undefined8 **)(lVar22 + 0x38);
    }
  }
  *(undefined8 *)(lVar7 + -0x28) = 0;
  uVar29 = *puVar21;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar11 = func_0x057a51c4(uVar29,0);
  lVar25 = *(long *)(auVar36._0_8_ + 0x10);
  if (lVar25 != 0) {
    uVar20 = func_0x04fe48b0(lVar25,uVar11,lVar7 + -0x28,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar20 & 1) == 0) {
      lVar25 = *(long *)(*(long *)(lVar22 + 0x38) + 8);
      lVar22 = *(long *)(lVar25 + 0x38);
      if (lVar22 == 0) {
        func_0x03256878(lVar25);
        lVar22 = *(long *)(lVar25 + 0x38);
      }
      lVar22 = *(long *)(lVar22 + 0x10);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c();
      }
      if (*(int *)(lVar22 + 0xe0) == 0) {
        func_0x03280b8c();
      }
      lVar22 = *(long *)(*(long *)(lVar25 + 0x38) + 0x10);
      if ((*(byte *)(lVar22 + 0x135) & 1) == 0) {
        lVar22 = func_0x0325681c();
      }
      uVar20 = **(ulong **)(lVar22 + 0xb8);
    }
    else {
      uVar20 = func_0x03d2c6a8(*(undefined8 *)(lVar7 + -0x28),
                               *(undefined8 *)(*(long *)(lVar22 + 0x38) + 0x18));
    }
    return uVar20;
  }
  auVar37 = func_0x03280cac();
  lVar22 = auVar37._8_8_;
  *(undefined8 *)(lVar7 + -0x50) = 0x3ec4518;
  *(undefined8 *)(lVar7 + -0x48) = uVar29;
  *(undefined1 (*) [16])(lVar7 + -0x40) = auVar36;
  puVar21 = *(undefined8 **)(lVar22 + 0x38);
  if (puVar21 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar21 = *(undefined8 **)(lVar22 + 0x38);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x03256878(lVar22);
      puVar21 = *(undefined8 **)(lVar22 + 0x38);
    }
  }
  *(undefined8 *)(lVar7 + -0x58) = 0;
  uVar29 = *puVar21;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar29 = func_0x057a51c4(uVar29,0);
  lVar25 = *(long *)(auVar37._0_8_ + 0x10);
  if (lVar25 != 0) {
    uVar20 = func_0x04fe48b0(lVar25,uVar29,lVar7 + -0x58,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar20 & 1) == 0) {
      uVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x38) + 8))();
    }
    else {
      uVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x38) + 0x18))
                         (*(undefined8 *)(lVar7 + -0x58));
    }
    return uVar20;
  }
  auVar36 = func_0x03280cac();
  lVar22 = auVar36._8_8_;
  *(undefined8 *)(lVar7 + -0x80) = 0x3ec45f0;
  *(undefined1 (*) [16])(lVar7 + -0x70) = auVar37;
  puVar21 = *(undefined8 **)(lVar22 + 0x38);
  if (puVar21 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0777b740);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar21 = *(undefined8 **)(lVar22 + 0x38);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x03256878(lVar22);
      puVar21 = *(undefined8 **)(lVar22 + 0x38);
    }
  }
  *(undefined8 *)(lVar7 + -0x78) = 0;
  uVar29 = *puVar21;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar11 = func_0x057a51c4(uVar29,0);
  lVar22 = *(long *)(auVar36._0_8_ + 0x10);
  if (lVar22 != 0) {
    uVar20 = func_0x04fe48b0(lVar22,uVar11,lVar7 + -0x78,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar20 & 1) == 0) {
      return 0;
    }
    lVar22 = *(long *)(lVar7 + -0x78);
    if (lVar22 != 0) {
      iVar2 = *(int *)(lVar22 + 0x18);
      if (iVar2 < 1) {
        return 0;
      }
      *(undefined4 *)(lVar22 + 0x18) = 0;
      *(int *)(lVar22 + 0x1c) = *(int *)(lVar22 + 0x1c) + 1;
      func_0x057b9c7c(*(undefined8 *)(lVar22 + 0x10),0,iVar2,0);
      return 1;
    }
  }
  auVar37 = func_0x03280cac();
  lVar22 = auVar37._8_8_;
  *(undefined8 *)(lVar7 + -0xa0) = 0x3ec46ec;
  *(undefined8 *)(lVar7 + -0x90) = uVar29;
  *(long *)(lVar7 + -0x88) = auVar36._0_8_;
  puVar21 = *(undefined8 **)(lVar22 + 0x38);
  if (puVar21 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar21 = *(undefined8 **)(lVar22 + 0x38);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x03256878(lVar22);
      puVar21 = *(undefined8 **)(lVar22 + 0x38);
    }
  }
  *(undefined8 *)(lVar7 + -0x98) = 0;
  uVar29 = *puVar21;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar11 = func_0x057a51c4(uVar29,0);
  lVar22 = *(long *)(auVar37._0_8_ + 0x10);
  if (lVar22 != 0) {
    uVar20 = func_0x04fe48b0(lVar22,uVar11,lVar7 + -0x98,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar20 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar7 + -0x98) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar7 + -0x98) + 0x18));
    }
  }
  auVar36 = func_0x03280cac();
  lVar22 = auVar36._8_8_;
  *(undefined8 *)(lVar7 + -0xc0) = 0x3ec47bc;
  *(undefined8 *)(lVar7 + -0xb0) = uVar29;
  *(long *)(lVar7 + -0xa8) = auVar37._0_8_;
  puVar21 = *(undefined8 **)(lVar22 + 0x38);
  if (puVar21 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar21 = *(undefined8 **)(lVar22 + 0x38);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x03256878(lVar22);
      puVar21 = *(undefined8 **)(lVar22 + 0x38);
    }
  }
  *(undefined8 *)(lVar7 + -0xb8) = 0;
  uVar29 = *puVar21;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar11 = func_0x057a51c4(uVar29,0);
  lVar22 = *(long *)(auVar36._0_8_ + 0x10);
  if (lVar22 != 0) {
    uVar20 = func_0x04fe48b0(lVar22,uVar11,lVar7 + -0xb8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar20 & 1) == 0) {
      return 0;
    }
    if (*(long *)(lVar7 + -0xb8) != 0) {
      return (ulong)(0 < *(int *)(*(long *)(lVar7 + -0xb8) + 0x18));
    }
  }
  auVar37 = func_0x03280cac();
  lVar22 = auVar37._8_8_;
  *(undefined8 *)(lVar7 + -0xe0) = 0x3ec488c;
  *(undefined8 *)(lVar7 + -0xd0) = uVar29;
  *(long *)(lVar7 + -200) = auVar36._0_8_;
  puVar21 = *(undefined8 **)(lVar22 + 0x38);
  if (puVar21 == (undefined8 *)0x0) {
    func_0x03280a18(PTR_DAT_0777b730);
    func_0x03280a18(PTR_DAT_0776da98);
    func_0x03280a18(PTR_DAT_0774e558);
    puVar21 = *(undefined8 **)(lVar22 + 0x38);
    if (puVar21 == (undefined8 *)0x0) {
      func_0x03256878(lVar22);
      puVar21 = *(undefined8 **)(lVar22 + 0x38);
    }
  }
  *(undefined8 *)(lVar7 + -0xd8) = 0;
  uVar29 = *puVar21;
  if (*(int *)(*(long *)PTR_DAT_0774e558 + 0xe0) == 0) {
    func_0x03280b8c();
  }
  uVar11 = func_0x057a51c4(uVar29,0);
  lVar22 = *(long *)(auVar37._0_8_ + 0x10);
  if (lVar22 != 0) {
    uVar20 = func_0x04fe48b0(lVar22,uVar11,lVar7 + -0xd8,*(undefined8 *)PTR_DAT_0777b730);
    if ((uVar20 & 1) == 0) {
      uVar20 = 0;
    }
    else {
      if (*(long *)(lVar7 + -0xd8) == 0) goto LAB_03ec4958;
      uVar20 = (ulong)(0 < *(int *)(*(long *)(lVar7 + -0xd8) + 0x18));
    }
    return uVar20;
  }
LAB_03ec4958:
  auVar36 = func_0x03280cac();
  lVar22 = auVar36._8_8_;
  *(undefined8 *)(lVar7 + -0x100) = 0x3ec495c;
  *(undefined8 *)(lVar7 + -0xf0) = uVar29;
  *(long *)(lVar7 + -0xe8) = auVar37._0_8_;
  puVar21 = *(undefined8 **)(lVar22 + 0x38);
  if (puVar21 == (undefined8 *)0x0) {
    func_0x03256878(lVar22);
    puVar21 = *(undefined8 **)(lVar22 + 0x38);
  }
  uVar20 = (**(code **)*puVar21)(auVar36._0_8_);
  if ((uVar20 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x03ec49bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar20 = (*(code *)**(undefined8 **)(*(long *)(lVar22 + 0x38) + 8))(auVar36._0_8_);
  return uVar20;
}

