/* Ghidra 12.1.2 bounded pseudocode; RVA 0x628CFE0; bound 1264 bytes; MergeEngine.ECS.Systems.PersistenceSystem.Save; status ok */


void MergeEngine_ECS_Systems_PersistenceSystem__Save(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long *plVar14;
  undefined8 unaff_x21;
  int iVar15;
  undefined8 unaff_x22;
  long unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar16 [12];
  undefined1 auVar17 [16];
  
  do {
    *(undefined **)((long)register0x00000008 + -0x60) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -0x58) = unaff_x30;
    *(undefined **)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined **)((long)register0x00000008 + -0x48) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x26;
    *(undefined **)((long)register0x00000008 + -0x38) = unaff_x25;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
    if ((bRam0000000007e25517 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077e76f8);
      func_0x03280a18(PTR_DAT_077e7758);
      func_0x03280a18(PTR_DAT_077e7760);
      func_0x03280a18(PTR_DAT_0775ad78);
      func_0x03280a18(PTR_DAT_0775ad80);
      func_0x03280a18(PTR_DAT_0775ad88);
      func_0x03280a18(PTR_DAT_0776f478);
      func_0x03280a18(PTR_DAT_0775ad90);
      func_0x03280a18(PTR_DAT_0776f140);
      func_0x03280a18(PTR_DAT_077e7768);
      func_0x03280a18(PTR_DAT_0777aca0);
      func_0x03280a18(PTR_DAT_077e7770);
      func_0x03280a18(PTR_DAT_077e7778);
      func_0x03280a18(PTR_DAT_0774eeb0);
      func_0x03280a18(PTR_DAT_077e7780);
      bRam0000000007e25517 = 1;
    }
    puVar1 = PTR_DAT_0777aca0;
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    plVar14 = (long *)param_1[8];
    plVar10 = param_1;
    if (plVar14 != (long *)0x0) {
      lVar11 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0777aca0) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0638d12c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_0777aca0,0);
LAB_0638d12c:
      uVar12 = (*(code *)*puVar5)(plVar14,puVar5[1]);
      if ((uVar12 & 1) == 0) {
        return;
      }
      lVar11 = param_1[0xf];
      if (lVar11 != 0) {
        if (*(int *)(lVar11 + 0x20) == 0) {
          return;
        }
        uVar6 = func_0x055f8a38(*(undefined8 *)PTR_DAT_0774eeb0,lVar11,0);
        uVar6 = func_0x055ea7a0(*(undefined8 *)PTR_DAT_077e7780,uVar6,0);
        if (*(int *)(*(long *)PTR_DAT_077e7778 + 0xe0) == 0) {
          func_0x03280b8c(*(long *)PTR_DAT_077e7778);
        }
        func_0x069cfb18(uVar6,0);
        plVar14 = (long *)param_1[8];
        if (plVar14 != (long *)0x0) {
          lVar11 = *plVar14;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
                puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0xb) * 0x10 + 0x138);
                goto LAB_0638d200;
              }
              uVar12 = uVar12 - 1;
              piVar13 = piVar13 + 4;
            } while (uVar12 != 0);
          }
          puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)puVar1,0xb);
LAB_0638d200:
          (*(code *)*puVar5)(plVar14,puVar5[1]);
          if (param_1[0xf] != 0) {
            func_0x053c09a8((undefined1 *)((long)register0x00000008 + -0x98),param_1[0xf],
                            *(undefined8 *)PTR_DAT_0775ad90);
            unaff_x26 = PTR_DAT_077e7770;
            unaff_x24 = PTR_DAT_077e7768;
            unaff_x29 = PTR_DAT_077e7760;
            unaff_x28 = PTR_DAT_077e7758;
            unaff_x27 = PTR_DAT_077e76f8;
            unaff_x25 = PTR_DAT_0775ad80;
            *(undefined8 *)((long)register0x00000008 + -0x78) =
                 *(undefined8 *)((long)register0x00000008 + -0x90);
            *(undefined8 *)((long)register0x00000008 + -0x80) =
                 *(undefined8 *)((long)register0x00000008 + -0x98);
            *(undefined8 *)((long)register0x00000008 + -0x70) =
                 *(undefined8 *)((long)register0x00000008 + -0x88);
            while( true ) {
              uVar12 = func_0x05115444((undefined1 *)((long)register0x00000008 + -0x80),
                                       *(undefined8 *)unaff_x25);
              if ((uVar12 & 1) == 0) {
                func_0x05115440((undefined1 *)((long)register0x00000008 + -0x80),
                                *(undefined8 *)PTR_DAT_0775ad78);
                plVar14 = (long *)PTR_DAT_0777aca0;
                goto LAB_0638d37c;
              }
              uVar6 = *(undefined8 *)((long)register0x00000008 + -0x70);
              lVar11 = func_0x03280ca0(*(undefined8 *)unaff_x26);
              func_0x06a05090(lVar11,0);
              if (param_1[0xc] == 0) goto LAB_0638d420;
              lVar7 = func_0x04fe2cfc(param_1[0xc],uVar6,*(undefined8 *)unaff_x27);
              if (lVar7 == 0) goto LAB_0638d424;
              uVar8 = func_0x04fe2bac(lVar7,*(undefined8 *)unaff_x28);
              uVar8 = func_0x03d5ffd0(uVar8,*(undefined8 *)unaff_x29);
              if (lVar11 == 0) break;
              *(undefined8 *)(lVar11 + 0x10) = uVar8;
              func_0x032809c4();
              uVar6 = MergeEngine_ECS_Systems_PersistenceSystem__GetPersistentKey(param_1,uVar6);
              plVar14 = (long *)param_1[8];
              if (plVar14 == (long *)0x0) goto LAB_0638d41c;
              unaff_x23 = *(long *)unaff_x24;
              lVar7 = *plVar14;
              uVar12 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar12 != 0) {
                piVar13 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)(unaff_x23 + 0x20)) {
                    lVar7 = lVar7 + (long)(int)(*piVar13 + (uint)*(ushort *)(unaff_x23 + 0x50)) *
                                    0x10 + 0x138;
                    goto LAB_0638d338;
                  }
                  uVar12 = uVar12 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar12 != 0);
              }
              lVar7 = func_0x03256b10(plVar14);
LAB_0638d338:
              lVar7 = func_0x03280b88(*(undefined8 *)(lVar7 + 8),unaff_x23);
              (**(code **)(lVar7 + 8))(plVar14,uVar6,lVar11,lVar7);
            }
            func_0x03280cac();
LAB_0638d41c:
            func_0x03280cac();
LAB_0638d420:
            func_0x03280cac();
LAB_0638d424:
            func_0x03280cac();
          }
        }
      }
    }
    while( true ) {
      auVar16 = func_0x03280cac();
      plVar14 = (long *)PTR_DAT_0777aca0;
      uVar6 = auVar16._0_8_;
      if (auVar16._8_4_ != 1) break;
      plVar9 = (long *)func_0x072ce910(uVar6);
      lVar11 = *plVar9;
      func_0x072ce920();
      func_0x05115440((undefined1 *)((long)register0x00000008 + -0x80),
                      *(undefined8 *)PTR_DAT_0775ad78);
      if (lVar11 != 0) {
        func_0x03280ca4(lVar11);
        break;
      }
LAB_0638d37c:
      if (plVar10[0xf] != 0) {
        func_0x053c04d4(plVar10[0xf],*(undefined8 *)PTR_DAT_0776f478);
        plVar10 = (long *)plVar10[8];
        if (plVar10 != (long *)0x0) {
          lVar11 = *plVar10;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 == 0) goto LAB_0638d3cc;
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          goto LAB_0638d3b4;
        }
      }
    }
    func_0x05115440((undefined1 *)((long)register0x00000008 + -0x80),*(undefined8 *)PTR_DAT_0775ad78
                   );
    func_0x03365958(uVar6);
    func_0x03280ca4(0);
    param_1 = (long *)func_0x02f09514();
    *(undefined **)((long)register0x00000008 + -0xe0) = &UNK_0638d4d0;
    *(undefined **)((long)register0x00000008 + -0xd0) = unaff_x24;
    *(long *)((long)register0x00000008 + -200) = unaff_x23;
    *(long **)((long)register0x00000008 + -0xc0) = plVar14;
    *(undefined8 *)((long)register0x00000008 + -0xb8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xb0) = uVar6;
    *(long **)((long)register0x00000008 + -0xa8) = plVar10;
    if ((bRam0000000007e25519 & 1) == 0) {
      func_0x03280a18(PTR_DAT_077e7788);
      func_0x03280a18(PTR_DAT_077e76d8);
      func_0x03280a18(PTR_DAT_07752c80);
      func_0x03280a18(PTR_DAT_0774e8c8);
      func_0x03280a18(PTR_DAT_077e7790);
      func_0x03280a18(PTR_DAT_077e7658);
      func_0x03280a18(PTR_DAT_0774e8e0);
      func_0x03280a18(PTR_DAT_077e7650);
      func_0x03280a18(PTR_DAT_077e7798);
      func_0x03280a18(PTR_DAT_077e7630);
      bRam0000000007e25519 = 1;
    }
    puVar1 = PTR_DAT_077e7630;
    if ((char)param_1[6] == '\0') {
      return;
    }
    plVar10 = (long *)func_0x03eb6ac8(param_1,*(undefined8 *)PTR_DAT_077e7650);
    lVar11 = *(long *)puVar1;
    if (*(int *)(lVar11 + 0xe0) == 0) {
      func_0x03280b8c(lVar11);
      lVar11 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_077e7788;
    lVar7 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
    if (lVar7 == 0) {
      if (*(int *)(lVar11 + 0xe0) == 0) {
        func_0x03280b8c(lVar11);
        lVar11 = *(long *)puVar1;
      }
      uVar6 = **(undefined8 **)(lVar11 + 0xb8);
      lVar7 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077e76d8);
      func_0x05355fbc(lVar7,uVar6,*(undefined8 *)PTR_DAT_077e7798,0);
      plVar14 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      *plVar14 = lVar7;
      func_0x032809c4(plVar14,lVar7);
    }
    plVar14 = (long *)func_0x03d872a8(plVar10,lVar7,*(undefined8 *)puVar2);
    if (plVar14 == (long *)0x0) {
code_r0x0638d84c:
      func_0x03280cac();
    }
    else {
      lVar11 = *plVar14;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_077e7790) {
            puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
            goto code_r0x0638d68c;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)func_0x03256b10(plVar14,*(long *)PTR_DAT_077e7790,0);
code_r0x0638d68c:
      plVar10 = (long *)(*(code *)*puVar5)(plVar14,puVar5[1]);
      puVar3 = PTR_DAT_077e7658;
      puVar2 = PTR_DAT_07752c80;
      puVar1 = PTR_DAT_0774e8e0;
      if (plVar10 != (long *)0x0) {
code_r0x0638d6b8:
        lVar11 = *plVar10;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar1) {
              puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x0638d704;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar10,*(long *)puVar1,0);
code_r0x0638d704:
        uVar12 = (*(code *)*puVar5)(plVar10,puVar5[1]);
        if ((uVar12 & 1) == 0) {
          lVar7 = 0;
          iVar15 = 6;
          iVar4 = 6;
          if (plVar10 == (long *)0x0) goto code_r0x0638d808;
          goto code_r0x0638d7a8;
        }
        lVar11 = *plVar10;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)puVar3) {
              puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x0638d760;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar10,*(long *)puVar3,0);
code_r0x0638d760:
        lVar7 = (*(code *)*puVar5)(plVar10,puVar5[1]);
        func_0x0638cd34(param_1,lVar7);
        if (lVar7 != 0) {
          *(undefined1 *)(lVar7 + 0x28) = 0;
          if (param_1[0xf] == 0) goto code_r0x0638d848;
          func_0x053c1024(param_1[0xf],*(undefined8 *)(lVar7 + 0x30),*(undefined8 *)puVar2);
          goto code_r0x0638d6b8;
        }
        func_0x03280cac();
code_r0x0638d848:
        func_0x03280cac();
        goto code_r0x0638d84c;
      }
    }
    func_0x03280cac();
    do {
      auVar16 = func_0x03280ca4(lVar7);
      if (auVar16._8_4_ != 1) {
        if (plVar10 == (long *)0x0) goto code_r0x0638d908;
        lVar11 = *plVar10;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 == 0) goto code_r0x0638d8e0;
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        goto code_r0x0638d8c8;
      }
      plVar14 = (long *)func_0x072ce910();
      lVar7 = *plVar14;
      func_0x072ce920();
      iVar15 = 0;
      iVar4 = 0;
      if (plVar10 != (long *)0x0) {
code_r0x0638d7a8:
        iVar15 = iVar4;
        lVar11 = *plVar10;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto code_r0x0638d7fc;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0774e8c8,0);
code_r0x0638d7fc:
        (*(code *)*puVar5)(plVar10,puVar5[1]);
      }
code_r0x0638d808:
    } while (lVar7 != 0);
    if ((iVar15 != 6) && (iVar15 != 0)) {
      return;
    }
    unaff_x20 = *(undefined8 *)((long)register0x00000008 + -0xb0);
    unaff_x19 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x22 = *(undefined8 *)((long)register0x00000008 + -0xc0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xb8);
    unaff_x24 = *(undefined **)((long)register0x00000008 + -0xd0);
    unaff_x23 = *(long *)((long)register0x00000008 + -200);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0xe0);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
  } while( true );
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
code_r0x0638d8c8:
    if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar5 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
      goto code_r0x0638d8fc;
    }
  }
code_r0x0638d8e0:
  puVar5 = (undefined8 *)func_0x03256b10(plVar10,*(long *)PTR_DAT_0774e8c8,0);
code_r0x0638d8fc:
  (*(code *)*puVar5)(plVar10,puVar5[1]);
code_r0x0638d908:
  func_0x03365958(auVar16._0_8_);
  func_0x03280ca4(0);
  auVar17 = func_0x02f09514();
  lVar11 = auVar17._0_8_;
  *(undefined **)((long)register0x00000008 + -0xf0) = &UNK_0638d920;
  *(long *)((long)register0x00000008 + -0xe8) = auVar16._0_8_;
  *(long *)(lVar11 + 0x88) = auVar17._8_8_;
  func_0x032809c4();
  MergeEngine_ECS_Systems_PersistenceSystem__CreateSerializationCache(lVar11);
  lVar11 = *(long *)(lVar11 + 0x90);
  if (lVar11 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0638d950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar11 + 0x18))(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar11 + 0x28));
  return;
  while( true ) {
    uVar12 = uVar12 - 1;
    piVar13 = piVar13 + 4;
    if (uVar12 == 0) break;
LAB_0638d3b4:
    if (*(long *)(piVar13 + -2) == *plVar14) {
      puVar5 = (undefined8 *)(lVar11 + (long)(*piVar13 + 0xc) * 0x10 + 0x138);
      goto LAB_0638d3ec;
    }
  }
LAB_0638d3cc:
  puVar5 = (undefined8 *)func_0x03256b10(plVar10,*plVar14,0xc);
LAB_0638d3ec:
  (*(code *)*puVar5)(plVar10,puVar5[1]);
  return;
}

