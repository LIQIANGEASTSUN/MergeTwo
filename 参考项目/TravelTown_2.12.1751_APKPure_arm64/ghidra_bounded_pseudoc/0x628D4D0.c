/* Ghidra 12.1.2 bounded pseudocode; RVA 0x628D4D0; bound 1104 bytes; MergeEngine.ECS.Systems.PersistenceSystem.SerializeAndSave; status ok */


void MergeEngine_ECS_Systems_PersistenceSystem__SerializeAndSave(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  long lVar12;
  int iVar13;
  long *unaff_x22;
  undefined8 uVar14;
  long unaff_x23;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *unaff_x28;
  undefined *unaff_x29;
  code *unaff_x30;
  undefined1 auVar15 [12];
  undefined1 auVar16 [16];
  
  do {
    *(code **)((long)register0x00000008 + -0x40) = unaff_x30;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x23;
    *(long **)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(long **)((long)register0x00000008 + -8) = unaff_x19;
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
    plVar6 = (long *)func_0x03eb6ac8(param_1,*(undefined8 *)PTR_DAT_077e7650);
    lVar9 = *(long *)puVar1;
    if (*(int *)(lVar9 + 0xe0) == 0) {
      func_0x03280b8c(lVar9);
      lVar9 = *(long *)puVar1;
    }
    puVar2 = PTR_DAT_077e7788;
    lVar12 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
    if (lVar12 == 0) {
      if (*(int *)(lVar9 + 0xe0) == 0) {
        func_0x03280b8c(lVar9);
        lVar9 = *(long *)puVar1;
      }
      uVar14 = **(undefined8 **)(lVar9 + 0xb8);
      lVar12 = func_0x03280ca0(*(undefined8 *)PTR_DAT_077e76d8);
      func_0x05355fbc(lVar12,uVar14,*(undefined8 *)PTR_DAT_077e7798,0);
      plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
      *plVar7 = lVar12;
      func_0x032809c4(plVar7,lVar12);
    }
    plVar7 = (long *)func_0x03d872a8(plVar6,lVar12,*(undefined8 *)puVar2);
    if (plVar7 == (long *)0x0) {
LAB_0638d84c:
      func_0x03280cac();
    }
    else {
      lVar9 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_077e7790) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0638d68c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(plVar7,*(long *)PTR_DAT_077e7790,0);
LAB_0638d68c:
      plVar6 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      puVar3 = PTR_DAT_077e7658;
      puVar2 = PTR_DAT_07752c80;
      puVar1 = PTR_DAT_0774e8e0;
      if (plVar6 != (long *)0x0) {
LAB_0638d6b8:
        lVar9 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0638d704;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar1,0);
LAB_0638d704:
        uVar10 = (*(code *)*puVar8)(plVar6,puVar8[1]);
        if ((uVar10 & 1) == 0) {
          lVar12 = 0;
          iVar13 = 6;
          iVar4 = 6;
          if (plVar6 == (long *)0x0) goto LAB_0638d808;
          goto LAB_0638d7a8;
        }
        lVar9 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0638d760;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar3,0);
LAB_0638d760:
        lVar12 = (*(code *)*puVar8)(plVar6,puVar8[1]);
        func_0x0638cd34(param_1,lVar12);
        if (lVar12 != 0) {
          *(undefined1 *)(lVar12 + 0x28) = 0;
          if (param_1[0xf] == 0) goto LAB_0638d848;
          func_0x053c1024(param_1[0xf],*(undefined8 *)(lVar12 + 0x30),*(undefined8 *)puVar2);
          goto LAB_0638d6b8;
        }
        func_0x03280cac();
LAB_0638d848:
        func_0x03280cac();
        goto LAB_0638d84c;
      }
    }
    func_0x03280cac();
    do {
      auVar15 = func_0x03280ca4(lVar12);
      if (auVar15._8_4_ != 1) {
        if (plVar6 == (long *)0x0) goto LAB_0638d908;
        lVar9 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 == 0) goto LAB_0638d8e0;
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        goto LAB_0638d8c8;
      }
      plVar7 = (long *)func_0x072ce910();
      lVar12 = *plVar7;
      func_0x072ce920();
      iVar13 = 0;
      iVar4 = 0;
      if (plVar6 != (long *)0x0) {
LAB_0638d7a8:
        iVar13 = iVar4;
        lVar9 = *plVar6;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0774e8c8) {
              puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0638d7fc;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar8 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_0774e8c8,0);
LAB_0638d7fc:
        (*(code *)*puVar8)(plVar6,puVar8[1]);
      }
LAB_0638d808:
    } while (lVar12 != 0);
    if ((iVar13 != 6) && (iVar13 != 0)) {
      return;
    }
    unaff_x24 = *(undefined **)((long)register0x00000008 + -0x30);
    unaff_x23 = *(long *)((long)register0x00000008 + -0x28);
    *(undefined **)((long)register0x00000008 + -0x60) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)((long)register0x00000008 + -0x40);
    *(undefined **)((long)register0x00000008 + -0x50) = unaff_x28;
    *(undefined **)((long)register0x00000008 + -0x48) = unaff_x27;
    *(undefined **)((long)register0x00000008 + -0x40) = unaff_x26;
    *(undefined **)((long)register0x00000008 + -0x38) = unaff_x25;
    *(undefined **)((long)register0x00000008 + -0x30) = unaff_x24;
    *(long *)((long)register0x00000008 + -0x28) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x20) =
         *(undefined8 *)((long)register0x00000008 + -0x20);
    *(undefined8 *)((long)register0x00000008 + -0x18) =
         *(undefined8 *)((long)register0x00000008 + -0x18);
    *(undefined8 *)((long)register0x00000008 + -0x10) =
         *(undefined8 *)((long)register0x00000008 + -0x10);
    *(undefined8 *)((long)register0x00000008 + -8) = *(undefined8 *)((long)register0x00000008 + -8);
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
    plVar6 = (long *)param_1[8];
    unaff_x19 = param_1;
    if (plVar6 != (long *)0x0) {
      lVar9 = *plVar6;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0777aca0) {
            puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0638d12c;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_0777aca0,0);
LAB_0638d12c:
      uVar10 = (*(code *)*puVar8)(plVar6,puVar8[1]);
      if ((uVar10 & 1) == 0) {
        return;
      }
      lVar9 = param_1[0xf];
      if (lVar9 != 0) {
        if (*(int *)(lVar9 + 0x20) == 0) {
          return;
        }
        uVar14 = func_0x055f8a38(*(undefined8 *)PTR_DAT_0774eeb0,lVar9,0);
        uVar14 = func_0x055ea7a0(*(undefined8 *)PTR_DAT_077e7780,uVar14,0);
        if (*(int *)(*(long *)PTR_DAT_077e7778 + 0xe0) == 0) {
          func_0x03280b8c(*(long *)PTR_DAT_077e7778);
        }
        func_0x069cfb18(uVar14,0);
        plVar6 = (long *)param_1[8];
        if (plVar6 != (long *)0x0) {
          lVar9 = *plVar6;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *(long *)puVar1) {
                puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xb) * 0x10 + 0x138);
                goto LAB_0638d200;
              }
              uVar10 = uVar10 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar10 != 0);
          }
          puVar8 = (undefined8 *)func_0x03256b10(plVar6,*(long *)puVar1,0xb);
LAB_0638d200:
          (*(code *)*puVar8)(plVar6,puVar8[1]);
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
              uVar10 = func_0x05115444((undefined1 *)((long)register0x00000008 + -0x80),
                                       *(undefined8 *)unaff_x25);
              if ((uVar10 & 1) == 0) {
                func_0x05115440((undefined1 *)((long)register0x00000008 + -0x80),
                                *(undefined8 *)PTR_DAT_0775ad78);
                unaff_x22 = (long *)PTR_DAT_0777aca0;
                goto LAB_0638d37c;
              }
              uVar14 = *(undefined8 *)((long)register0x00000008 + -0x70);
              lVar9 = func_0x03280ca0(*(undefined8 *)unaff_x26);
              func_0x06a05090(lVar9,0);
              if (param_1[0xc] == 0) goto LAB_0638d420;
              lVar12 = func_0x04fe2cfc(param_1[0xc],uVar14,*(undefined8 *)unaff_x27);
              if (lVar12 == 0) goto LAB_0638d424;
              uVar5 = func_0x04fe2bac(lVar12,*(undefined8 *)unaff_x28);
              uVar5 = func_0x03d5ffd0(uVar5,*(undefined8 *)unaff_x29);
              if (lVar9 == 0) break;
              *(undefined8 *)(lVar9 + 0x10) = uVar5;
              func_0x032809c4();
              uVar14 = MergeEngine_ECS_Systems_PersistenceSystem__GetPersistentKey(param_1,uVar14);
              plVar6 = (long *)param_1[8];
              if (plVar6 == (long *)0x0) goto LAB_0638d41c;
              unaff_x23 = *(long *)unaff_x24;
              lVar12 = *plVar6;
              uVar10 = (ulong)*(ushort *)(lVar12 + 0x12e);
              if (uVar10 != 0) {
                piVar11 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *(long *)(unaff_x23 + 0x20)) {
                    lVar12 = lVar12 + (long)(int)(*piVar11 + (uint)*(ushort *)(unaff_x23 + 0x50)) *
                                      0x10 + 0x138;
                    goto LAB_0638d338;
                  }
                  uVar10 = uVar10 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar10 != 0);
              }
              lVar12 = func_0x03256b10(plVar6);
LAB_0638d338:
              lVar12 = func_0x03280b88(*(undefined8 *)(lVar12 + 8),unaff_x23);
              (**(code **)(lVar12 + 8))(plVar6,uVar14,lVar9,lVar12);
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
      auVar15 = func_0x03280cac();
      unaff_x22 = (long *)PTR_DAT_0777aca0;
      unaff_x20 = auVar15._0_8_;
      if (auVar15._8_4_ != 1) break;
      plVar6 = (long *)func_0x072ce910(unaff_x20);
      lVar9 = *plVar6;
      func_0x072ce920();
      func_0x05115440((undefined1 *)((long)register0x00000008 + -0x80),
                      *(undefined8 *)PTR_DAT_0775ad78);
      if (lVar9 != 0) {
        func_0x03280ca4(lVar9);
        break;
      }
LAB_0638d37c:
      if (unaff_x19[0xf] != 0) {
        func_0x053c04d4(unaff_x19[0xf],*(undefined8 *)PTR_DAT_0776f478);
        unaff_x19 = (long *)unaff_x19[8];
        if (unaff_x19 != (long *)0x0) {
          lVar9 = *unaff_x19;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_0638d3cc;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_0638d3b4;
        }
      }
    }
    unaff_x21 = 0;
    func_0x05115440((undefined1 *)((long)register0x00000008 + -0x80),*(undefined8 *)PTR_DAT_0775ad78
                   );
    func_0x03365958(unaff_x20);
    func_0x03280ca4(0);
    unaff_x30 = MergeEngine_ECS_Systems_PersistenceSystem__SerializeAndSave;
    param_1 = (long *)func_0x02f09514();
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0xa0);
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0638d8c8:
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_0774e8c8) {
      puVar8 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0638d8fc;
    }
  }
LAB_0638d8e0:
  puVar8 = (undefined8 *)func_0x03256b10(plVar6,*(long *)PTR_DAT_0774e8c8,0);
LAB_0638d8fc:
  (*(code *)*puVar8)(plVar6,puVar8[1]);
LAB_0638d908:
  func_0x03365958(auVar15._0_8_);
  func_0x03280ca4(0);
  auVar16 = func_0x02f09514();
  lVar9 = auVar16._0_8_;
  *(undefined **)((long)register0x00000008 + -0x50) = &UNK_0638d920;
  *(long *)((long)register0x00000008 + -0x48) = auVar15._0_8_;
  *(long *)(lVar9 + 0x88) = auVar16._8_8_;
  func_0x032809c4();
  MergeEngine_ECS_Systems_PersistenceSystem__CreateSerializationCache(lVar9);
  lVar9 = *(long *)(lVar9 + 0x90);
  if (lVar9 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0638d950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(lVar9 + 0x28));
  return;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0638d3b4:
    if (*(long *)(piVar11 + -2) == *unaff_x22) {
      puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xc) * 0x10 + 0x138);
      goto LAB_0638d3ec;
    }
  }
LAB_0638d3cc:
  puVar8 = (undefined8 *)func_0x03256b10(unaff_x19,*unaff_x22,0xc);
LAB_0638d3ec:
  (*(code *)*puVar8)(unaff_x19,puVar8[1]);
  return;
}

