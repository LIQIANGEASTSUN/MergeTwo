
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_032daf88(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  undefined4 uVar12;
  char *pcVar13;
  undefined4 *puVar14;
  int iVar15;
  int unaff_r10;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  undefined8 uVar21;
  uint uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 *puStack_40;
  char *pcStack_3c;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar13 = (char *)(iRam032db978 + 0x32dafa4);
  if (*pcVar13 == '\0') {
    func_0x01438628(*(undefined4 *)(iRam032db97c + 0x32dafb8));
    func_0x01438628(*(undefined4 *)(iRam032db980 + 0x32dafc4));
    func_0x01438628(*(undefined4 *)(iRam032db984 + 0x32dafd0));
    func_0x01438628(*(undefined4 *)(iRam032db988 + 0x32dafdc));
    func_0x01438628(*(undefined4 *)(iRam032db98c + 0x32dafe8));
    func_0x01438628(*(undefined4 *)(iRam032db990 + 0x32daff4));
    func_0x01438628(*(undefined4 *)(iRam032db994 + 0x32db000));
    func_0x01438628(*(undefined4 *)(iRam032db998 + 0x32db00c));
    func_0x01438628(*(undefined4 *)(iRam032db99c + 0x32db018));
    func_0x01438628(*(undefined4 *)(iRam032db9a0 + 0x32db024));
    func_0x01438628(*(undefined4 *)(iRam032db9a4 + 0x32db030));
    func_0x01438628(*(undefined4 *)(iRam032db9a8 + 0x32db03c));
    func_0x01438628(*(undefined4 *)(iRam032db9ac + 0x32db048));
    func_0x01438628(*(undefined4 *)(iRam032db9b0 + 0x32db054));
    *pcVar13 = '\x01';
  }
  iVar2 = func_0x02953fd4(0x17fd,0);
  if (iVar2 == 0) {
    if (*(int *)(**(int **)(iRam032db9b4 + 0x32db0b4) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x04e4a028(**(undefined4 **)(iRam032db9b8 + 0x32db0d0));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar2 = func_0x036c7bec(iVar2,**(undefined4 **)(iRam032db9bc + 0x32db0f0));
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    iVar9 = *(int *)(iVar2 + 0x32c);
    if (iVar9 == 0) {
      func_0x014388e4();
    }
    iVar9 = func_0x04753c80(iVar9,param_2,**(undefined4 **)(iRam032db9c0 + 0x32db128));
    uVar1 = 0;
    if (iVar9 != 0) {
      iVar2 = *(int *)(iVar2 + 0x32c);
      if (iVar2 == 0) {
        func_0x014388e4();
      }
      pcVar13 = (char *)func_0x03b73d40(iVar2,param_2,**(undefined4 **)(iRam032db9c4 + 0x32db15c));
      if (pcVar13 == (char *)0x0) {
        func_0x014388e4();
      }
      iVar9 = *(int *)(pcVar13 + 0x6c);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (*(char *)(iVar9 + 8) != '\0') {
        iVar9 = *(int *)(pcVar13 + 0x6c);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        if (*(char *)(iVar9 + 0x14) == '\0') {
          uVar1 = func_0x014388d4(**(undefined4 **)(iRam032db9c8 + 0x32db1c4));
          func_0x04cfd1b4(uVar1,**(undefined4 **)(iRam032db9cc + 0x32db1d8));
          iVar9 = 0;
          puVar14 = *(undefined4 **)(iRam032db9d0 + 0x32db1f0);
          while( true ) {
            iVar6 = *(int *)(pcVar13 + 0x6c);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            iVar6 = *(int *)(iVar6 + 0xc);
            if (iVar6 == 0) {
              func_0x014388e4();
            }
            if (*(int *)(iVar6 + 0xc) <= iVar9) break;
            iVar7 = *(int *)(pcVar13 + 0x6c);
            iVar6 = iVar7;
            if (iVar7 == 0) {
              func_0x014388e4();
              iVar6 = *(int *)(pcVar13 + 0x6c);
              bVar17 = iVar6 == 0;
              bVar16 = true;
              if (bVar17) {
                uVar21 = func_0x014388e4();
                iVar6 = (int)((ulonglong)uVar21 >> 0x20);
                bVar19 = bVar16;
                if (bVar17) {
                  bVar19 = pcVar13 < "_filename" ||
                           "mono_image_get_filename" + (0xe - (int)pcVar13) < (char *)(uint)bVar16;
                }
                bVar17 = bVar17 && pcVar13 + !bVar16 == "_filename";
                bVar16 = bVar19;
                if (bVar17) {
                  bVar16 = pcVar13 < (char *)0xc000000 || 0xc000000U - (int)pcVar13 < (uint)bVar19;
                }
                bVar17 = bVar17 && pcVar13 + !bVar19 == (char *)0xc000000;
                bVar19 = bVar16;
                if (bVar17) {
                  bVar19 = (uint)-(int)pcVar13 < (uint)bVar16;
                }
                bVar18 = false;
                bVar20 = bVar19;
                if (bVar17 && pcVar13 + !bVar16 == (char *)0x0) {
                  bVar20 = pcVar13 < (char *)0x2e0000 || 0x2e0000U - (int)pcVar13 < (uint)bVar19;
                  uVar1 = 0x2e0000 - (int)(pcVar13 + !bVar19);
                  bVar18 = uVar1 == 0;
                }
                bVar17 = bVar20;
                if (bVar18) {
                  bVar17 = pcVar13 < (char *)0x9800 || 0x9800U - (int)pcVar13 < (uint)bVar20;
                }
                bVar16 = false;
                bVar19 = bVar17;
                if (bVar18 && pcVar13 + !bVar20 == (char *)0x9800) {
                  bVar19 = pcVar13 < (char *)0x60000000 || 0x60000000U - (int)pcVar13 < (uint)bVar17
                  ;
                  uVar1 = 0x60000000 - (int)(pcVar13 + !bVar17);
                  bVar16 = uVar1 == 0;
                }
                bVar17 = false;
                bVar18 = bVar19;
                if (bVar16) {
                  bVar18 = pcVar13 < (char *)0x260000 || 0x260000U - (int)pcVar13 < (uint)bVar19;
                  uVar1 = 0x260000 - (int)(pcVar13 + !bVar19);
                  bVar17 = uVar1 == 0;
                }
                bVar16 = false;
                bVar19 = bVar18;
                if (bVar17) {
                  bVar19 = pcVar13 < (char *)0x4 || 4U - (int)pcVar13 < (uint)bVar18;
                  uVar1 = 4 - (int)(pcVar13 + !bVar18);
                  bVar16 = uVar1 == 0;
                }
                bVar17 = false;
                bVar18 = bVar19;
                if (bVar16) {
                  bVar18 = pcVar13 < (char *)0x80000003 || 0x80000003U - (int)pcVar13 < (uint)bVar19
                  ;
                  uVar1 = 0x80000003 - (int)(pcVar13 + !bVar19);
                  bVar17 = uVar1 == 0;
                }
                bVar16 = bVar18;
                if (bVar17) {
                  bVar16 = pcVar13 < &DAT_06400000 ||
                           (uint)((int)&DAT_06400000 - (int)pcVar13) < (uint)bVar18;
                }
                bVar17 = bVar17 && pcVar13 + !bVar18 == &DAT_06400000;
                bVar19 = bVar16;
                if (bVar17) {
                  bVar19 = pcVar13 < (char *)0xf000 || 0xf000U - (int)pcVar13 < (uint)bVar16;
                }
                bVar17 = bVar17 && pcVar13 + !bVar16 == (char *)0xf000;
                bVar16 = bVar19;
                if (bVar17) {
                  bVar16 = pcVar13 < (char *)0x4800 || 0x4800U - (int)pcVar13 < (uint)bVar19;
                }
                bVar18 = false;
                bVar20 = bVar16;
                if (bVar17 && pcVar13 + !bVar19 == (char *)0x4800) {
                  bVar20 = pcVar13 < (char *)0x74000000 || 0x74000000U - (int)pcVar13 < (uint)bVar16
                  ;
                  uVar1 = 0x74000000 - (int)(pcVar13 + !bVar16);
                  bVar18 = uVar1 == 0;
                }
                bVar17 = false;
                bVar16 = bVar20;
                if (bVar18) {
                  bVar16 = pcVar13 < (char *)0x40000000 || 0x40000000U - (int)pcVar13 < (uint)bVar20
                  ;
                  uVar1 = 0x40000000 - (int)(pcVar13 + !bVar20);
                  bVar17 = uVar1 == 0;
                }
                bVar19 = false;
                bVar18 = bVar16;
                if (bVar17) {
                  bVar18 = pcVar13 < (char *)0x27 || 0x27U - (int)pcVar13 < (uint)bVar16;
                  uVar1 = 0x27 - (int)(pcVar13 + !bVar16);
                  bVar19 = uVar1 == 0;
                }
                bVar17 = false;
                bVar16 = bVar18;
                if (bVar19) {
                  bVar16 = pcVar13 < (char *)0x1f || 0x1fU - (int)pcVar13 < (uint)bVar18;
                  uVar1 = 0x1f - (int)(pcVar13 + !bVar18);
                  bVar17 = uVar1 == 0;
                }
                bVar19 = false;
                bVar18 = bVar16;
                if (bVar17) {
                  bVar18 = pcVar13 < (char *)0x1a || 0x1aU - (int)pcVar13 < (uint)bVar16;
                  uVar1 = 0x1a - (int)(pcVar13 + !bVar16);
                  bVar19 = uVar1 == 0;
                }
                bVar17 = bVar18;
                if (bVar19) {
                  bVar17 = pcVar13 < 
                           "f_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcm" ||
                           "_ZNKSt6__ndk17num_putIcNS_19ostreambuf_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcm"
                           + (0x25 - (int)pcVar13) < (char *)(uint)bVar18;
                }
                bVar19 = bVar19 && pcVar13 + !bVar18 ==
                                   "f_iteratorIcNS_11char_traitsIcEEEEE6do_putES4_RNS_8ios_baseEcm";
                bVar16 = bVar17;
                if (bVar19) {
                  bVar16 = pcVar13 < "\x7fELF\x01\x01\x01" || 0x10000U - (int)pcVar13 < (uint)bVar17
                  ;
                }
                bVar18 = false;
                bVar20 = bVar16;
                if (bVar19 && pcVar13 + !bVar17 == "\x7fELF\x01\x01\x01") {
                  bVar20 = pcVar13 < "\x1f" ||
                           (uint)((int)&UNK_03500000 - (int)pcVar13) < (uint)bVar16;
                  uVar1 = (int)&UNK_03500000 - (int)(pcVar13 + !bVar16);
                  bVar18 = uVar1 == 0;
                }
                bVar17 = false;
                bVar16 = bVar20;
                if (bVar18) {
                  bVar16 = pcVar13 < "" || (uint)((int)&UNK_02f00000 - (int)pcVar13) < (uint)bVar20;
                  uVar1 = (int)&UNK_02f00000 - (int)(pcVar13 + !bVar20);
                  bVar17 = uVar1 == 0;
                }
                bVar19 = bVar16;
                if (bVar17) {
                  bVar19 = pcVar13 < (char *)0x94000 || 0x94000U - (int)pcVar13 < (uint)bVar16;
                }
                bVar17 = bVar17 && pcVar13 + !bVar16 == (char *)0x94000;
                bVar16 = bVar19;
                if (bVar17) {
                  bVar16 = pcVar13 < (char *)0x11000000 || 0x11000000U - (int)pcVar13 < (uint)bVar19
                  ;
                }
                bVar18 = false;
                bVar20 = bVar16;
                if (bVar17 && pcVar13 + !bVar19 == (char *)0x11000000) {
                  bVar20 = pcVar13 < (char *)0x680 || 0x680U - (int)pcVar13 < (uint)bVar16;
                  unaff_r10 = 0x680 - (int)(pcVar13 + !bVar16);
                  bVar18 = unaff_r10 == 0;
                }
                bVar17 = false;
                bVar16 = bVar20;
                if (bVar18) {
                  bVar16 = pcVar13 < (char *)0x3f00 || 0x3f00U - (int)pcVar13 < (uint)bVar20;
                  unaff_r10 = 0x3f00 - (int)(pcVar13 + !bVar20);
                  bVar17 = unaff_r10 == 0;
                }
                bVar19 = false;
                bVar18 = bVar16;
                if (bVar17) {
                  bVar18 = pcVar13 < (char *)0x2c0 || 0x2c0U - (int)pcVar13 < (uint)bVar16;
                  uVar1 = 0x2c0 - (int)(pcVar13 + !bVar16);
                  bVar19 = uVar1 == 0;
                }
                bVar17 = false;
                bVar16 = bVar18;
                if (bVar19) {
                  bVar16 = pcVar13 < (char *)0x170 || 0x170U - (int)pcVar13 < (uint)bVar18;
                  uVar1 = 0x170 - (int)(pcVar13 + !bVar18);
                  bVar17 = uVar1 == 0;
                }
                bVar19 = bVar16;
                if (bVar17) {
                  bVar19 = (uint)-(int)pcVar13 < (uint)bVar16;
                }
                bVar18 = false;
                bVar20 = bVar19;
                if (bVar17 && pcVar13 + !bVar16 == (char *)0x0) {
                  bVar20 = pcVar13 < (char *)0x7800 || 0x7800U - (int)pcVar13 < (uint)bVar19;
                  unaff_r10 = 0x7800 - (int)(pcVar13 + !bVar19);
                  bVar18 = unaff_r10 == 0;
                }
                bVar17 = false;
                bVar16 = bVar20;
                if (bVar18) {
                  bVar16 = pcVar13 < (char *)0xc00 || 0xc00U - (int)pcVar13 < (uint)bVar20;
                  unaff_r10 = 0xc00 - (int)(pcVar13 + !bVar20);
                  bVar17 = unaff_r10 == 0;
                }
                bVar19 = false;
                bVar18 = bVar16;
                if (bVar17) {
                  bVar18 = pcVar13 < (char *)0x3000 || 0x3000U - (int)pcVar13 < (uint)bVar16;
                  uVar1 = 0x3000 - (int)(pcVar13 + !bVar16);
                  bVar19 = uVar1 == 0;
                }
                bVar17 = false;
                bVar16 = bVar18;
                if (bVar19) {
                  bVar16 = pcVar13 < (char *)0x1b00 || 0x1b00U - (int)pcVar13 < (uint)bVar18;
                  uVar1 = 0x1b00 - (int)(pcVar13 + !bVar18);
                  bVar17 = uVar1 == 0;
                }
                bVar19 = bVar16;
                if (bVar17) {
                  bVar19 = pcVar13 < (char *)0x40000000 || 0x40000000U - (int)pcVar13 < (uint)bVar16
                  ;
                }
                bVar18 = false;
                bVar20 = bVar19;
                if (bVar17 && pcVar13 + !bVar16 == (char *)0x40000000) {
                  bVar20 = pcVar13 < (char *)0x58 || 0x58U - (int)pcVar13 < (uint)bVar19;
                  uVar1 = 0x58 - (int)(pcVar13 + !bVar19);
                  bVar18 = uVar1 == 0;
                }
                if (bVar18) {
                  unaff_r10 = 0x3b0 - (int)(pcVar13 + !bVar20);
                }
                uStack_2c = 0x32db978;
                pcVar11 = (char *)(_UNK_032dc250 + 0x32dba30);
                iStack_4c = iVar7;
                iStack_48 = param_2;
                iStack_44 = iVar2;
                puStack_40 = puVar14;
                pcStack_3c = pcVar13;
                iStack_38 = iVar9;
                iStack_34 = unaff_r10;
                uStack_30 = uVar1;
                if (*pcVar11 == '\0') {
                  func_0x01438628(*(undefined4 *)(_UNK_032dc254 + 0x32dba44));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc258 + 0x32dba50));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc25c + 0x32dba5c));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc260 + 0x32dba68));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc264 + 0x32dba74));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc268 + 0x32dba80));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc26c + 0x32dba8c));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc270 + 0x32dba98));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc274 + 0x32dbaa4));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc278 + 0x32dbab0));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc27c + 0x32dbabc));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc280 + 0x32dbac8));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc284 + 0x32dbad4));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc288 + 0x32dbae0));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc28c + 0x32dbaec));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc290 + 0x32dbaf8));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc294 + 0x32dbb04));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc298 + 0x32dbb10));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc29c + 0x32dbb1c));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc2a0 + 0x32dbb28));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc2a4 + 0x32dbb34));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc2a8 + 0x32dbb40));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc2ac + 0x32dbb4c));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc2b0 + 0x32dbb58));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc2b4 + 0x32dbb64));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc2b8 + 0x32dbb70));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc2bc + 0x32dbb7c));
                  func_0x01438628(*(undefined4 *)(_UNK_032dc2c0 + 0x32dbb88));
                  *pcVar11 = '\x01';
                }
                uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
                uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
                uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
                uStack_60 = 0;
                iVar2 = func_0x02953fd4(0x83c1,0);
                if (iVar2 == 0) {
                  if (*(int *)(**(int **)(_UNK_032dc2c4 + 0x32dbbf0) + 0x74) == 0) {
                    func_0x014387a4();
                  }
                  iVar2 = func_0x04e4a028(**(undefined4 **)(_UNK_032dc2c8 + 0x32dbc0c));
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = func_0x036c7bec(iVar2,**(undefined4 **)(_UNK_032dc2cc + 0x32dbc2c));
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0x32c);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar12 = func_0x047536e4(iVar2,**(undefined4 **)(_UNK_032dc2d0 + 0x32dbc60));
                  iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_032dc2d4 + 0x32dbc78));
                  func_0x04cfd2f0(iVar2,uVar12,**(undefined4 **)(_UNK_032dc2d8 + 0x32dbc90));
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uStack_78 = *(int *)(iVar2 + 0xc) - 1;
                  if (-1 < (int)uStack_78) {
                    puVar14 = *(undefined4 **)(_UNK_032dc2dc + 0x32dbcc0);
                    do {
                      if (*(int *)(**(int **)(_UNK_032dc2e0 + 0x32dbccc) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar9 = func_0x04e4a028(**(undefined4 **)(_UNK_032dc2e4 + 0x32dbce8));
                      if (iVar9 == 0) {
                        func_0x014388e4();
                      }
                      iVar9 = func_0x036c7bec(iVar9,**(undefined4 **)(_UNK_032dc2e8 + 0x32dbd08));
                      if (iVar9 == 0) {
                        func_0x014388e4();
                      }
                      iVar9 = *(int *)(iVar9 + 0x32c);
                      if (iVar2 == 0) {
                        func_0x014388e4();
                      }
                      uVar12 = func_0x04cfd760(iVar2,uStack_78,
                                               **(undefined4 **)(_UNK_032dc2ec + 0x32dbd3c));
                      if (iVar9 == 0) {
                        func_0x014388e4();
                      }
                      iVar9 = func_0x03b73d40(iVar9,uVar12,
                                              **(undefined4 **)(_UNK_032dc2f0 + 0x32dbd68));
                      if (*(int *)(**(int **)(_UNK_032dc2f4 + 0x32dbd80) + 0x74) == 0) {
                        func_0x014387a4();
                      }
                      iVar7 = FUN_032d9e60(iVar9);
                      if ((iVar6 != 0 && iVar7 != 0) && (0 < *(int *)(iVar6 + 0xc))) {
                        iVar7 = 0;
                        do {
                          if (iVar9 == 0) {
                            func_0x014388e4();
                          }
                          iVar8 = *(int *)(iVar9 + 0x14);
                          iVar3 = func_0x04cfd760(iVar6,iVar7,
                                                  **(undefined4 **)(_UNK_032dc2f8 + 0x32dbdf4));
                          if (iVar3 == 0) {
                            func_0x014388e4();
                          }
                          uVar12 = *(undefined4 *)(iVar3 + 8);
                          if (iVar8 == 0) {
                            func_0x014388e4();
                          }
                          iVar3 = func_0x046c26fc(iVar8,uVar12,
                                                  **(undefined4 **)(_UNK_032dc2fc + 0x32dbe30));
                          if (iVar3 == 0) {
                            iVar8 = **(int **)(**(int **)(_UNK_032dc308 + 0x32dbea4) + 0x5c);
                            iVar3 = func_0x04cfd760(iVar6,uStack_78,
                                                    **(undefined4 **)(_UNK_032dc30c + 0x32dbeb4));
                            if (iVar3 == 0) {
                              func_0x014388e4();
                            }
                            uVar12 = *(undefined4 *)(iVar3 + 8);
                            if (iVar8 == 0) {
                              func_0x014388e4();
                            }
                            iVar3 = func_0x02e651cc(iVar8,uVar12,0);
                            if (iVar3 != 0) {
                              iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_032dc310 + 0x32dbf08));
                              func_0x04cd2124(iVar3,**(undefined4 **)(_UNK_032dc314 + 0x32dbf1c));
                              iVar8 = *(int *)(iVar9 + 0x14);
                              if (iVar8 == 0) {
                                func_0x014388e4();
                              }
                              iVar8 = func_0x046c2140(iVar8,**(undefined4 **)
                                                              (_UNK_032dc318 + 0x32dbf40));
                              if (iVar8 == 0) {
                                func_0x014388e4();
                              }
                              func_0x04bb113c(&uStack_70,iVar8,
                                              **(undefined4 **)(_UNK_032dc31c + 0x32dbf6c));
                              uStack_60 = uStack_70;
                              uStack_5c = uStack_6c;
                              uStack_58 = uStack_68;
                              uStack_54 = uStack_64;
                              while (iVar8 = func_0x048a4a78(&uStack_60,*puVar14),
                                    uVar12 = uStack_54, iVar8 != 0) {
                                if (*(int *)(**(int **)(_UNK_032dc320 + 0x32dbfa0) + 0x74) == 0) {
                                  func_0x014387a4();
                                }
                                iVar8 = func_0x04e4a028(**(undefined4 **)(_UNK_032dc324 + 0x32dbfc0)
                                                       );
                                if (iVar8 == 0) {
                                  func_0x014388e4();
                                }
                                iVar8 = func_0x029a6fa8(iVar8,uVar12,0);
                                if (iVar8 == 0) {
                                  func_0x014388e4();
                                }
                                if (*(int *)(iVar8 + 0x1c) - 3U < 3) {
                                  if (iVar3 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar8 = func_0x04cd2d7c(iVar3,uVar12,
                                                          **(undefined4 **)
                                                            (_UNK_032dc328 + 0x32dc01c));
                                  if (iVar8 == 0) {
                                    if (iVar3 == 0) {
                                      func_0x014388e4();
                                    }
                                    iVar8 = *(int *)(iVar3 + 8);
                                    uVar1 = *(uint *)(iVar3 + 0xc);
                                    piVar4 = *(int **)(_UNK_032dc32c + 0x32dc05c);
                                    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
                                    iVar15 = *piVar4;
                                    if (iVar8 == 0) {
                                      func_0x014388e4();
                                    }
                                    if (uVar1 < *(uint *)(iVar8 + 0xc)) {
                                      *(uint *)(iVar3 + 0xc) = uVar1 + 1;
                                      *(undefined4 *)(iVar8 + uVar1 * 4 + 0x10) = uVar12;
                                    }
                                    else {
                                      func_0x04cd29cc(iVar3,uVar12,
                                                      *(undefined4 *)
                                                       (*(int *)(*(int *)(iVar15 + 0x10) + 0x60) +
                                                       0x38));
                                    }
                                  }
                                }
                              }
                              func_0x048a4a74(&uStack_60,
                                              **(undefined4 **)(_UNK_032dc330 + 0x32dc0b0));
                              if (iVar3 == 0) {
                                func_0x014388e4();
                              }
                              if (0 < *(int *)(iVar3 + 0xc)) {
                                iVar8 = 0;
                                while( true ) {
                                  if (iVar3 == 0) {
                                    func_0x014388e4();
                                  }
                                  if (*(int *)(iVar3 + 0xc) <= iVar8) break;
                                  if (iVar9 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar15 = *(int *)(iVar9 + 0x14);
                                  uVar12 = func_0x04cd26d0(iVar3,iVar8,
                                                           **(undefined4 **)
                                                             (_UNK_032dc33c + 0x32dc108));
                                  if (iVar15 == 0) {
                                    func_0x014388e4();
                                  }
                                  iVar15 = func_0x046c26fc(iVar15,uVar12,
                                                           **(undefined4 **)
                                                             (_UNK_032dc340 + 0x32dc134));
                                  if (iVar15 != 0) {
                                    iVar15 = *(int *)(iVar9 + 0x14);
                                    uVar12 = func_0x04cd26d0(iVar3,iVar8,
                                                             **(undefined4 **)
                                                               (_UNK_032dc344 + 0x32dc154));
                                    if (iVar15 == 0) {
                                      func_0x014388e4();
                                    }
                                    func_0x03b70e64(iVar15,uVar12,
                                                    **(undefined4 **)(_UNK_032dc348 + 0x32dc180));
                                  }
                                  iVar8 = iVar8 + 1;
                                }
                              }
                            }
                          }
                          else {
                            iVar8 = *(int *)(iVar9 + 0x14);
                            iVar3 = func_0x04cfd760(iVar6,iVar7,
                                                    **(undefined4 **)(_UNK_032dc300 + 0x32dbe50));
                            if (iVar3 == 0) {
                              func_0x014388e4();
                            }
                            uVar12 = *(undefined4 *)(iVar3 + 8);
                            if (iVar8 == 0) {
                              func_0x014388e4();
                            }
                            func_0x03b70e64(iVar8,uVar12,
                                            **(undefined4 **)(_UNK_032dc304 + 0x32dbe8c));
                          }
                          iVar7 = iVar7 + 1;
                        } while (iVar7 < *(int *)(iVar6 + 0xc));
                      }
                      uStack_78 = uStack_78 - 1;
                    } while (uStack_78 < 0x80000000);
                  }
                }
                else {
                  iVar2 = func_0x029540a4(0x83c1,0);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uStack_78 = func_0x02869298(iVar2,(int)uVar21,iVar6,0);
                }
                return uStack_78;
              }
            }
            iVar2 = *(int *)(iVar6 + 0xc);
            param_2 = *(int *)(iVar7 + 0x10);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x03b780b0(iVar2,iVar9,*puVar14);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = *(int *)(iVar2 + 0x24);
            if (param_2 == 0) {
              func_0x014388e4();
            }
            iVar6 = func_0x04cd2d7c(param_2,iVar2,**(undefined4 **)(iRam032db9d4 + 0x32db28c));
            if (iVar6 != 0) {
              iVar6 = *(int *)(pcVar13 + 0x6c);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(iVar6 + 9) != '\0') {
                iVar6 = *(int *)(pcVar13 + 0x6c);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar6 + 0xc);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x03b780b0(iVar6,iVar9,*puVar14);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                if (*(char *)(iVar6 + 0xd) == '\0') {
                  unaff_r10 = 0;
                  while( true ) {
                    iVar6 = *(int *)(pcVar13 + 0x6c);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0xc);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = func_0x03b780b0(iVar6,iVar9,*puVar14);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0x14);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar6 + 0xc) <= unaff_r10) break;
                    iVar2 = *(int *)(pcVar13 + 0x6c);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = *(int *)(iVar2 + 0xc);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = func_0x03b780b0(iVar2,iVar9,*puVar14);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = *(int *)(iVar2 + 0x14);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    uVar12 = func_0x03b7661c(iVar2,unaff_r10,
                                             **(undefined4 **)(iRam032db9d8 + 0x32db654));
                    iVar2 = *(int *)(pcVar13 + 0x6c);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = *(int *)(iVar2 + 0xc);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = func_0x03b780b0(iVar2,iVar9,*puVar14);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = *(int *)(iVar2 + 0x18);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    uVar5 = func_0x03b7661c(iVar2,unaff_r10,
                                            **(undefined4 **)(iRam032db9dc + 0x32db6c0));
                    iVar2 = func_0x014388d4(**(undefined4 **)(iRam032db9e0 + 0x32db6d8));
                    uStack_28 = 0;
                    func_0x02ca3c70(iVar2,uVar12,uVar5,0);
                    if (uVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(uVar1 + 8);
                    uVar10 = *(uint *)(uVar1 + 0xc);
                    piVar4 = *(int **)(iRam032db9e4 + 0x32db728);
                    *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + 1;
                    iVar7 = *piVar4;
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar10 < *(uint *)(iVar6 + 0xc)) {
                      *(uint *)(uVar1 + 0xc) = uVar10 + 1;
                      piVar4 = (int *)(iVar6 + uVar10 * 4 + 0x10);
                      *piVar4 = iVar2;
                      func_0x014385cc(piVar4,iVar2);
                    }
                    else {
                      func_0x04cfda38(uVar1,iVar2,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
                    }
                    unaff_r10 = unaff_r10 + 1;
                    puVar14 = *(undefined4 **)(iRam032db9e8 + 0x32db784);
                  }
                }
                iVar6 = *(int *)(pcVar13 + 0x6c);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = *(int *)(iVar6 + 0xc);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                iVar6 = func_0x03b780b0(iVar6,iVar9,*puVar14);
                if (iVar6 == 0) {
                  func_0x014388e4();
                }
                if (*(char *)(iVar6 + 0x28) == '\0') {
                  unaff_r10 = 0;
                  while( true ) {
                    iVar6 = *(int *)(pcVar13 + 0x6c);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0xc);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = func_0x03b780b0(iVar6,iVar9,*puVar14);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(iVar6 + 0x2c);
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (*(int *)(iVar6 + 0xc) <= unaff_r10) break;
                    iVar2 = *(int *)(pcVar13 + 0x6c);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = *(int *)(iVar2 + 0xc);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = func_0x03b780b0(iVar2,iVar9,*puVar14);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = *(int *)(iVar2 + 0x2c);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    uVar12 = func_0x03b7661c(iVar2,unaff_r10,
                                             **(undefined4 **)(iRam032db9ec + 0x32db844));
                    iVar2 = *(int *)(pcVar13 + 0x6c);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = *(int *)(iVar2 + 0xc);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = func_0x03b780b0(iVar2,iVar9,*puVar14);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    iVar2 = *(int *)(iVar2 + 0x30);
                    if (iVar2 == 0) {
                      func_0x014388e4();
                    }
                    uVar5 = func_0x03b7661c(iVar2,unaff_r10,
                                            **(undefined4 **)(iRam032db9f0 + 0x32db8b0));
                    iVar2 = func_0x014388d4(**(undefined4 **)(iRam032db9f4 + 0x32db8c8));
                    uStack_28 = 0;
                    func_0x02ca3c70(iVar2,uVar12,uVar5,0);
                    if (uVar1 == 0) {
                      func_0x014388e4();
                    }
                    iVar6 = *(int *)(uVar1 + 8);
                    uVar10 = *(uint *)(uVar1 + 0xc);
                    piVar4 = *(int **)(iRam032db9f8 + 0x32db918);
                    *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + 1;
                    iVar7 = *piVar4;
                    if (iVar6 == 0) {
                      func_0x014388e4();
                    }
                    if (uVar10 < *(uint *)(iVar6 + 0xc)) {
                      *(uint *)(uVar1 + 0xc) = uVar10 + 1;
                      piVar4 = (int *)(iVar6 + uVar10 * 4 + 0x10);
                      *piVar4 = iVar2;
                      func_0x014385cc(piVar4,iVar2);
                    }
                    else {
                      func_0x04cfda38(uVar1,iVar2,
                                      *(undefined4 *)
                                       (*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38));
                    }
                    unaff_r10 = unaff_r10 + 1;
                    puVar14 = *(undefined4 **)(iRam032db9fc + 0x32db974);
                  }
                }
              }
              iVar6 = *(int *)(pcVar13 + 0x6c);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              iVar6 = *(int *)(iVar6 + 0xc);
              if (iVar6 == 0) {
                func_0x014388e4();
              }
              param_2 = func_0x03b780b0(iVar6,iVar9,*puVar14);
              if (param_2 == 0) {
                func_0x014388e4();
              }
              if (*(char *)(param_2 + 0xc) == '\0') {
                unaff_r10 = 0;
                while( true ) {
                  iVar6 = *(int *)(pcVar13 + 0x6c);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(iVar6 + 0xc);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  param_2 = func_0x03b780b0(iVar6,iVar9,*puVar14);
                  if (param_2 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(param_2 + 0x1c);
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (*(int *)(iVar6 + 0xc) <= unaff_r10) break;
                  iVar2 = *(int *)(pcVar13 + 0x6c);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0xc);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = func_0x03b780b0(iVar2,iVar9,*puVar14);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0x1c);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar12 = func_0x03b7661c(iVar2,unaff_r10,
                                           **(undefined4 **)(iRam032dba00 + 0x32db464));
                  iVar2 = *(int *)(pcVar13 + 0x6c);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0xc);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = func_0x03b780b0(iVar2,iVar9,*puVar14);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  iVar2 = *(int *)(iVar2 + 0x20);
                  if (iVar2 == 0) {
                    func_0x014388e4();
                  }
                  uVar5 = func_0x03b7661c(iVar2,unaff_r10,
                                          **(undefined4 **)(iRam032dba04 + 0x32db4d0));
                  iVar2 = func_0x014388d4(**(undefined4 **)(iRam032dba08 + 0x32db4e8));
                  uStack_28 = 0;
                  func_0x02ca3c70(iVar2,uVar12,uVar5,0);
                  if (uVar1 == 0) {
                    func_0x014388e4();
                  }
                  iVar6 = *(int *)(uVar1 + 8);
                  uVar10 = *(uint *)(uVar1 + 0xc);
                  piVar4 = *(int **)(iRam032dba0c + 0x32db538);
                  *(int *)(uVar1 + 0x10) = *(int *)(uVar1 + 0x10) + 1;
                  iVar7 = *piVar4;
                  if (iVar6 == 0) {
                    func_0x014388e4();
                  }
                  if (uVar10 < *(uint *)(iVar6 + 0xc)) {
                    *(uint *)(uVar1 + 0xc) = uVar10 + 1;
                    piVar4 = (int *)(iVar6 + uVar10 * 4 + 0x10);
                    *piVar4 = iVar2;
                    func_0x014385cc(piVar4,iVar2);
                  }
                  else {
                    func_0x04cfda38(uVar1,iVar2,
                                    *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x38))
                    ;
                  }
                  unaff_r10 = unaff_r10 + 1;
                  puVar14 = *(undefined4 **)(iRam032dba10 + 0x32db594);
                }
              }
            }
            iVar9 = iVar9 + 1;
          }
        }
      }
    }
    return uVar1;
  }
  iVar2 = func_0x029540a4(0x17fd,0);
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  pcVar13 = (char *)(_UNK_02875bcc + 0x2875ad8);
  if (*pcVar13 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02875bd0 + 0x2875aec),param_1,param_2,0);
    *pcVar13 = '\x01';
  }
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iStack_38 = 0;
  uStack_28 = 0;
  func_0x024f56c0(&iStack_50,0);
  iStack_38 = iStack_50;
  iStack_34 = iStack_4c;
  uStack_30 = iStack_48;
  uStack_2c = iStack_44;
  uStack_28 = puStack_40;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01523a6c(&iStack_38,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01523a6c(&iStack_38,param_1,0);
  func_0x01523a6c(&iStack_38,param_2,0);
  iVar9 = *(int *)(iVar2 + 8);
  uVar12 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  uVar5 = 3;
  if (iVar2 == 0) {
    uVar5 = 2;
  }
  uStack_58 = 0;
  uStack_54 = 0;
  func_0x024f56d0(iVar9,uVar12,&iStack_38,uVar5);
  uVar1 = func_0x035daef8(&iStack_38,0,**(undefined4 **)(_UNK_02875bd4 + 0x2875bbc));
  return uVar1;
}

