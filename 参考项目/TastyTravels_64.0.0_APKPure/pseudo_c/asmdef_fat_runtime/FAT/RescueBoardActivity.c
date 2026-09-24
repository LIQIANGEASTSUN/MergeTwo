/* Ghidra-derived pseudocode from libil2cpp.so; see completeness notes. */

// ===== FAT.RescueBoardActivity$$get_World RVA 0x1af41e0 =====

undefined4 FUN_01b041e0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x3c);
}



// ===== FAT.RescueBoardActivity$$set_World RVA 0x1af41e8 =====

void FUN_01b041e8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}



// ===== FAT.RescueBoardActivity$$get_WorldTracer RVA 0x1af41f0 =====

undefined4 FUN_01b041f0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x40);
}



// ===== FAT.RescueBoardActivity$$set_WorldTracer RVA 0x1af41f8 =====

void FUN_01b041f8(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x40) = param_2;
  return;
}



// ===== FAT.RescueBoardActivity$$InitWorld RVA 0x1af4200 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b04200(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01b044d0 + 0x1b04220);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b044d4 + 0x1b04234));
    func_0x01384978(*(undefined4 *)(_UNK_01b044d8 + 0x1b04240));
    func_0x01384978(*(undefined4 *)(_UNK_01b044dc + 0x1b0424c));
    func_0x01384978(*(undefined4 *)(_UNK_01b044e0 + 0x1b04258));
    func_0x01384978(*(undefined4 *)(_UNK_01b044e4 + 0x1b04264));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x87f5,0);
  if (iVar1 == 0) {
    uVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01b044e8 + 0x1b042c8));
    func_0x02143488(uVar2,0);
    puVar3 = *(undefined4 **)(_UNK_01b044ec + 0x1b042e4);
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
    uVar2 = func_0x01384be4(*puVar3);
    func_0x024500b4(uVar2,param_1,**(undefined4 **)(_UNK_01b044f0 + 0x1b04304),0);
    uVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01b044f4 + 0x1b04318));
    func_0x0214d6c8(uVar4,uVar2,0,0);
    *(undefined4 *)(param_1 + 0x40) = uVar4;
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar6 = *(int *)(iVar1 + 0x4c);
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b044f8 + 0x1b04358));
    func_0x01db7f44(iVar1,0);
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(iVar1 + 8) = 0xf;
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x01db7f4c(iVar6,iVar1,0);
    iVar1 = *(int *)(param_1 + 0x40);
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0214e900(iVar1,uVar2,0);
    iVar1 = *(int *)(param_1 + 0x3c);
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02141f58(iVar1,uVar2,0);
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01db8438(iVar1,uVar2,param_2,param_3,0,0);
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02142104(iVar1,param_1,0);
    func_0x01b10268(param_1,0);
    iVar1 = *(int *)(param_1 + 0x3c);
    *(undefined1 *)(param_1 + 0x48) = 0;
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02139cf4(iVar1,0);
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0xa2) = 1;
      func_0x020da680(auStack_28,iVar1,0);
      func_0x020dc7e4(iVar1,uStack_24,0,0);
      func_0x01b044fc(param_1,iVar1);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x87f5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217f950(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.RescueBoardActivity$$RefreshClearedCloudState RVA 0x1af44fc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b044fc(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int unaff_r6;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_01b04640 + 0x1b04514);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b04644 + 0x1b04528));
    func_0x01384978(*(undefined4 *)(_UNK_01b04648 + 0x1b04534));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8801,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01b04650(param_1);
    if (iVar1 != 0) {
      pcVar3 = *(char **)(iVar1 + 0x30);
      unaff_r6 = iVar1;
    }
    if (iVar1 != 0 && pcVar3 != (char *)0x0) {
      iVar1 = 0;
      puVar6 = *(undefined4 **)(_UNK_01b0464c + 0x1b045b4);
      while( true ) {
        if (pcVar3 == (char *)0x0) {
          func_0x01384bf0();
        }
        if (*(int *)(pcVar3 + 0xc) <= iVar1) break;
        iVar4 = *(int *)(unaff_r6 + 0x30);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar5 = func_0x0364c9b8(iVar4,iVar1,*puVar6);
        iVar4 = func_0x01b046cc(param_1,uVar5);
        if ((iVar4 != 0) && (iVar4 = func_0x01816d10(uVar5,0), iVar4 != 0)) {
          uVar5 = *(undefined4 *)(iVar4 + 0x1c);
          if (param_2 == 0) {
            func_0x01384bf0();
          }
          func_0x020ec8ac(param_2,uVar5,0);
        }
        pcVar3 = *(char **)(unaff_r6 + 0x30);
        iVar1 = iVar1 + 1;
      }
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x8801,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_38,uVar2,0,0);
  return;
}



// ===== FAT.RescueBoardActivity$$GetCurStageConfig RVA 0x1af4650 =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b04650(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int unaff_r4;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar2 = func_0x0229f06c(0xb88,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0xb88,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_021aa560 + 0x21aa480);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021aa564 + 0x21aa494),param_1,0);
      *pcVar9 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar2 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar8,uVar10,&uStack_30,uVar7,0,0);
    uVar10 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021aa568 + 0x21aa550));
    return uVar10;
  }
  if ((*(int *)(param_1 + 0x50) != 0) && (iVar2 = func_0x01b0bdec(param_1), 0 < iVar2)) {
    pcVar9 = (char *)(_UNK_018168c4 + 0x1816868);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_018168c8 + 0x181687c),0);
      func_0x01384978(*(undefined4 *)(_UNK_018168cc + 0x1816888));
      *pcVar9 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_018168d0 + 0x181689c) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar6 = **(int **)(_UNK_018168d4 + 0x18168b8);
    iVar8 = *(int *)(iVar6 + 0x10);
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = func_0x02457d84();
    }
    iVar8 = *(int *)(*(int *)(iVar8 + 0x60) + 8);
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = func_0x02457d84();
    }
    if (*(int *)(iVar8 + 0x74) == 0) {
      func_0x02457d48();
    }
    iVar8 = *(int *)(iVar6 + 0x10);
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = func_0x02457d84();
    }
    piVar3 = (int *)func_0x0369fa64(*(undefined4 *)(*(int *)(iVar8 + 0x60) + 0xe8));
    if (piVar3 == (int *)0x0) {
      func_0x02457d50();
    }
    iVar8 = *(int *)(iVar6 + 0x10);
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = func_0x02457d84();
    }
    iVar6 = *(int *)(*(int *)(iVar8 + 0x60) + 0xf4);
    uStack_28 = 0;
    uStack_2c = 0;
    (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
    iVar8 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
    if (iVar8 != 0) {
      unaff_r4 = piVar3[0x11];
    }
    bVar1 = true;
    iVar5 = 0;
    if (iVar8 != 0 && unaff_r4 != 0) {
      iVar4 = func_0x03d66780(unaff_r4,iVar2,&uStack_28,
                              *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x68));
      uVar10 = uStack_28;
      bVar1 = false;
      iVar5 = unaff_r4;
      if (iVar4 != 0) {
        iVar8 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar8 == 0) {
          return uStack_28;
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,iVar2,uVar10,*(undefined4 *)(*piVar3 + 0x13c));
        return uStack_28;
      }
    }
    if ((piVar3[0x12] == 0) ||
       (iVar4 = func_0x0421f3b0(piVar3[0x12],iVar2,
                                *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x13c)),
       iVar4 == 0)) {
      uStack_2c = 0;
      iVar4 = (**(code **)(*piVar3 + 0x1a0))
                        (piVar3,iVar2,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4));
      uVar10 = uStack_2c;
      if (iVar4 != 0) {
        if (iVar8 != 0) {
          if (bVar1) {
            if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x40) + 0xbd) & 1)
                == 0) {
              func_0x02457d84();
            }
            iVar5 = func_0x02457d58();
            func_0x03d63f04(iVar5,4,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x74))
            ;
            piVar3[0x11] = iVar5;
          }
          if (iVar5 == 0) {
            func_0x02457d50();
          }
          func_0x03d6491c(iVar5,iVar2,uVar10,
                          *(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x78));
        }
        iVar8 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
        if (iVar8 == 0) {
          return uVar10;
        }
        (**(code **)(*piVar3 + 0x138))(piVar3,iVar2,uVar10,*(undefined4 *)(*piVar3 + 0x13c));
        return uVar10;
      }
      iVar8 = piVar3[0x12];
      if (iVar8 == 0) {
        if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x48) + 0xbd) & 1) == 0)
        {
          func_0x02457d84();
        }
        iVar8 = func_0x02457d58();
        func_0x0421ec60(iVar8,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x144));
        piVar3[0x12] = iVar8;
        if (iVar8 == 0) {
          func_0x02457d50();
          iVar8 = 0;
        }
      }
      func_0x04220004(iVar8,iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x148));
    }
    func_0x0369fb50(piVar3,iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar6 + 0x10) + 0x60) + 0x134));
    return 0;
  }
  return 0;
}



// ===== FAT.RescueBoardActivity$$IsTargetCleared RVA 0x1af46cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b046cc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iStack_14;
  
  pcVar3 = (char *)(_UNK_01b047c8 + 0x1b046e8);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b047cc + 0x1b046fc));
    *pcVar3 = '\x01';
  }
  iStack_14 = 0;
  iVar1 = func_0x0229f06c(0x8802,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 100);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x02450590(iVar1,param_2,&iStack_14,**(undefined4 **)(_UNK_01b047d0 + 0x1b0477c));
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = 0;
      iVar1 = func_0x01816d10(param_2,0);
      if ((iVar1 != 0) && (uVar2 = 0, *(int *)(iVar1 + 0x14) <= iStack_14)) {
        uVar2 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8802,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x02179234(iVar1,param_1,param_2,0);
  }
  return uVar2;
}



// ===== FAT.RescueBoardActivity$$ClearWorld RVA 0x1af47d4 =====

void FUN_01b047d4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8807,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8807,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  func_0x01b10300(0);
  if (*(int *)(param_1 + 0x3c) != 0) {
    func_0x021421a8(*(int *)(param_1 + 0x3c),param_1,0);
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01dbc0ec(iVar1,uVar4,0);
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}



// ===== FAT.RescueBoardActivity$$OnBoardItemChange RVA 0x1af4890 =====

void FUN_01b04890(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x87f7,0);
  if (iVar1 == 0) {
    func_0x01b048f0(param_1);
    iVar1 = func_0x0229f06c(0x87fa,0);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x48) != '\0') {
        return;
      }
      iVar1 = func_0x01b049d8(param_1);
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0x48) = 1;
        *(undefined4 *)(param_1 + 0x44) = 0;
      }
      return;
    }
    iVar1 = func_0x0229f13c(0x87fa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x87f7,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.RescueBoardActivity$$SetBonusHandlerDirty RVA 0x1af48f0 =====

void FUN_01b048f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x87f8,0);
  if (iVar1 == 0) {
    iVar3 = func_0x01b0c788(param_1);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(param_1 + 0xe0);
    }
    param_1 = iVar1;
    if (iVar3 == 0 || param_1 == 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x5b3,0);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      return;
    }
    iVar1 = func_0x0229f13c(0x5b3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x87f8,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.RescueBoardActivity$$CheckBoardExtremeCase RVA 0x1af4960 =====

void FUN_01b04960(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x87fa,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x87fa,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(char *)(param_1 + 0x48) == '\0') {
    iVar1 = func_0x01b049d8(param_1);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0x48) = 1;
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    return;
  }
  return;
}



// ===== FAT.RescueBoardActivity$$CheckHasExtremeCase RVA 0x1af49d8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01b049d8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01b04b38 + 0x1b049ec);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b04b3c + 0x1b04a00));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x87fb,0);
  if (iVar1 == 0) {
    iVar5 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    iVar1 = 0;
    if (iVar5 != 0) {
      iVar1 = param_1[0xf];
    }
    if (iVar5 != 0 && iVar1 != 0) {
      uVar4 = 0;
      iVar1 = func_0x02139cf4(iVar1,0);
      if (iVar1 != 0) {
        uVar4 = 0;
        iVar5 = func_0x020ece38(iVar1,0);
        if (iVar5 == 0) {
          uVar4 = 0;
          iVar1 = func_0x020eccb8(iVar1,0);
          if (iVar1 == 0) {
            iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_01b04b40 + 0x1b04acc));
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar1 = func_0x01ddc2c0(iVar1,0);
            if (iVar1 == 0) {
              func_0x01384bf0();
              func_0x01e267a0(0,1,0);
              func_0x01384bf0();
            }
            else {
              func_0x01e267a0(iVar1,1,0);
            }
            uVar4 = func_0x01e241b4(iVar1,0);
            uVar4 = uVar4 ^ 1;
          }
        }
      }
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x87fb,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar5 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
  uVar4 = func_0x0245496c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.RescueBoardActivity$$ActivityUpdate RVA 0x1af4b44 =====

void FUN_01b04b44(int param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0x8809,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8809,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485258(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    param_2 = *(float *)(param_1 + 0x44) + param_2;
    *(float *)(param_1 + 0x44) = param_2;
    if (param_2 <= 1.0) {
      return;
    }
    func_0x01b04bd8(param_1);
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  return;
}



// ===== FAT.RescueBoardActivity$$ExecuteExtremeCase RVA 0x1af4bd8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b04bd8(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  char *pcVar4;
  undefined4 unaff_r5;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_01b04e54 + 0x1b04bec);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b04e58 + 0x1b04c00));
    func_0x01384978(*(undefined4 *)(_UNK_01b04e5c + 0x1b04c0c));
    func_0x01384978(*(undefined4 *)(_UNK_01b04e60 + 0x1b04c18));
    func_0x01384978(*(undefined4 *)(_UNK_01b04e64 + 0x1b04c24));
    func_0x01384978(*(undefined4 *)(_UNK_01b04e68 + 0x1b04c30));
    func_0x01384978(*(undefined4 *)(_UNK_01b04e6c + 0x1b04c3c));
    *pcVar4 = '\x01';
  }
  uVar6 = 0;
  iVar1 = func_0x0229f06c(0x880a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x880a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3);
    return;
  }
  iVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01b04e70 + 0x1b04c98));
  func_0x0244f5a0(iVar5,0);
  iVar2 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = param_1[0xf];
  }
  if (iVar2 != 0 && iVar1 != 0) {
    uVar6 = func_0x02139cf4(iVar1,0);
  }
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar5 + 8) = uVar6;
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar5 + 8) == 0) {
    return;
  }
  iVar1 = FUN_01b049d8(param_1);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(**(int **)(_UNK_01b04e74 + 0x1b04d1c) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01b04e78 + 0x1b04d38));
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x028c3fd8(iVar1,0);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar2 = *(int *)(iVar1 + 0x10);
  iVar7 = **(int **)(_UNK_01b04e7c + 0x1b04d7c);
  iVar1 = *(int *)(iVar7 + 0x1c);
  if (iVar1 == 0) {
    func_0x0140024c(iVar7);
    iVar1 = *(int *)(iVar7 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = func_0x014001f0();
  }
  uVar6 = **(undefined4 **)(iVar1 + 0x5c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01ca1c50(iVar2,0x47,uVar6,0);
  iVar2 = *(int *)(iVar5 + 8);
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b04e80 + 0x1b04e0c));
  func_0x02450194(iVar1,iVar5,**(undefined4 **)(_UNK_01b04e84 + 0x1b04e28),0);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  iVar5 = func_0x0229f06c(0x2a8,0,0);
  if (iVar5 == 0) {
    iVar5 = 4;
    while( true ) {
      iVar7 = *(int *)(iVar2 + 0x80);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      uVar8 = iVar5 - 4;
      if (*(int *)(iVar7 + 0xc) <= (int)uVar8) break;
      iVar7 = *(int *)(iVar2 + 0x80);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      if (*(uint *)(iVar7 + 0xc) <= uVar8) {
        func_0x01384bf4();
      }
      iVar7 = *(int *)(iVar7 + iVar5 * 4);
      if (iVar7 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar7 + 8) != 0) {
        iVar7 = *(int *)(iVar2 + 0x80);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        if (*(uint *)(iVar7 + 0xc) <= uVar8) {
          func_0x01384bf4();
        }
        iVar7 = *(int *)(iVar7 + iVar5 * 4);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uVar6 = *(undefined4 *)(iVar7 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        (**(code **)(iVar1 + 0xc))
                  (*(undefined4 *)(iVar1 + 0x20),uVar6,*(undefined4 *)(iVar1 + 0x14));
      }
      iVar5 = iVar5 + 1;
    }
    return;
  }
  iVar5 = func_0x0229f13c(0x2a8,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uStack_1c = uStack_14;
  uStack_20 = uStack_18;
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,iVar1,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar5 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar5 + 0x10),0);
  }
  func_0x01485278(&uStack_38,iVar2,0);
  func_0x01485278(&uStack_38,iVar1,0);
  iVar2 = *(int *)(iVar5 + 8);
  uVar6 = *(undefined4 *)(iVar5 + 0xc);
  iVar1 = *(int *)(iVar5 + 0x10);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar2,uVar6,&uStack_38,uVar3,0,0);
  return;
}



// ===== FAT.RescueBoardActivity.<>c__DisplayClass17_0$$.ctor RVA 0x1af4e88 =====

void FUN_01b04e88(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.RescueBoardActivity$$BoardEntryAsset RVA 0x1af4e90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b04e90(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01b04f7c + 0x1b04ea8);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b04f80 + 0x1b04ebc));
    func_0x01384978(*(undefined4 *)(_UNK_01b04f84 + 0x1b04ec8));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x880d,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x90);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x14);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03470a60(iVar1,**(undefined4 **)(_UNK_01b04f8c + 0x1b04f68),&uStack_14,
                    **(undefined4 **)(_UNK_01b04f88 + 0x1b04f5c));
  }
  else {
    iVar1 = func_0x0229f13c(0x880d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02173e78(iVar1,param_1,0);
  }
  return uStack_14;
}



// ===== FAT.RescueBoardActivity$$get_BoardEntryVisible RVA 0x1af4f90 =====

void FUN_01b04f90(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x880f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x880f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    func_0x0245496c(&uStack_30,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01b04ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  return;
}



// ===== FAT.RescueBoardActivity$$get_Feature RVA 0x1af4ff4 =====

undefined4 FUN_01b04ff4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8810,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8810,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return 0xa0;
}



// ===== FAT.RescueBoardActivity$$SetBoardData RVA 0x1af5048 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0214bc3c) */
/* WARNING: Removing unreachable block (ram,0x0214b9ec) */
/* WARNING: Removing unreachable block (ram,0x0214b350) */
/* WARNING: Removing unreachable block (ram,0x0214b344) */
/* WARNING: Removing unreachable block (ram,0x0214acf8) */
/* WARNING: Removing unreachable block (ram,0x0214b080) */
/* WARNING: Removing unreachable block (ram,0x0214b08c) */
/* WARNING: Removing unreachable block (ram,0x0214b9e0) */
/* WARNING: Removing unreachable block (ram,0x0214bc48) */
/* WARNING: Removing unreachable block (ram,0x0214c20c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b05048(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar18;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 auStack_28 [4];
  
  iVar2 = func_0x0229f06c(0x8811,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x8811,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = 0;
    uStack_30 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),
                         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8));
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    auStack_28[0] = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar11 = *(int *)(iVar2 + 8);
    uVar14 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    uVar9 = 3;
    if (iVar2 == 0) {
      uVar9 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    func_0x0245495c(iVar11,uVar14,&uStack_38,uVar9);
    return;
  }
  if (param_2 == 0) {
    return;
  }
  FUN_01b04200(param_1,*(undefined4 *)(param_2 + 0x38),0);
  iVar2 = *(int *)(param_1 + 0x3c);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  pcVar10 = (char *)(_UNK_0214b97c + 0x214aa08);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_0214b980 + 0x214aa1c),param_2,0,0);
    func_0x01384978(*(undefined4 *)(_UNK_0214b984 + 0x214aa28));
    func_0x01384978(*(undefined4 *)(_UNK_0214b988 + 0x214aa34));
    func_0x01384978(*(undefined4 *)(_UNK_0214b98c + 0x214aa40));
    func_0x01384978(*(undefined4 *)(_UNK_0214b990 + 0x214aa4c));
    func_0x01384978(*(undefined4 *)(_UNK_0214b994 + 0x214aa58));
    func_0x01384978(*(undefined4 *)(_UNK_0214b998 + 0x214aa64));
    func_0x01384978(*(undefined4 *)(_UNK_0214b99c + 0x214aa70));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9a0 + 0x214aa7c));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9a4 + 0x214aa88));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9a8 + 0x214aa94));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9ac + 0x214aaa0));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9b0 + 0x214aaac));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9b4 + 0x214aab8));
    func_0x01384978(*(undefined4 *)(_UNK_0214b9b8 + 0x214aac4));
    func_0x01384978(*(undefined4 *)(_UNK_0214bac4 + 0x214aad0));
    func_0x01384978(*(undefined4 *)(_UNK_0214bac8 + 0x214aadc));
    func_0x01384978(*(undefined4 *)(_UNK_0214bacc + 0x214aae8));
    func_0x01384978(*(undefined4 *)(_UNK_0214bad0 + 0x214aaf4));
    func_0x01384978(*(undefined4 *)(_UNK_0214bad4 + 0x214ab00));
    func_0x01384978(*(undefined4 *)(_UNK_0214bad8 + 0x214ab0c));
    func_0x01384978(*(undefined4 *)(_UNK_0214badc + 0x214ab18));
    func_0x01384978(*(undefined4 *)(_UNK_0214bae0 + 0x214ab24));
    func_0x01384978(*(undefined4 *)(_UNK_0214bae4 + 0x214ab30));
    func_0x01384978(*(undefined4 *)(_UNK_0214bae8 + 0x214ab3c));
    func_0x01384978(*(undefined4 *)(_UNK_0214baec + 0x214ab48));
    func_0x01384978(*(undefined4 *)(_UNK_0214baf0 + 0x214ab54));
    func_0x01384978(*(undefined4 *)(_UNK_0214baf4 + 0x214ab60));
    func_0x01384978(*(undefined4 *)(_UNK_0214baf8 + 0x214ab6c));
    func_0x01384978(*(undefined4 *)(_UNK_0214bafc + 0x214ab78));
    func_0x01384978(*(undefined4 *)(_UNK_0214bb7c + 0x214ab84));
    func_0x01384978(*(undefined4 *)(_UNK_0214bb80 + 0x214ab90));
    *pcVar10 = '\x01';
  }
  iStack_3c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  auStack_28[0] = 0;
  uStack_30 = 0;
  uStack_44 = 0;
  iVar11 = func_0x0229f06c(0x5c51,0);
  if (iVar11 != 0) {
    iVar11 = func_0x0229f13c(0x5c51,0);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar11,iVar2,param_2,0,0);
    return;
  }
  iVar11 = func_0x01c24918(0);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(iVar2 + 0x34);
  iVar11 = *(int *)(iVar11 + 0x38);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(iVar12 + 0xc);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar12,**(undefined4 **)(_UNK_0214bc10 + 0x214ac60));
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar16 = *(uint *)(param_2 + 0x48);
  uVar17 = *(uint *)(param_2 + 0x4c);
  if (uVar16 != 0 || uVar17 != 0) {
    iVar12 = 0;
    puVar15 = *(undefined4 **)(_UNK_0214bc14 + 0x214ac90);
    do {
      if ((uVar16 & 1) != 0) {
        iVar13 = *(int *)(iVar2 + 0x6c);
        if (iVar13 == 0) {
          func_0x01384bf0();
        }
        func_0x024519c0(iVar13,iVar12,*puVar15);
      }
      bVar1 = (byte)uVar17;
      uVar17 = uVar17 >> 1;
      iVar12 = iVar12 + 1;
      uVar16 = (uint)(bVar1 & 1) << 0x1f | uVar16 >> 1;
    } while (uVar16 != 0 || uVar17 != 0);
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar9 = *(undefined4 *)(param_2 + 0x3c);
  uVar14 = *(undefined4 *)(param_2 + 0x44);
  uVar6 = *(undefined4 *)(param_2 + 0x34);
  *(int *)(iVar2 + 0x80) = *(int *)(param_2 + 0x30);
  *(undefined4 *)(iVar2 + 0x84) = uVar6;
  *(undefined4 *)(iVar2 + 0x90) = uVar14;
  *(undefined4 *)(iVar2 + 0x94) = uVar9;
  piVar3 = (int *)func_0x021566f4(0);
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar3;
  uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar17 != 0) {
    piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_0214bcb8 + 0x214ad30)) {
        puVar15 = (undefined4 *)(iVar12 + *piVar7 * 8 + 0xc0);
        goto LAB_0214ad78;
      }
      uVar17 = uVar17 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar17 != 0);
  }
  puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214bcb8 + 0x214ad30),0);
LAB_0214ad78:
  (*(code *)*puVar15)(piVar3,puVar15[1]);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar13 = *(int *)(iVar2 + 0x9c);
  iVar12 = (*(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x10)) * 1000;
  if (iVar12 < 2) {
    iVar12 = 1;
  }
  *(undefined4 *)(iVar2 + 0x40) = *(undefined4 *)(param_2 + 0xc);
  *(int *)(iVar2 + 0x44) = iVar12;
  if (iVar13 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar13,**(undefined4 **)(_UNK_0214bd90 + 0x214addc));
  iVar12 = *(int *)(param_2 + 0x50);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x034658b4(iVar12,**(undefined4 **)(_UNK_0214bd94 + 0x214ae00));
  piVar7 = *(int **)(_UNK_0214bd98 + 0x214ae1c);
  puVar15 = *(undefined4 **)(_UNK_0214bd9c + 0x214ae24);
LAB_0214ae20:
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar3;
  uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar17 != 0) {
    piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_0214bda0 + 0x214ae3c)) {
        puVar4 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
        goto LAB_0214ae84;
      }
      uVar17 = uVar17 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar17 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214bda0 + 0x214ae3c),0);
LAB_0214ae84:
  iVar12 = (*(code *)*puVar4)(piVar3,puVar4[1]);
  if (iVar12 != 0) {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar7) {
          puVar4 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
          goto LAB_0214aef8;
        }
        uVar17 = uVar17 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar17 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar7,0);
LAB_0214aef8:
    (*(code *)*puVar4)(&uStack_68,piVar3,puVar4[1]);
    iVar12 = iStack_64;
    uVar14 = uStack_68;
    iVar13 = func_0x02142c70(iVar2,uStack_68,2);
    if (iVar13 == 0) {
      piVar8 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0214bf34 + 0x214af5c),1);
      uStack_68 = uVar14;
      iVar12 = func_0x01384abc(**(undefined4 **)(_UNK_0214bf64 + 0x214af74),&uStack_68);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar12 != 0) &&
         (iVar13 = func_0x01384ab8(iVar12,*(undefined4 *)(*piVar8 + 0x20)), iVar13 == 0)) {
        uVar14 = func_0x01384c10();
        func_0x01384aa0(uVar14,0);
      }
      if (piVar8[3] == 0) {
        func_0x01384bf4();
      }
      piVar8[4] = iVar12;
      if (*(int *)(**(int **)(_UNK_0214bfc0 + 0x214afdc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c23bc(*puVar15,piVar8,0);
    }
    else {
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      func_0x0214c448(iVar13,*(undefined4 *)(iVar12 + 0xc),*(undefined4 *)(iVar12 + 0x10));
    }
    goto LAB_0214ae20;
  }
  if (piVar3 != (int *)0x0) {
    iVar12 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c004 + 0x214b020)) {
          puVar4 = (undefined4 *)(iVar12 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b068;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c004 + 0x214b020),0);
LAB_0214b068:
    (*(code *)*puVar4)(piVar3,puVar4[1]);
  }
  iVar12 = *(int *)(iVar2 + 0x98);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64b20(iVar12,**(undefined4 **)(_UNK_0214c090 + 0x214b0b0));
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(param_2 + 0x58);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x034658b4(iVar12,**(undefined4 **)(_UNK_0214c0c0 + 0x214b0e4));
  piVar7 = *(int **)(_UNK_0214c0c4 + 0x214b100);
LAB_0214b0fc:
  if (piVar3 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar12 = *piVar3;
  uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar17 != 0) {
    piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_0214c0c8 + 0x214b118)) {
        puVar4 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
        goto LAB_0214b160;
      }
      uVar17 = uVar17 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar17 != 0);
  }
  puVar4 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c0c8 + 0x214b118),0);
LAB_0214b160:
  iVar12 = (*(code *)*puVar4)(piVar3,puVar4[1]);
  if (iVar12 != 0) {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar7) {
          puVar4 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
          goto LAB_0214b1d4;
        }
        uVar17 = uVar17 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar17 != 0);
    }
    puVar4 = (undefined4 *)func_0x014002dc(piVar3,*piVar7,0);
LAB_0214b1d4:
    (*(code *)*puVar4)(&uStack_68,piVar3,puVar4[1]);
    iVar12 = iStack_64;
    uVar14 = uStack_68;
    iVar13 = func_0x0214225c(iVar2,uStack_68,0xd);
    if (iVar13 == 0) {
      piVar8 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_0214c218 + 0x214b220),1);
      uStack_68 = uVar14;
      iVar12 = func_0x01384abc(**(undefined4 **)(_UNK_0214c228 + 0x214b238),&uStack_68);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar12 != 0) &&
         (iVar13 = func_0x01384ab8(iVar12,*(undefined4 *)(*piVar8 + 0x20)), iVar13 == 0)) {
        uVar14 = func_0x01384c10();
        func_0x01384aa0(uVar14,0);
      }
      if (piVar8[3] == 0) {
        func_0x01384bf4();
      }
      piVar8[4] = iVar12;
      if (*(int *)(**(int **)(_UNK_0214c258 + 0x214b2a0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c23bc(*puVar15,piVar8,0);
    }
    else {
      func_0x0214c4c8(iVar13,iVar12);
    }
    goto LAB_0214b0fc;
  }
  if (piVar3 != (int *)0x0) {
    iVar12 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c2b4 + 0x214b2e4)) {
          puVar15 = (undefined4 *)(iVar12 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b32c;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c2b4 + 0x214b2e4),0);
LAB_0214b32c:
    (*(code *)*puVar15)(piVar3,puVar15[1]);
  }
  iVar12 = func_0x01c24918(0);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(iVar12 + 0xc);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  uVar14 = func_0x01ca5188(iVar12,0);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(param_2 + 0x28);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x03653608(iVar12,**(undefined4 **)(_UNK_0214c3b0 + 0x214b3bc));
  do {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c3dc + 0x214b3e8)) {
          puVar15 = (undefined4 *)(iVar12 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b430;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c3dc + 0x214b3e8),0);
LAB_0214b430:
    iVar12 = (*(code *)*puVar15)(piVar3,puVar15[1]);
    if (iVar12 == 0) {
      iVar11 = 0x15;
      iVar12 = 0;
      goto LAB_0214b574;
    }
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar12 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c3b8 + 0x214b464)) {
          puVar15 = (undefined4 *)(iVar12 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b4b4;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c3b8 + 0x214b464),0);
LAB_0214b4b4:
    iVar12 = (*(code *)*puVar15)(piVar3,puVar15[1]);
    if (iVar12 == 0) {
      func_0x01384bf0();
    }
    uVar9 = *(undefined4 *)(iVar12 + 0x10);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar13 = func_0x01cccae0(iVar11,uVar9,0);
    if ((iVar13 == 0) && (iVar13 = func_0x02168818(*(undefined4 *)(iVar12 + 0x10),0), iVar13 == 0))
    break;
    func_0x0214c9b0(iVar2,iVar12,uVar14,auStack_28);
    iVar13 = *(int *)(iVar2 + 0x34);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    uVar9 = auStack_28[0];
    iVar13 = *(int *)(iVar13 + 0xc);
    uVar6 = *(undefined4 *)(iVar12 + 0xc);
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    func_0x03d6491c(iVar13,uVar6,uVar9,**(undefined4 **)(_UNK_0214c3d8 + 0x214b558));
  } while( true );
  uStack_68 = *(undefined4 *)(iVar12 + 0xc);
  uVar14 = func_0x01384988(*(undefined4 *)(_UNK_0214c3bc + 0x214bdb8));
  uVar14 = func_0x01384abc(uVar14,&uStack_68);
  uStack_48 = *(undefined4 *)(iVar12 + 0x10);
  uVar9 = func_0x01384988(*(undefined4 *)(_UNK_0214c3c0 + 0x214bdd8));
  uVar9 = func_0x01384abc(uVar9,&uStack_48);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uStack_4c = *(undefined4 *)(param_2 + 0x38);
  uVar6 = func_0x01384988(*(undefined4 *)(_UNK_0214c3c4 + 0x214be0c));
  uVar6 = func_0x01384abc(uVar6,&uStack_4c);
  uVar5 = func_0x01384988(*(undefined4 *)(_UNK_0214c3c8 + 0x214be24));
  uVar14 = func_0x02450228(uVar5,uVar14,uVar9,uVar6,0);
  iVar11 = func_0x01384988(*(undefined4 *)(_UNK_0214c3cc + 0x214be4c));
  if (*(int *)(iVar11 + 0x74) == 0) {
    func_0x01384ab4();
  }
  func_0x028c2944(uVar14,0);
  func_0x01384988(*(undefined4 *)(_UNK_0214c3d0 + 0x214be74));
  uVar9 = func_0x01384be4();
  func_0x0244f904(uVar9,uVar14,0);
  uVar14 = func_0x01384988(*(undefined4 *)(_UNK_0214c3d4 + 0x214be94));
  func_0x01384aa0(uVar9,uVar14);
  uVar18 = func_0x01384928();
  if ((int)((ulonglong)uVar18 >> 0x20) != 1) {
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
      uVar17 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar17 != 0) {
        piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar7[-1] == **(int **)(_UNK_0214c3ec + 0x214c1ac)) {
            puVar15 = (undefined4 *)(iVar2 + *piVar7 * 8 + 0xc0);
            goto LAB_0214c1f4;
          }
          uVar17 = uVar17 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar17 != 0);
      }
      puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c3ec + 0x214c1ac),0);
LAB_0214c1f4:
      (*(code *)*puVar15)(piVar3,puVar15[1]);
    }
    func_0x01459844((int)uVar18);
    func_0x01062280();
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar7 = (int *)func_0x0145b008((int)uVar18);
  iVar12 = *piVar7;
  iVar11 = 0;
  func_0x0145b0f8();
LAB_0214b574:
  if (piVar3 != (int *)0x0) {
    iVar13 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar13 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar13 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c3e0 + 0x214b590)) {
          puVar15 = (undefined4 *)(iVar13 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b5d8;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c3e0 + 0x214b590),0);
LAB_0214b5d8:
    (*(code *)*puVar15)(piVar3,puVar15[1]);
  }
  if (iVar12 != 0) {
    func_0x01384bec(iVar12);
  }
  if (iVar11 != 0x15 && iVar11 != 0) {
    return;
  }
  iVar11 = *(int *)(iVar2 + 0x34);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(iVar11 + 0xc);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x03d64e30(&uStack_68,iVar11,**(undefined4 **)(_UNK_0214c3e4 + 0x214b638));
  uStack_30 = (ulonglong)uStack_58;
  uStack_40 = uStack_68;
  iStack_3c = iStack_64;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  puVar15 = *(undefined4 **)(_UNK_0214c3e8 + 0x214b664);
  while (iVar11 = func_0x03f9b324(&uStack_40,*puVar15), iVar11 != 0) {
    iVar11 = (int)uStack_30;
    if ((int)uStack_30 == 0) {
      func_0x01384bf0();
    }
    func_0x02117bcc(iVar11,0);
  }
  func_0x03f9b464(&uStack_40,**(undefined4 **)(_UNK_0214c3f0 + 0x214b6a0));
  iVar12 = *(int *)(iVar2 + 0x34);
  iVar11 = *(int *)(iVar2 + 0x50);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  uVar14 = *(undefined4 *)(iVar12 + 0xc);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x02113ec4(iVar11,param_2,uVar14,0);
  iVar11 = *(int *)(iVar2 + 0x54);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x0214cca8(iVar11,param_2);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar11 = *(int *)(param_2 + 0x5c);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x0364c2b4(iVar11,**(undefined4 **)(_UNK_0214c3f8 + 0x214b728));
  do {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c428 + 0x214b750)) {
          puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b798;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c428 + 0x214b750),0);
LAB_0214b798:
    iVar11 = (*(code *)*puVar15)(piVar3,puVar15[1]);
    if (iVar11 == 0) {
      if (piVar3 == (int *)0x0) goto LAB_0214b9d8;
      iVar11 = *piVar3;
      uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
      if (uVar17 == 0) goto LAB_0214b96c;
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      break;
    }
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c400 + 0x214b7cc)) {
          puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
          goto LAB_0214b814;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c400 + 0x214b7cc),0);
LAB_0214b814:
    uVar14 = (*(code *)*puVar15)(piVar3,puVar15[1]);
    iVar11 = *(int *)(iVar2 + 0x34);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar11 + 0xc);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = func_0x03d66780(iVar11,uVar14,&uStack_44,**(undefined4 **)(_UNK_0214c404 + 0x214b854));
    uVar9 = uStack_44;
    if (iVar11 == 0) {
      uStack_68 = uVar14;
      uVar14 = func_0x01384988(*(undefined4 *)(_UNK_0214c408 + 0x214bccc));
      uVar14 = func_0x01384abc(uVar14,&uStack_68);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uStack_48 = *(undefined4 *)(param_2 + 0x38);
      uVar9 = func_0x01384988(*(undefined4 *)(_UNK_0214c40c + 0x214bd00));
      uVar9 = func_0x01384abc(uVar9,&uStack_48);
      uVar6 = func_0x01384988(*(undefined4 *)(_UNK_0214c410 + 0x214bd18));
      uVar14 = func_0x0244f690(uVar6,uVar14,uVar9,0);
      iVar2 = func_0x01384988(*(undefined4 *)(_UNK_0214c414 + 0x214bd38));
      if (*(int *)(iVar2 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2944(uVar14,0);
      func_0x01384988(*(undefined4 *)(_UNK_0214c418 + 0x214bd60));
      uVar9 = func_0x01384be4();
      func_0x0244f904(uVar9,uVar14,0);
      uVar14 = func_0x01384988(*(undefined4 *)(_UNK_0214c41c + 0x214bd80));
      func_0x01384aa0(uVar9,uVar14);
      func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar11 = *(int *)(iVar2 + 0x68);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar13 = *(int *)(iVar11 + 8);
    uVar17 = *(uint *)(iVar11 + 0xc);
    piVar7 = *(int **)(_UNK_0214c420 + 0x214b8a0);
    *(int *)(iVar11 + 0x10) = *(int *)(iVar11 + 0x10) + 1;
    iVar12 = *piVar7;
    if (iVar13 == 0) {
      func_0x01384bf0();
    }
    if (uVar17 < *(uint *)(iVar13 + 0xc)) {
      *(uint *)(iVar11 + 0xc) = uVar17 + 1;
      *(undefined4 *)(iVar13 + uVar17 * 4 + 0x10) = uVar9;
    }
    else {
      func_0x0328f170(iVar11,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x10) + 0x60) + 0x38))
      ;
    }
    iVar11 = *(int *)(iVar2 + 0x34);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    iVar11 = *(int *)(iVar11 + 0xc);
    if (iVar11 == 0) {
      func_0x01384bf0();
    }
    func_0x03d66094(iVar11,uVar14,**(undefined4 **)(_UNK_0214c424 + 0x214b910));
  } while( true );
  while( true ) {
    uVar17 = uVar17 - 1;
    piVar7 = piVar7 + 2;
    if (uVar17 == 0) break;
    if (piVar7[-1] == **(int **)(_UNK_0214c42c + 0x214b940)) {
      puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
      goto LAB_0214b9c8;
    }
  }
LAB_0214b96c:
  puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c42c + 0x214b940),0);
LAB_0214b9c8:
  (*(code *)*puVar15)(piVar3,puVar15[1]);
LAB_0214b9d8:
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar12 = *(int *)(iVar2 + 0x34);
  iVar11 = *(int *)(iVar2 + 0x4c);
  *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(param_2 + 0x18);
  if (iVar12 == 0) {
    func_0x01384bf0();
  }
  uVar14 = *(undefined4 *)(iVar12 + 0xc);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x020daf18(iVar11,uVar14,0);
  iVar11 = *(int *)(param_2 + 0x1c);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  piVar3 = (int *)func_0x0364c2b4(iVar11,**(undefined4 **)(_UNK_0214c430 + 0x214ba60));
  do {
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c43c + 0x214ba88)) {
          puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
          goto LAB_0214bb0c;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c43c + 0x214ba88),0);
LAB_0214bb0c:
    iVar11 = (*(code *)*puVar15)(piVar3,puVar15[1]);
    if (iVar11 == 0) break;
    if (piVar3 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar11 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c438 + 0x214bb40)) {
          puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
          goto LAB_0214bb90;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c438 + 0x214bb40),0);
LAB_0214bb90:
    uVar14 = (*(code *)*puVar15)(piVar3,puVar15[1]);
    func_0x02144c58(iVar2,uVar14,1);
  } while( true );
  if (piVar3 != (int *)0x0) {
    iVar11 = *piVar3;
    uVar17 = (uint)*(ushort *)(iVar11 + 0xb6);
    if (uVar17 != 0) {
      piVar7 = (int *)(*(int *)(iVar11 + 0x58) + 4);
      do {
        if (piVar7[-1] == **(int **)(_UNK_0214c440 + 0x214bbd4)) {
          puVar15 = (undefined4 *)(iVar11 + *piVar7 * 8 + 0xc0);
          goto LAB_0214bc24;
        }
        uVar17 = uVar17 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar17 != 0);
    }
    puVar15 = (undefined4 *)func_0x014002dc(piVar3,**(int **)(_UNK_0214c440 + 0x214bbd4),0);
LAB_0214bc24:
    (*(code *)*puVar15)(piVar3,puVar15[1]);
  }
  iVar11 = *(int *)(iVar2 + 0x58);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x02139c14(iVar11,param_2);
  iVar11 = *(int *)(iVar2 + 0x5c);
  if (iVar11 == 0) {
    func_0x01384bf0();
  }
  func_0x0215e864(iVar11,param_2,0);
  iVar2 = *(int *)(iVar2 + 0x60);
  if (iVar2 == 0) {
    func_0x01384bf0();
  }
  func_0x01db6ad4(iVar2,param_2,0);
  return;
}



// ===== FAT.RescueBoardActivity$$FillBoardData RVA 0x1af50e0 =====

/* WARNING: Possible PIC construction at 0x02147e04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02147e08) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b050e0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int unaff_r4;
  char *pcVar11;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar12;
  undefined4 uVar13;
  undefined4 unaff_r7;
  undefined4 *puVar14;
  undefined4 *unaff_r8;
  int unaff_r9;
  uint uVar15;
  int unaff_r10;
  undefined4 *puVar16;
  undefined4 unaff_lr;
  undefined8 uVar17;
  int iStack_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  uint uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  int aiStack_28 [4];
  
  iVar1 = func_0x0229f06c(0x8812,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0x3c);
    if (param_1 == 0) {
      return;
    }
    pcVar11 = (char *)(_UNK_0214881c + 0x2147b9c);
    if (*pcVar11 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02148820 + 0x2147bb0),param_2,0);
      func_0x01384978(*(undefined4 *)(_UNK_02148824 + 0x2147bbc));
      func_0x01384978(*(undefined4 *)(_UNK_02148828 + 0x2147bc8));
      func_0x01384978(*(undefined4 *)(_UNK_0214882c + 0x2147bd4));
      func_0x01384978(*(undefined4 *)(_UNK_02148830 + 0x2147be0));
      func_0x01384978(*(undefined4 *)(_UNK_02148834 + 0x2147bec));
      func_0x01384978(*(undefined4 *)(_UNK_02148838 + 0x2147bf8));
      func_0x01384978(*(undefined4 *)(_UNK_0214883c + 0x2147c04));
      func_0x01384978(*(undefined4 *)(_UNK_02148840 + 0x2147c10));
      func_0x01384978(*(undefined4 *)(_UNK_02148844 + 0x2147c1c));
      func_0x01384978(*(undefined4 *)(_UNK_02148848 + 0x2147c28));
      func_0x01384978(*(undefined4 *)(_UNK_0214884c + 0x2147c34));
      func_0x01384978(*(undefined4 *)(_UNK_02148850 + 0x2147c40));
      func_0x01384978(*(undefined4 *)(_UNK_02148854 + 0x2147c4c));
      func_0x01384978(*(undefined4 *)(_UNK_02148858 + 0x2147c58));
      func_0x01384978(*(undefined4 *)(_UNK_0214885c + 0x2147c64));
      func_0x01384978(*(undefined4 *)(_UNK_02148860 + 0x2147c70));
      func_0x01384978(*(undefined4 *)(_UNK_02148864 + 0x2147c7c));
      func_0x01384978(*(undefined4 *)(_UNK_02148868 + 0x2147c88));
      func_0x01384978(*(undefined4 *)(_UNK_0214886c + 0x2147c94));
      func_0x01384978(*(undefined4 *)(_UNK_02148870 + 0x2147ca0));
      func_0x01384978(*(undefined4 *)(_UNK_02148874 + 0x2147cac));
      func_0x01384978(*(undefined4 *)(_UNK_02148878 + 0x2147cb8));
      func_0x01384978(*(undefined4 *)(_UNK_0214887c + 0x2147cc4));
      func_0x01384978(*(undefined4 *)(_UNK_02148880 + 0x2147cd0));
      func_0x01384978(*(undefined4 *)(_UNK_02148884 + 0x2147cdc));
      func_0x01384978(*(undefined4 *)(_UNK_02148888 + 0x2147ce8));
      func_0x01384978(*(undefined4 *)(_UNK_0214888c + 0x2147cf4));
      func_0x01384978(*(undefined4 *)(_UNK_02148890 + 0x2147d00));
      func_0x01384978(*(undefined4 *)(_UNK_02148894 + 0x2147d0c));
      func_0x01384978(*(undefined4 *)(_UNK_02148898 + 0x2147d18));
      func_0x01384978(*(undefined4 *)(_UNK_0214889c + 0x2147d24));
      func_0x01384978(*(undefined4 *)(_UNK_021488a0 + 0x2147d30));
      func_0x01384978(*(undefined4 *)(_UNK_021488a4 + 0x2147d3c));
      func_0x01384978(*(undefined4 *)(_UNK_021488a8 + 0x2147d48));
      func_0x01384978(*(undefined4 *)(_UNK_021488ac + 0x2147d54));
      func_0x01384978(*(undefined4 *)(_UNK_021488b0 + 0x2147d60));
      func_0x01384978(*(undefined4 *)(_UNK_021488b4 + 0x2147d6c));
      *pcVar11 = '\x01';
    }
    uStack_94 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_90 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_8c = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_60 = 0;
    unaff_r8 = &uStack_38;
    uStack_78 = 0;
    aiStack_28[0] = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_38 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
    uStack_48 = 0;
    uStack_84 = uStack_94;
    uStack_80 = uStack_90;
    uStack_7c = uStack_8c;
    uStack_74 = uStack_94;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    uStack_5c = uStack_94;
    uStack_58 = uStack_90;
    uStack_54 = uStack_8c;
    uStack_44 = uStack_94;
    uStack_40 = uStack_90;
    uStack_3c = uStack_8c;
    uStack_34 = uStack_94;
    uStack_30 = uStack_90;
    uStack_2c = uStack_8c;
    iVar1 = func_0x0229f06c(0x5c6c,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar13 = *(undefined4 *)(iVar1 + 8);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      *(undefined4 *)(param_2 + 0x38) = uVar13;
      uVar17 = func_0x02140d24(param_1);
      uVar17 = func_0x01458584((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),1000,0);
      *(undefined8 *)(param_2 + 0x30) = uVar17;
      piVar2 = (int *)func_0x021566f4(0);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_021488b8 + 0x2147e74)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar9 * 8 + 0xc0);
            goto LAB_02147ebc;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_021488b8 + 0x2147e74),0);
LAB_02147ebc:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
      uVar13 = *(undefined4 *)(param_1 + 0x94);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(param_1 + 0x50);
      *(undefined4 *)(param_2 + 0x3c) = uVar13;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x021139b0(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 0x54);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02148958(iVar1,param_2);
      iVar1 = *(int *)(param_1 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02139e7c(iVar1,param_2);
      iVar1 = *(int *)(param_1 + 0x5c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0215ea7c(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 0x60);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01db6828(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 100);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02110804(iVar1,param_2,0);
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x020dc720(iVar1,aiStack_28,0);
      iVar1 = aiStack_28[0];
      iStack_b4 = param_2;
      if (iVar6 != 0) {
        if (aiStack_28[0] == 0) {
          func_0x01384bf0();
        }
        func_0x0325a3b4(&uStack_b0,iVar1,**(undefined4 **)(_UNK_021488bc + 0x2147fe8));
        uStack_38 = uStack_b0;
        uStack_34 = uStack_ac;
        uStack_30 = uStack_a8;
        uStack_2c = uStack_a4;
        puVar3 = *(undefined4 **)(_UNK_021488c0 + 0x2148004);
        puVar14 = *(undefined4 **)(_UNK_021488c4 + 0x214800c);
        while (iVar1 = func_0x03f597e0(unaff_r8,*puVar3), uVar7 = uStack_2c, iVar1 != 0) {
          iVar1 = *(int *)(param_2 + 0x6c);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          func_0x0364baf8(iVar1,uVar7,*puVar14);
        }
        func_0x03f597dc(&uStack_38,**(undefined4 **)(_UNK_021488c8 + 0x2148050));
      }
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x40);
      uVar17 = func_0x02140d24(param_1);
      uVar7 = *(uint *)(param_1 + 0x44);
      iVar1 = *(int *)(param_1 + 0x6c);
      uVar13 = *(undefined4 *)(param_1 + 0x90);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(param_2 + 0x44) = uVar13;
      uVar17 = func_0x01458584((uint)uVar17 - uVar7,
                               (int)((ulonglong)uVar17 >> 0x20) -
                               (((int)uVar7 >> 0x1f) + (uint)((uint)uVar17 < uVar7)),1000,0);
      *(undefined8 *)(param_2 + 0x10) = uVar17;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar1 + 0x10)) {
        iVar1 = *(int *)(param_1 + 0x6c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02454910(&uStack_b0,iVar1,**(undefined4 **)(_UNK_021488d0 + 0x21480dc));
        uVar7 = 0;
        uVar15 = 0;
        uStack_48 = uStack_b0;
        uStack_44 = uStack_ac;
        uStack_40 = uStack_a8;
        uStack_3c = uStack_a4;
        puVar3 = *(undefined4 **)(_UNK_021488d4 + 0x2148104);
        while (iVar1 = func_0x03f5a2cc(&uStack_48,*puVar3), iVar1 != 0) {
          uVar4 = uStack_3c & 0x3f;
          uVar8 = uVar4 - 0x20;
          uVar5 = 1 << uVar4;
          if (-1 < (int)uVar8) {
            uVar5 = 0;
          }
          uVar7 = uVar5 | uVar7;
          uVar5 = 1 >> (0x20 - uVar4 & 0xff);
          if (-1 < (int)uVar8) {
            uVar5 = 1 << (uVar8 & 0xff);
          }
          uVar15 = uVar5 | uVar15;
        }
        func_0x03f5a2c8(&uStack_48,**(undefined4 **)(_UNK_021488dc + 0x214814c));
        if (iStack_b4 == 0) {
          func_0x01384bf0();
        }
        *(uint *)(param_2 + 0x48) = uVar7;
        *(uint *)(param_2 + 0x4c) = uVar15;
      }
      iVar1 = *(int *)(param_1 + 0x9c);
      iStack_b8 = param_1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64e30(&uStack_b0,iVar1,**(undefined4 **)(_UNK_021488e4 + 0x2148190));
      uStack_60 = uStack_b0;
      uStack_5c = uStack_ac;
      uStack_58 = uStack_a8;
      uStack_54 = uStack_a4;
      uStack_50 = uStack_a0;
      puVar14 = *(undefined4 **)(_UNK_021488e8 + 0x21481bc);
      puVar3 = *(undefined4 **)(_UNK_021488ec + 0x21481c4);
      while (iVar1 = func_0x03f9b324(&uStack_60,*puVar14), uVar7 = uStack_54, iVar1 != 0) {
        iVar1 = (int)uStack_50;
        iVar12 = *(int *)(iStack_b4 + 0x50);
        iVar6 = func_0x01384be4(**(undefined4 **)(_UNK_021488f4 + 0x21481ec));
        func_0x01797598(iVar6,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x02148a58(iVar1);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        *(undefined4 *)(iVar6 + 0x10) = uVar13;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x02148aac(iVar1);
        *(undefined4 *)(iVar6 + 0xc) = uVar13;
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        func_0x03464bac(iVar12,uVar7,iVar6,*puVar3);
      }
      func_0x03f9b464(&uStack_60,**(undefined4 **)(_UNK_021488f8 + 0x214826c));
      iVar1 = *(int *)(iStack_b8 + 0x98);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d64e30(&uStack_b0,iVar1,**(undefined4 **)(_UNK_02148900 + 0x214829c));
      uStack_78 = uStack_b0;
      uStack_74 = uStack_ac;
      uStack_70 = uStack_a8;
      uStack_6c = uStack_a4;
      uStack_68 = uStack_a0;
      puVar3 = *(undefined4 **)(_UNK_02148904 + 0x21482c8);
      puVar14 = *(undefined4 **)(_UNK_02148908 + 0x21482d0);
      puVar16 = *(undefined4 **)(_UNK_0214890c + 0x21482d8);
      while (iVar1 = func_0x03f9b324(&uStack_78,*puVar3), uVar7 = uStack_6c, iVar1 != 0) {
        iVar1 = (int)uStack_68;
        uVar13 = func_0x01384be4(*puVar14);
        FUN_01798ae4(uVar13,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02148b00(iVar1,uVar13);
        iVar1 = *(int *)(iStack_b4 + 0x58);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x03464bac(iVar1,uVar7,uVar13,*puVar16);
      }
      func_0x03f9b464(&uStack_78,**(undefined4 **)(_UNK_02148914 + 0x2148354));
      iVar6 = iStack_b4;
      iVar1 = iStack_b8;
      uVar13 = **(undefined4 **)(_UNK_0214891c + 0x2148368);
      *(int *)(iStack_b8 + 0xa4) = iStack_b4;
      uVar13 = func_0x01384be4(uVar13);
      func_0x03ccb96c(uVar13,iVar1,**(undefined4 **)(_UNK_02148920 + 0x2148390),0);
      func_0x021475dc(iVar1,uVar13,0x7fffffff);
      iVar12 = *(int *)(iVar1 + 0x68);
      if (iVar12 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_b0,iVar12,**(undefined4 **)(_UNK_02148924 + 0x21483d0));
      uStack_88 = uStack_b0;
      uStack_84 = uStack_ac;
      uStack_80 = uStack_a8;
      uStack_7c = uStack_a4;
      puVar3 = *(undefined4 **)(_UNK_02148928 + 0x21483ec);
      puVar14 = *(undefined4 **)(_UNK_0214892c + 0x21483f4);
      while (iVar12 = func_0x03f5f428(&uStack_88,*puVar3), uVar7 = uStack_7c, iVar12 != 0) {
        iVar12 = *(int *)(iVar6 + 0x5c);
        if (uStack_7c == 0) {
          func_0x01384bf0();
        }
        uVar13 = func_0x0210e5f4(uVar7,0);
        if (iVar12 == 0) {
          func_0x01384bf0();
        }
        func_0x0364baf8(iVar12,uVar13,*puVar14);
      }
      func_0x03f5f424(&uStack_88,**(undefined4 **)(_UNK_02148934 + 0x2148454));
      iVar6 = *(int *)(iVar1 + 0x34);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0xc);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = func_0x03d6476c(iVar6,**(undefined4 **)(_UNK_0214893c + 0x2148488));
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x0382ab5c(&uStack_98,iVar6,**(undefined4 **)(_UNK_02148940 + 0x21484b4));
      puVar3 = *(undefined4 **)(_UNK_02148944 + 0x21484c8);
      while (iVar6 = func_0x03f9b9f8(&uStack_98,*puVar3), iVar6 != 0) {
        if (uStack_8c != 0) {
          func_0x02148de8(iVar1);
        }
      }
      func_0x03f9b9f4(&uStack_98,**(undefined4 **)(_UNK_0214894c + 0x21484fc));
      return;
    }
    iVar1 = func_0x0229f13c(0x5c6c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2147e08;
    unaff_r4 = iVar1;
    unaff_r9 = param_2;
    unaff_r10 = param_1;
    register0x00000054 = (BADSPACEBASE *)&iStack_b8;
  }
  else {
    iVar1 = func_0x0229f13c(0x8812,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(int *)((int)register0x00000054 + -8) = unaff_r10;
  *(int *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 **)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(undefined4 *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar6 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar6 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar6,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar13 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar10 = 3;
  if (iVar1 == 0) {
    uVar10 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar6,uVar13,(undefined1 *)((int)register0x00000054 + -0x38),uVar10);
  return;
}



// ===== FAT.RescueBoardActivity$$GetCurrentMergeBoardId RVA 0x1af5154 =====

undefined4 FUN_01b05154(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x8813,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8813,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245498c(&uStack_30,0,0);
    return uVar3;
  }
  iVar1 = FUN_01b04650(param_1);
  if (iVar1 != 0) {
    uVar3 = *(undefined4 *)(iVar1 + 0x14);
  }
  return uVar3;
}



// ===== FAT.RescueBoardActivity$$GetMainBoardIdList RVA 0x1af51bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b051bc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x8814,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8814,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_022065c0 + 0x22064e0);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022065c4 + 0x22064f4),param_1,0);
      *pcVar5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022065c8 + 0x22065b0));
    return uVar3;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x14);
  }
  return uVar3;
}



// ===== FAT.RescueBoardActivity$$GetLoopBoardIdList RVA 0x1af5220 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b05220(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x8815,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8815,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_022065c0 + 0x22064e0);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022065c4 + 0x22064f4),param_1,0);
      *pcVar5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022065c8 + 0x22065b0));
    return uVar3;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x2c);
  }
  return uVar3;
}



// ===== FAT.RescueBoardActivity$$TrySwitchToNextBoard RVA 0x1af5284 =====

/* WARNING: Removing unreachable block (ram,0x01b0575c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b05284(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar10 = (char *)(_UNK_01b05958 + 0x1b0529c);
  if (*pcVar10 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0595c + 0x1b052b0));
    func_0x01384978(*(undefined4 *)(_UNK_01b05960 + 0x1b052bc));
    func_0x01384978(*(undefined4 *)(_UNK_01b05964 + 0x1b052c8));
    func_0x01384978(*(undefined4 *)(_UNK_01b05968 + 0x1b052d4));
    func_0x01384978(*(undefined4 *)(_UNK_01b0596c + 0x1b052e0));
    func_0x01384978(*(undefined4 *)(_UNK_01b05970 + 0x1b052ec));
    func_0x01384978(*(undefined4 *)(_UNK_01b05974 + 0x1b052f8));
    func_0x01384978(*(undefined4 *)(_UNK_01b05978 + 0x1b05304));
    func_0x01384978(*(undefined4 *)(_UNK_01b0597c + 0x1b05310));
    func_0x01384978(*(undefined4 *)(_UNK_01b05980 + 0x1b0531c));
    *pcVar10 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_34 = 0;
  iStack_3c = 0;
  uStack_40 = 0;
  uStack_44 = 0;
  iVar1 = func_0x0229f06c(0x8816,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8816,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021742f8(iVar1,param_1,0);
    return uVar2;
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    return 0;
  }
  piVar11 = *(int **)(_UNK_01b05984 + 0x1b053a0);
  if (*(int *)(*piVar11 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x028c8d78(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  puVar12 = *(undefined4 **)(_UNK_01b05988 + 0x1b053e0);
  func_0x0302a45c(&uStack_30,iVar1,&uStack_34,*puVar12);
  func_0x01b059a8(param_1,uStack_34);
  if (*(int *)(*piVar11 + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar1 = func_0x028c8d78(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x0302a45c(&uStack_50,iVar1,&uStack_44,*puVar12);
  iStack_3c = iStack_4c;
  uStack_40 = uStack_50;
  func_0x01b05adc(param_1,uStack_44);
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0x14) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*(int *)(iVar1 + 0x14) + 0xc);
  }
  iVar8 = *(int *)(param_1 + 0x60) + 1;
  if (iVar8 < iVar3) {
LAB_01b054cc:
    *(int *)(param_1 + 0x60) = iVar8;
    iVar3 = func_0x01b05c10(param_1);
    if (iVar3 != 0) {
      iVar3 = FUN_01b04650(param_1);
      if (iVar3 != 0) {
        iVar1 = *(int *)(iVar3 + 0x30);
      }
      if (iVar3 != 0 && iVar1 != 0) {
        iVar8 = 0;
        puVar12 = *(undefined4 **)(_UNK_01b0598c + 0x1b0578c);
        puVar16 = *(undefined4 **)(_UNK_01b05990 + 0x1b05794);
        while( true ) {
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar1 + 0xc) <= iVar8) break;
          iVar1 = *(int *)(iVar3 + 0x30);
          iVar15 = *(int *)(param_1 + 100);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar2 = func_0x0364c9b8(iVar1,iVar8,*puVar12);
          if (iVar15 == 0) {
            func_0x01384bf0();
          }
          func_0x02450ca4(iVar15,uVar2,*puVar16);
          iVar1 = *(int *)(iVar3 + 0x30);
          iVar8 = iVar8 + 1;
        }
      }
    }
    FUN_01b047d4(param_1);
    iVar1 = FUN_01b05154(param_1);
    if (0 < iVar1) {
      FUN_01b04200(param_1,iVar1,1);
    }
    func_0x01b05cc4(param_1,uStack_44,uStack_34);
    func_0x01b05ddc(param_1);
    func_0x01b05eb4(param_1);
    func_0x01b0608c(param_1);
    FUN_01b048f0(param_1);
    if (*(int *)(**(int **)(_UNK_01b05994 + 0x1b05560) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01b05998 + 0x1b0557c));
    uVar13 = *(undefined4 *)(param_1 + 0x60);
    uVar2 = func_0x01b05c10(param_1);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x034a079c(iVar1,uVar13,uVar2,**(undefined4 **)(_UNK_01b0599c + 0x1b055ac));
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x18);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e2d040(iVar1,1,0);
    iVar3 = func_0x01b061d4(param_1);
    iVar8 = *(int *)(param_1 + 0x50);
    iVar1 = 0;
    if (iVar8 != 0) {
      iVar1 = *(int *)(iVar8 + 0x34);
    }
    iVar15 = 0;
    if (iVar8 != 0 && iVar1 != 0) {
      iStack_4c = 0;
      uStack_50 = 0;
      func_0x03507d38(&uStack_50,*(undefined4 *)(iVar1 + 0xc),
                      **(undefined4 **)(_UNK_01b059a0 + 0x1b05624));
      iVar15 = iStack_4c;
    }
    iVar1 = func_0x01b05c10(param_1);
    uVar2 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
      iVar8 = *(int *)(param_1 + 0x60);
      iVar1 = 0;
      if (*(int *)(param_1 + 0x50) != 0) {
        iVar9 = *(int *)(*(int *)(param_1 + 0x50) + 0x14);
        iVar1 = 0;
        if (iVar9 != 0) {
          iStack_4c = 0;
          uStack_50 = 0;
          func_0x03507d38(&uStack_50,*(undefined4 *)(iVar9 + 0xc),
                          **(undefined4 **)(_UNK_01b059a4 + 0x1b05688));
          iVar1 = iStack_4c;
        }
      }
      if (iVar1 <= iVar8 + 1) {
        uVar2 = 1;
      }
    }
    uVar13 = func_0x01b062d8(param_1);
    uVar4 = func_0x01b0633c(param_1);
    iVar1 = *(int *)(param_1 + 0x60);
    uVar5 = func_0x02c03e4c(uStack_34,0);
    uVar6 = func_0x02c03e4c(uStack_44,0);
    uVar7 = func_0x01b05c10(param_1);
    uVar14 = 1;
    func_0x02314888(param_1,iVar3 + 1,iVar15,uVar13,uVar4,iVar1 + 1,uVar5,uVar6,uVar2,uVar7,0);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0x2c) != 0) {
      iVar1 = *(int *)(param_1 + 0x50);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x2c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (0 < *(int *)(iVar1 + 0xc)) {
        iVar8 = *(int *)(param_1 + 0x60) + 1;
        goto LAB_01b054cc;
      }
    }
    uVar14 = 0;
  }
  func_0x028c98a0(&uStack_40,0);
  func_0x028c98a0(&uStack_30,0);
  return uVar14;
}



// ===== FAT.RescueBoardActivity$$CollectInheritItems RVA 0x1af59a8 =====

/* WARNING: Removing unreachable block (ram,0x021476c8) */
/* WARNING: Removing unreachable block (ram,0x021476d4) */
/* WARNING: Removing unreachable block (ram,0x021476d8) */
/* WARNING: Removing unreachable block (ram,0x021476f0) */
/* WARNING: Removing unreachable block (ram,0x021476fc) */
/* WARNING: Removing unreachable block (ram,0x02147700) */
/* WARNING: Removing unreachable block (ram,0x02147724) */
/* WARNING: Removing unreachable block (ram,0x02147738) */
/* WARNING: Removing unreachable block (ram,0x02147740) */
/* WARNING: Removing unreachable block (ram,0x02147758) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b059a8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01b05ac0 + 0x1b059c0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b05ac4 + 0x1b059d4));
    func_0x01384978(*(undefined4 *)(_UNK_01b05ac8 + 0x1b059e0));
    func_0x01384978(*(undefined4 *)(_UNK_01b05acc + 0x1b059ec));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8817,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8817,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b05ad0 + 0x1b05a48));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_1 + 0x3c);
  *(int *)(iVar1 + 8) = param_2;
  if (iVar3 != 0 && param_2 != 0) {
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01b05ad4 + 0x1b05a84));
    func_0x02450194(uVar5,iVar1,**(undefined4 **)(_UNK_01b05ad8 + 0x1b05aa0),0);
    pcVar4 = (char *)(_UNK_021477f8 + 0x21475fc);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021477fc + 0x2147610),uVar5,1,0);
      func_0x01384978(*(undefined4 *)(_UNK_02147800 + 0x214761c));
      func_0x01384978(*(undefined4 *)(_UNK_02147804 + 0x2147628));
      func_0x01384978(*(undefined4 *)(_UNK_02147808 + 0x2147634));
      *pcVar4 = '\x01';
    }
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_28 = 0;
    iVar1 = func_0x0229f06c(0xf44,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(iVar3 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x020dba14(iVar1,uVar5,0);
    }
    else {
      iVar1 = func_0x0229f13c(0xf44,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_30 = 0;
      func_0x021b6430(iVar1,iVar3,uVar5,1);
    }
    return;
  }
  return;
}



// ===== FAT.RescueBoardActivity$$CollectRewardBoxItems RVA 0x1af5adc =====

/* WARNING: Removing unreachable block (ram,0x021476a0) */
/* WARNING: Removing unreachable block (ram,0x021476ac) */
/* WARNING: Removing unreachable block (ram,0x021476b0) */
/* WARNING: Removing unreachable block (ram,0x021476c8) */
/* WARNING: Removing unreachable block (ram,0x021476d4) */
/* WARNING: Removing unreachable block (ram,0x021476d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b05adc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_01b05bf4 + 0x1b05af4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b05bf8 + 0x1b05b08));
    func_0x01384978(*(undefined4 *)(_UNK_01b05bfc + 0x1b05b14));
    func_0x01384978(*(undefined4 *)(_UNK_01b05c00 + 0x1b05b20));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x881a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x881a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    func_0x0245495c(iVar4,uVar7,&uStack_38,uVar3,0,0);
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b05c04 + 0x1b05b7c));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar4 = *(int *)(param_1 + 0x3c);
  *(int *)(iVar1 + 8) = param_2;
  if (iVar4 != 0 && param_2 != 0) {
    iVar2 = func_0x01384be4(**(undefined4 **)(_UNK_01b05c08 + 0x1b05bb8));
    func_0x02450194(iVar2,iVar1,**(undefined4 **)(_UNK_01b05c0c + 0x1b05bd4),0);
    pcVar5 = (char *)(_UNK_021477f8 + 0x21475fc);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021477fc + 0x2147610),iVar2,4,0);
      func_0x01384978(*(undefined4 *)(_UNK_02147800 + 0x214761c));
      func_0x01384978(*(undefined4 *)(_UNK_02147804 + 0x2147628));
      func_0x01384978(*(undefined4 *)(_UNK_02147808 + 0x2147634));
      *pcVar5 = '\x01';
    }
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_28 = 0;
    iVar1 = func_0x0229f06c(0xf44,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(iVar4 + 0x68);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0328fe1c(&uStack_28,iVar1,**(undefined4 **)(_UNK_0214780c + 0x2147714));
      puVar6 = *(undefined4 **)(_UNK_02147810 + 0x2147728);
      while (iVar1 = func_0x03f5f428(&uStack_28,*puVar6), iVar1 != 0) {
        if (iVar2 != 0) {
          (**(code **)(iVar2 + 0xc))
                    (*(undefined4 *)(iVar2 + 0x20),uStack_1c,*(undefined4 *)(iVar2 + 0x14));
        }
      }
      func_0x03f5f424(&uStack_28,**(undefined4 **)(_UNK_02147814 + 0x2147764));
    }
    else {
      iVar1 = func_0x0229f13c(0xf44,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_30 = 0;
      func_0x021b6430(iVar1,iVar4,iVar2,4);
    }
    return;
  }
  return;
}



// ===== FAT.RescueBoardActivity$$IsInCycleBoard RVA 0x1af5c10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b05c10(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01b05cbc + 0x1b05c24);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b05cc0 + 0x1b05c38));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x881d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x881d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar4,&uStack_30,uVar2,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x50) + 0x14);
    iVar5 = 0;
    uVar4 = 0;
    if (iVar1 != 0) {
      iVar5 = *(int *)(iVar1 + 0xc);
    }
    if (iVar5 <= *(int *)(param_1 + 0x60)) {
      uVar4 = 1;
    }
  }
  return uVar4;
}



// ===== FAT.RescueBoardActivity$$SendInheritRewardToBoard RVA 0x1af5cc4 =====

/* WARNING: Possible PIC construction at 0x01b05dac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01b05db0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b05cc4(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  char *pcStack_38;
  
  pcVar5 = (char *)(_UNK_01b05dcc + 0x1b05ce4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b05dd0 + 0x1b05cf8));
    *pcVar5 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x881e,0);
  if (iVar2 == 0) {
    if ((*(int *)(param_1 + 0x3c) != 0) &&
       (((param_2 != 0 &&
         (iVar2 = func_0x02450594(param_2,**(undefined4 **)(_UNK_01b05dd4 + 0x1b05d70)), iVar2 != 0)
         ) || ((param_3 != 0 &&
               (iVar2 = func_0x02450594(param_3,**(undefined4 **)(_UNK_01b05dd8 + 0x1b05d94)),
               iVar2 != 0)))))) {
      pcVar4 = (char *)(_UNK_01b0683c + 0x1b06594);
      iStack_44 = param_3;
      iStack_40 = param_1;
      iStack_3c = param_2;
      pcStack_38 = pcVar5;
      if (*pcVar4 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01b06840 + 0x1b065a8));
        func_0x01384978(*(undefined4 *)(_UNK_01b06844 + 0x1b065b4));
        func_0x01384978(*(undefined4 *)(_UNK_01b06848 + 0x1b065c0));
        func_0x01384978(*(undefined4 *)(_UNK_01b0684c + 0x1b065cc));
        func_0x01384978(*(undefined4 *)(_UNK_01b06850 + 0x1b065d8));
        func_0x01384978(*(undefined4 *)(_UNK_01b06854 + 0x1b065e4));
        func_0x01384978(*(undefined4 *)(_UNK_01b06858 + 0x1b065f0));
        *pcVar4 = '\x01';
      }
      uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      uStack_60 = 0;
      uStack_50 = 0;
      iVar2 = func_0x0229f06c(0x881f,0);
      if (iVar2 == 0) {
        iVar2 = 0;
        if (param_2 != 0) {
          iVar2 = *(int *)(param_1 + 0x3c);
        }
        if ((param_2 != 0 && iVar2 != 0) &&
           (iVar2 = func_0x02450594(param_2,**(undefined4 **)(_UNK_01b0685c + 0x1b06684)),
           iVar2 != 0)) {
          func_0x02450598(&uStack_78,param_2,**(undefined4 **)(_UNK_01b06860 + 0x1b066a8));
          uStack_60 = uStack_78;
          uStack_5c = uStack_74;
          uStack_58 = uStack_70;
          uStack_54 = uStack_6c;
          uStack_50 = uStack_68;
          while (iVar2 = func_0x01475638(&uStack_60,**(undefined4 **)(_UNK_01b06864 + 0x1b066d8)),
                uVar1 = uStack_54, iVar2 != 0) {
            iVar2 = (int)uStack_50;
            iVar3 = func_0x01c24918(0);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar3 = *(int *)(iVar3 + 0x38);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            iVar3 = func_0x01cccae0(iVar3,uVar1,0);
            if (iVar3 == 0) {
              cVar6 = '\0';
            }
            else {
              if (iVar3 == 0) {
                func_0x01384bf0();
              }
              cVar6 = *(char *)(iVar3 + 0x45);
            }
            if (0 < iVar2) {
              do {
                iVar3 = *(int *)(param_1 + 0x3c);
                if (iVar3 == 0) {
                  func_0x01384bf0();
                }
                func_0x02144c58(iVar3,uVar1,cVar6 != '\0',0);
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
          }
          func_0x0245059c(&uStack_60,**(undefined4 **)(_UNK_01b0686c + 0x1b06798));
        }
      }
      else {
        iVar2 = func_0x0229f13c(0x881f,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x02174108(iVar2,param_1,param_2,0);
      }
      return;
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x881e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174858(iVar2,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.RescueBoardActivity$$RefreshOutputMethod RVA 0x1af5ddc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b05ddc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_01b05eac + 0x1b05df0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b05eb0 + 0x1b05e04));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8820,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8820,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    return;
  }
  iVar1 = FUN_01b04650(param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar5 = *(int *)(iVar1 + 0x2c);
  if (*(int *)(iVar1 + 0x1c) != 0) {
    iVar2 = *(int *)(*(int *)(iVar1 + 0x1c) + 0xc);
    iVar1 = iVar5;
    if (0 < iVar5) {
      iVar1 = iVar2;
    }
    if (0 < iVar1) {
      uVar6 = 3;
      goto LAB_01b05ea4;
    }
    if (0 < iVar2) {
      uVar6 = 1;
      goto LAB_01b05ea4;
    }
  }
  if (iVar5 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 2;
  }
LAB_01b05ea4:
  *(undefined4 *)(param_1 + 0xd8) = uVar6;
  return;
}



// ===== FAT.RescueBoardActivity$$RefreshScoreEntity RVA 0x1af5eb4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b05eb4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar3 = (char *)(_UNK_01b06070 + 0x1b05ecc);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b06074 + 0x1b05ee0));
    func_0x01384978(*(undefined4 *)(_UNK_01b06078 + 0x1b05eec));
    func_0x01384978(*(undefined4 *)(_UNK_01b0607c + 0x1b05ef8));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8822,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xdc) != 0) {
      func_0x02af7520(*(int *)(param_1 + 0xdc),0);
    }
    iVar4 = func_0x01b0c7e8(param_1);
    iVar1 = 0;
    if (iVar4 != 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
    }
    if (((iVar4 != 0 && iVar1 != 0) && (iVar1 = FUN_01b04650(param_1), iVar1 != 0)) &&
       (0 < *(int *)(iVar1 + 0x2c))) {
      iVar4 = *(int *)(param_1 + 0xdc);
      if (iVar4 == 0) {
        iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_01b06080 + 0x1b05fb4));
        func_0x02afb3e0(iVar4,0);
        *(int *)(param_1 + 0xdc) = iVar4;
      }
      iVar5 = *(int *)(param_1 + 0x4c);
      uVar6 = *(undefined4 *)(param_1 + 0x5c);
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      piVar9 = *(int **)(_UNK_01b06084 + 0x1b05fe8);
      uVar8 = *(undefined4 *)(iVar1 + 0x2c);
      uVar2 = *(undefined4 *)(iVar5 + 0x50);
      iVar1 = *piVar9;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar9;
      }
      uVar7 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x378);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uStack_48 = **(undefined4 **)(_UNK_01b06088 + 0x1b06030);
      uStack_44 = 1;
      uStack_3c = 0x3f;
      uStack_30 = 0;
      uStack_2c = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_34 = 0;
      func_0x02af6c48(iVar4,uVar6,param_1,uVar2,uVar8,uVar7);
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x8822,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_30 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar4,uVar6,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.RescueBoardActivity$$RefreshSpawnBonusHandler RVA 0x1af608c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0608c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar7 = (char *)(_UNK_01b061c8 + 0x1b060a0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b061cc + 0x1b060b4));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8823,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8823,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar8 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar8,uVar10,&uStack_30,uVar5);
    return;
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar10 = *(undefined4 *)(param_1 + 0xe0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbba60(iVar1,uVar10,0);
  }
  iVar1 = func_0x01b0c788(param_1);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    uVar10 = func_0x01384be4(**(undefined4 **)(_UNK_01b061d0 + 0x1b06170));
    func_0x0215c81c(uVar10,param_1,0);
    *(undefined4 *)(param_1 + 0xe0) = uVar10;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x4c);
  piVar6 = *(int **)(param_1 + 0xe0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  pcVar7 = (char *)(_UNK_01dbba4c + 0x1dbb948);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01dbba50 + 0x1dbb95c),piVar6,0);
    func_0x01384978(*(undefined4 *)(_UNK_01dbba54 + 0x1dbb968));
    *pcVar7 = '\x01';
  }
  iVar8 = func_0x0229f06c(0x16b4,0);
  if (iVar8 != 0) {
    iVar8 = func_0x0229f13c(0x16b4,0);
    if (iVar8 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,piVar6,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar8 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar8 + 0x10),0);
    }
    func_0x01485278(&uStack_38,iVar1,0);
    func_0x01485278(&uStack_38,piVar6,0);
    iVar9 = *(int *)(iVar8 + 8);
    uVar10 = *(undefined4 *)(iVar8 + 0xc);
    iVar1 = *(int *)(iVar8 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar5,0,0);
    return;
  }
  iVar1 = func_0x02f6252c(*(undefined4 *)(iVar1 + 0x34),piVar6,
                          **(undefined4 **)(_UNK_01dbba58 + 0x1dbb9c8));
  if (piVar6 == (int *)0x0 || iVar1 == 0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01dbba5c + 0x1dbb9f0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xd0);
        goto LAB_01dbba38;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01dbba5c + 0x1dbb9f0),2);
LAB_01dbba38:
                    /* WARNING: Could not recover jumptable at 0x01dbba48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.RescueBoardActivity$$CalcMilestonePhase RVA 0x1af61d4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b061d4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_01b062c8 + 0x1b061e8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b062cc + 0x1b061fc));
    func_0x01384978(*(undefined4 *)(_UNK_01b062d0 + 0x1b06208));
    *pcVar4 = '\x01';
  }
  iVar5 = 0;
  iVar1 = func_0x0229f06c(0x2373,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x2373,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  uVar9 = func_0x01b0b78c(param_1,0);
  if ((int)uVar9 != 0) {
    iVar5 = 0;
    puVar6 = *(undefined4 **)(_UNK_01b062d4 + 0x1b0627c);
    do {
      iVar1 = (int)((ulonglong)uVar9 >> 0x20);
      iVar2 = *(int *)((int)uVar9 + 0x1c);
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0xc);
      }
      if (iVar2 == 0 || iVar1 == 0) {
        return iVar5;
      }
      iVar2 = func_0x0364c9b8(iVar2,0,*puVar6);
      bVar8 = SBORROW4(iVar2,1);
      iVar1 = iVar2 + -1;
      if (0 < iVar2) {
        bVar8 = SBORROW4(*(int *)(param_1 + 0x58),iVar2);
        iVar1 = *(int *)(param_1 + 0x58) - iVar2;
      }
      if (iVar1 < 0 != bVar8) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      uVar9 = func_0x01b0b78c(param_1,iVar5);
    } while ((int)uVar9 != 0);
  }
  return iVar5;
}



// ===== FAT.RescueBoardActivity$$get_EventDiff RVA 0x1af62d8 =====

undefined4 FUN_01b062d8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x8824,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8824,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245498c(&uStack_30,0,0);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x18);
  }
  return uVar3;
}



// ===== FAT.RescueBoardActivity$$get_BoardId RVA 0x1af633c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b0633c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_01b0641c + 0x1b06354);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b06420 + 0x1b06368));
    func_0x01384978(*(undefined4 *)(_UNK_01b06424 + 0x1b06374));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8825,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8825,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x0245498c(&uStack_30,0,0);
    return uVar5;
  }
  uStack_14 = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar1 = func_0x02139cf4(*(int *)(param_1 + 0x3c),0);
    uStack_14 = 0;
    if (iVar1 != 0) {
      uStack_14 = 0;
      uStack_18 = 0;
      func_0x03507d38(&uStack_18,*(undefined4 *)(iVar1 + 8),
                      **(undefined4 **)(_UNK_01b06428 + 0x1b063f4));
    }
  }
  return uStack_14;
}



// ===== FAT.RescueBoardActivity.<>c__DisplayClass29_0$$.ctor RVA 0x1af642c =====

void FUN_01b0642c(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.RescueBoardActivity.<>c__DisplayClass30_0$$.ctor RVA 0x1af6434 =====

void FUN_01b06434(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.RescueBoardActivity$$CollectBonusItems RVA 0x1af643c =====

/* WARNING: Removing unreachable block (ram,0x021476c8) */
/* WARNING: Removing unreachable block (ram,0x021476d4) */
/* WARNING: Removing unreachable block (ram,0x021476d8) */
/* WARNING: Removing unreachable block (ram,0x021476f0) */
/* WARNING: Removing unreachable block (ram,0x021476fc) */
/* WARNING: Removing unreachable block (ram,0x02147700) */
/* WARNING: Removing unreachable block (ram,0x02147724) */
/* WARNING: Removing unreachable block (ram,0x02147738) */
/* WARNING: Removing unreachable block (ram,0x02147740) */
/* WARNING: Removing unreachable block (ram,0x02147758) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0643c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_01b06554 + 0x1b06454);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b06558 + 0x1b06468));
    func_0x01384978(*(undefined4 *)(_UNK_01b0655c + 0x1b06474));
    func_0x01384978(*(undefined4 *)(_UNK_01b06560 + 0x1b06480));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8826,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8826,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b06564 + 0x1b064dc));
  func_0x0244f5a0(iVar1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar3 = *(int *)(param_1 + 0x3c);
  *(int *)(iVar1 + 8) = param_2;
  if (iVar3 != 0 && param_2 != 0) {
    uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01b06568 + 0x1b06518));
    func_0x02450194(uVar5,iVar1,**(undefined4 **)(_UNK_01b0656c + 0x1b06534),0);
    pcVar4 = (char *)(_UNK_021477f8 + 0x21475fc);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021477fc + 0x2147610),uVar5,1,0);
      func_0x01384978(*(undefined4 *)(_UNK_02147800 + 0x214761c));
      func_0x01384978(*(undefined4 *)(_UNK_02147804 + 0x2147628));
      func_0x01384978(*(undefined4 *)(_UNK_02147808 + 0x2147634));
      *pcVar4 = '\x01';
    }
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_28 = 0;
    iVar1 = func_0x0229f06c(0xf44,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(iVar3 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x020dba14(iVar1,uVar5,0);
    }
    else {
      iVar1 = func_0x0229f13c(0xf44,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uStack_30 = 0;
      func_0x021b6430(iVar1,iVar3,uVar5,1);
    }
    return;
  }
  return;
}



// ===== FAT.RescueBoardActivity.<>c__DisplayClass31_0$$.ctor RVA 0x1af6570 =====

void FUN_01b06570(undefined4 param_1)

{
  (*(code *)0x4874ed4)(param_1,0);
  return;
}



// ===== FAT.RescueBoardActivity$$AppendItemsToRewardList RVA 0x1af6578 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b06578(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar4 = (char *)(_UNK_01b0683c + 0x1b06594);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b06840 + 0x1b065a8));
    func_0x01384978(*(undefined4 *)(_UNK_01b06844 + 0x1b065b4));
    func_0x01384978(*(undefined4 *)(_UNK_01b06848 + 0x1b065c0));
    func_0x01384978(*(undefined4 *)(_UNK_01b0684c + 0x1b065cc));
    func_0x01384978(*(undefined4 *)(_UNK_01b06850 + 0x1b065d8));
    func_0x01384978(*(undefined4 *)(_UNK_01b06854 + 0x1b065e4));
    func_0x01384978(*(undefined4 *)(_UNK_01b06858 + 0x1b065f0));
    *pcVar4 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar2 = func_0x0229f06c(0x881f,0);
  if (iVar2 == 0) {
    iVar2 = 0;
    if (param_2 != 0) {
      iVar2 = *(int *)(param_1 + 0x3c);
    }
    if ((param_2 != 0 && iVar2 != 0) &&
       (iVar2 = func_0x02450594(param_2,**(undefined4 **)(_UNK_01b0685c + 0x1b06684)), iVar2 != 0))
    {
      func_0x02450598(&uStack_58,param_2,**(undefined4 **)(_UNK_01b06860 + 0x1b066a8));
      uStack_40 = uStack_58;
      uStack_3c = uStack_54;
      uStack_38 = uStack_50;
      uStack_34 = uStack_4c;
      uStack_30 = uStack_48;
      while (iVar2 = func_0x01475638(&uStack_40,**(undefined4 **)(_UNK_01b06864 + 0x1b066d8)),
            uVar1 = uStack_34, iVar2 != 0) {
        iVar2 = (int)uStack_30;
        iVar3 = func_0x01c24918(0);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = *(int *)(iVar3 + 0x38);
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        iVar3 = func_0x01cccae0(iVar3,uVar1,0);
        if (iVar3 == 0) {
          cVar5 = '\0';
        }
        else {
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          cVar5 = *(char *)(iVar3 + 0x45);
        }
        if (0 < iVar2) {
          do {
            iVar3 = *(int *)(param_1 + 0x3c);
            if (iVar3 == 0) {
              func_0x01384bf0();
            }
            func_0x02144c58(iVar3,uVar1,cVar5 != '\0',0);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      func_0x0245059c(&uStack_40,**(undefined4 **)(_UNK_01b0686c + 0x1b06798));
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x881f,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar2,param_1,param_2,0);
  }
  return;
}



// ===== FAT.RescueBoardActivity$$HasNextBoard RVA 0x1af6874 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01b06874(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01b06948 + 0x1b06888);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0694c + 0x1b0689c));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x5f19,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x50);
    if (iVar1 != 0) {
      uVar4 = 1;
      if (*(int *)(iVar1 + 0x14) == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(*(int *)(iVar1 + 0x14) + 0xc);
      }
      if (iVar5 <= *(int *)(param_1 + 0x60) + 1) {
        if (*(int *)(iVar1 + 0x2c) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (uint)(0 < *(int *)(*(int *)(iVar1 + 0x2c) + 0xc));
        }
      }
    }
    return uVar4;
  }
  iVar1 = func_0x0229f13c(0x5f19,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar5 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
  uVar4 = func_0x0245496c(&uStack_30,0,0);
  return uVar4;
}



// ===== FAT.RescueBoardActivity$$GetCurBoardIndex RVA 0x1af6950 =====

undefined4 FUN_01b06950(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8829,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8829,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x60);
}



// ===== FAT.RescueBoardActivity$$GetCloudConfig RVA 0x1af69a4 =====

/* WARNING: Removing unreachable block (ram,0x01b06c9c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b069a4(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  bool bVar13;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar8 = (char *)(_UNK_01b06d7c + 0x1b069bc);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b06d80 + 0x1b069d0));
    func_0x01384978(*(undefined4 *)(_UNK_01b06d84 + 0x1b069dc));
    func_0x01384978(*(undefined4 *)(_UNK_01b06d88 + 0x1b069e8));
    func_0x01384978(*(undefined4 *)(_UNK_01b06d8c + 0x1b069f4));
    func_0x01384978(*(undefined4 *)(_UNK_01b06d90 + 0x1b06a00));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x882a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x882a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_0225ca88 + 0x225c994);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0225ca8c + 0x225c9a8),param_1,param_2,0);
      *pcVar8 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar10 = *(int *)(iVar1 + 8);
    uVar11 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar10 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 3;
    if (iVar1 == 0) {
      uVar7 = 2;
    }
    func_0x0245495c(iVar10,uVar11,&uStack_38,uVar7,0,0);
    iVar1 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0225ca90 + 0x225ca78));
    return iVar1;
  }
  iVar10 = 0;
  iVar1 = func_0x01855d70(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  piVar2 = (int *)func_0x03465360(iVar1,**(undefined4 **)(_UNK_01b06d94 + 0x1b06a78));
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
    uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01b06d98 + 0x1b06a9c)) {
          puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto LAB_01b06ae4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b06d98 + 0x1b06a9c),0);
LAB_01b06ae4:
    piVar2 = (int *)(*(code *)*puVar3)(piVar2,puVar3[1]);
    piVar12 = *(int **)(_UNK_01b06d9c + 0x1b06b04);
    piVar5 = *(int **)(_UNK_01b06da0 + 0x1b06b0c);
    do {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar12) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01b06b64;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0);
LAB_01b06b64:
      iVar1 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar1 == 0) {
        iVar10 = 0;
        break;
      }
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar5) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01b06bd8;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar5,0);
LAB_01b06bd8:
      iVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (iVar10 == 0) {
        func_0x01384bf0();
      }
      iVar9 = *(int *)(iVar10 + 0x14);
      iVar1 = FUN_01b0633c(param_1);
      bVar13 = iVar9 != iVar1;
      if (!bVar13) {
        iVar1 = *(int *)(iVar10 + 0x18);
      }
    } while (bVar13 || iVar1 != param_2);
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_01b06da4 + 0x1b06c3c)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto LAB_01b06c84;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b06da4 + 0x1b06c3c),0);
LAB_01b06c84:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
  }
  return iVar10;
}



// ===== FAT.RescueBoardActivity$$FAT.Merge.IExternalOutput.CanUseItem RVA 0x1af6dac =====

uint FUN_01b06dac(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x882b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x882b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
    uVar4 = func_0x0245496c(&uStack_38,0,0);
    return uVar4;
  }
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if (iVar1 != 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 0;
    iVar1 = func_0x02116990(param_2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar1 + 0x10);
    iVar1 = func_0x01b06e74(param_1);
    if (iVar3 == iVar1) {
      uVar4 = func_0x01b06edc(param_1);
      uVar4 = uVar4 ^ 1;
    }
  }
  return uVar4;
}



// ===== FAT.RescueBoardActivity$$GetCurRescueItemId RVA 0x1af6e74 =====

undefined4 FUN_01b06e74(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x882c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x882c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245498c(&uStack_30,0,0);
    return uVar3;
  }
  iVar1 = FUN_01b04650(param_1);
  if (iVar1 != 0) {
    uVar3 = *(undefined4 *)(iVar1 + 0x18);
  }
  return uVar3;
}



// ===== FAT.RescueBoardActivity$$IsCurrentStageAllTargetCleared RVA 0x1af6edc =====

/* WARNING: Removing unreachable block (ram,0x01b07134) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01b06edc(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar8 = (char *)(_UNK_01b0720c + 0x1b06ef0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b07210 + 0x1b06f04));
    func_0x01384978(*(undefined4 *)(_UNK_01b07214 + 0x1b06f10));
    func_0x01384978(*(undefined4 *)(_UNK_01b07218 + 0x1b06f1c));
    func_0x01384978(*(undefined4 *)(_UNK_01b0721c + 0x1b06f28));
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x882d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x882d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar7 = 2;
    if (iVar1 == 0) {
      uVar7 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar7,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar9 = FUN_01b04650(param_1);
  uVar4 = 1;
  iVar1 = 0;
  if (iVar9 != 0) {
    iVar1 = *(int *)(iVar9 + 0x30);
  }
  if (iVar9 != 0 && iVar1 != 0) {
    piVar2 = (int *)func_0x0364c2b4(iVar1,**(undefined4 **)(_UNK_01b07220 + 0x1b06fa4));
    piVar12 = *(int **)(_UNK_01b07224 + 0x1b06fb8);
    piVar11 = *(int **)(_UNK_01b07228 + 0x1b06fc0);
    do {
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar4 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar4 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar12) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01b07018;
          }
          uVar4 = uVar4 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar12,0);
LAB_01b07018:
      uVar4 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      if (uVar4 == 0) break;
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == *piVar11) {
            puVar3 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto LAB_01b07090;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,*piVar11,0);
LAB_01b07090:
      uVar10 = (*(code *)*puVar3)(piVar2,puVar3[1]);
      iVar1 = FUN_01b046cc(param_1,uVar10);
    } while (iVar1 != 0);
    uVar4 = uVar4 ^ 1;
    if (piVar2 != (int *)0x0) {
      iVar1 = *piVar2;
      uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar5 != 0) {
        piVar11 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar11[-1] == **(int **)(_UNK_01b0722c + 0x1b070d4)) {
            puVar3 = (undefined4 *)(iVar1 + *piVar11 * 8 + 0xc0);
            goto LAB_01b0711c;
          }
          uVar5 = uVar5 - 1;
          piVar11 = piVar11 + 2;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined4 *)func_0x014002dc(piVar2,**(int **)(_UNK_01b0722c + 0x1b070d4),0);
LAB_01b0711c:
      (*(code *)*puVar3)(piVar2,puVar3[1]);
    }
  }
  return uVar4;
}



// ===== FAT.RescueBoardActivity$$FAT.Merge.IExternalOutput.TrySpawnItem RVA 0x1af7234 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b07234(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined4 uStack_24;
  
  pcVar8 = (char *)(_UNK_01b07330 + 0x1b07254);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b07334 + 0x1b0726c));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x882e,0);
  if (iVar2 == 0) {
    *param_4 = 0;
    *param_3 = 0xffffffff;
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02feb4f8(param_2,0,**(undefined4 **)(_UNK_01b07338 + 0x1b072f0));
    if ((iVar2 != 0) && (iVar2 = func_0x0211b24c(iVar2,0), iVar2 != 0)) {
      pcVar8 = (char *)(_UNK_01b075d4 + 0x1b07358);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01b075d8 + 0x1b0736c));
        func_0x01384978(*(undefined4 *)(_UNK_01b075dc + 0x1b07378));
        func_0x01384978(*(undefined4 *)(_UNK_01b075e0 + 0x1b07384));
        func_0x01384978(*(undefined4 *)(_UNK_01b075e4 + 0x1b07390));
        func_0x01384978(*(undefined4 *)(_UNK_01b075e8 + 0x1b0739c));
        func_0x01384978(*(undefined4 *)(_UNK_01b075ec + 0x1b073a8));
        func_0x01384978(*(undefined4 *)(_UNK_01b075f0 + 0x1b073b4));
        *pcVar8 = '\x01';
      }
      uVar3 = 0;
      puStack_28 = (undefined4 *)0x0;
      iVar2 = func_0x0229f06c(0x882f,0);
      if (iVar2 == 0) {
        iVar2 = func_0x01b07610(param_1);
        if (0 < iVar2) {
          uVar3 = 0;
          iVar4 = func_0x01816d10(iVar2,0);
          if (iVar4 != 0) {
            iVar6 = *(int *)(param_1 + 100);
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x02450590(iVar6,iVar2,&puStack_28,**(undefined4 **)(_UNK_01b075f4 + 0x1b07460));
            iVar6 = *(int *)(param_1 + 100);
            puVar7 = (undefined4 *)((int)puStack_28 + 1);
            puStack_28 = puVar7;
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            func_0x0245025c(iVar6,iVar2,puVar7,**(undefined4 **)(_UNK_01b075f8 + 0x1b07498));
            iVar6 = *(int *)(param_1 + 0x68);
            uStack_2c = 0;
            uStack_30 = 0;
            func_0x038fd264(&uStack_30,iVar2,(int)puStack_28 + -1,
                            **(undefined4 **)(_UNK_01b075fc + 0x1b074b0));
            if (iVar6 == 0) {
              func_0x01384bf0();
            }
            uVar1 = uStack_2c;
            uVar3 = uStack_30;
            iVar9 = *(int *)(iVar6 + 8);
            uVar10 = *(uint *)(iVar6 + 0xc);
            piVar5 = *(int **)(_UNK_01b07600 + 0x1b07504);
            *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
            iVar11 = *piVar5;
            if (iVar9 == 0) {
              func_0x01384bf0();
            }
            if (uVar10 < *(uint *)(iVar9 + 0xc)) {
              *(uint *)(iVar6 + 0xc) = uVar10 + 1;
              iVar9 = iVar9 + uVar10 * 8;
              *(undefined4 *)(iVar9 + 0x10) = uVar3;
              *(undefined4 *)(iVar9 + 0x14) = uVar1;
            }
            else {
              func_0x024501b4(iVar6,uVar3,uVar1,
                              *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
            }
            if (*(int *)(iVar4 + 0x14) <= (int)puStack_28) {
              func_0x01b07900(param_1,iVar2);
            }
            if (*(int *)(**(int **)(_UNK_01b07604 + 0x1b07578) + 0x74) == 0) {
              func_0x01384ab4();
            }
            iVar4 = func_0x0300d558(**(undefined4 **)(_UNK_01b07608 + 0x1b07594));
            if (iVar4 == 0) {
              func_0x01384bf0();
            }
            func_0x034a0e54(iVar4,iVar2,param_2,**(undefined4 **)(_UNK_01b0760c + 0x1b075bc));
            uVar3 = 1;
          }
        }
      }
      else {
        iVar2 = func_0x0229f13c(0x882f,0);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x021734d8(iVar2,param_1,param_2,0);
      }
      return uVar3;
    }
    uVar3 = 0;
  }
  else {
    iVar2 = func_0x0229f13c(0x882e,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0;
    puStack_28 = param_4;
    uVar3 = func_0x022365c4(iVar2,param_1,param_2,param_3);
  }
  return uVar3;
}



// ===== FAT.RescueBoardActivity$$TryUseFirecracker RVA 0x1af733c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b0733c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar5 = (char *)(_UNK_01b075d4 + 0x1b07358);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b075d8 + 0x1b0736c));
    func_0x01384978(*(undefined4 *)(_UNK_01b075dc + 0x1b07378));
    func_0x01384978(*(undefined4 *)(_UNK_01b075e0 + 0x1b07384));
    func_0x01384978(*(undefined4 *)(_UNK_01b075e4 + 0x1b07390));
    func_0x01384978(*(undefined4 *)(_UNK_01b075e8 + 0x1b0739c));
    func_0x01384978(*(undefined4 *)(_UNK_01b075ec + 0x1b073a8));
    func_0x01384978(*(undefined4 *)(_UNK_01b075f0 + 0x1b073b4));
    *pcVar5 = '\x01';
  }
  uVar6 = 0;
  iStack_28 = 0;
  iVar2 = func_0x0229f06c(0x882f,0);
  if (iVar2 == 0) {
    iVar2 = func_0x01b07610(param_1);
    if (0 < iVar2) {
      uVar6 = 0;
      iVar3 = func_0x01816d10(iVar2,0);
      if (iVar3 != 0) {
        iVar7 = *(int *)(param_1 + 100);
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        func_0x02450590(iVar7,iVar2,&iStack_28,**(undefined4 **)(_UNK_01b075f4 + 0x1b07460));
        iVar8 = *(int *)(param_1 + 100);
        iVar7 = iStack_28 + 1;
        iStack_28 = iVar7;
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        func_0x0245025c(iVar8,iVar2,iVar7,**(undefined4 **)(_UNK_01b075f8 + 0x1b07498));
        iVar7 = *(int *)(param_1 + 0x68);
        uStack_2c = 0;
        uStack_30 = 0;
        func_0x038fd264(&uStack_30,iVar2,iStack_28 + -1,**(undefined4 **)(_UNK_01b075fc + 0x1b074b0)
                       );
        if (iVar7 == 0) {
          func_0x01384bf0();
        }
        uVar1 = uStack_2c;
        uVar6 = uStack_30;
        iVar8 = *(int *)(iVar7 + 8);
        uVar9 = *(uint *)(iVar7 + 0xc);
        piVar4 = *(int **)(_UNK_01b07600 + 0x1b07504);
        *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
        iVar10 = *piVar4;
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        if (uVar9 < *(uint *)(iVar8 + 0xc)) {
          *(uint *)(iVar7 + 0xc) = uVar9 + 1;
          iVar8 = iVar8 + uVar9 * 8;
          *(undefined4 *)(iVar8 + 0x10) = uVar6;
          *(undefined4 *)(iVar8 + 0x14) = uVar1;
        }
        else {
          func_0x024501b4(iVar7,uVar6,uVar1,
                          *(undefined4 *)(*(int *)(*(int *)(iVar10 + 0x10) + 0x60) + 0x38));
        }
        if (*(int *)(iVar3 + 0x14) <= iStack_28) {
          func_0x01b07900(param_1,iVar2);
        }
        if (*(int *)(**(int **)(_UNK_01b07604 + 0x1b07578) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar3 = func_0x0300d558(**(undefined4 **)(_UNK_01b07608 + 0x1b07594));
        if (iVar3 == 0) {
          func_0x01384bf0();
        }
        func_0x034a0e54(iVar3,iVar2,param_2,**(undefined4 **)(_UNK_01b0760c + 0x1b075bc));
        uVar6 = 1;
      }
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x882f,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uVar6 = func_0x021734d8(iVar2,param_1,param_2,0);
  }
  return uVar6;
}



// ===== FAT.RescueBoardActivity$$SelectTargetId RVA 0x1af7610 =====

/* WARNING: Possible PIC construction at 0x01b0776c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01b07770) */
/* WARNING: Removing unreachable block (ram,0x01b07788) */
/* WARNING: Removing unreachable block (ram,0x01b0779c) */
/* WARNING: Removing unreachable block (ram,0x01b077b0) */
/* WARNING: Removing unreachable block (ram,0x01b077bc) */
/* WARNING: Removing unreachable block (ram,0x01b077c0) */
/* WARNING: Removing unreachable block (ram,0x01b077c4) */
/* WARNING: Removing unreachable block (ram,0x01b077d4) */
/* WARNING: Removing unreachable block (ram,0x01b077e0) */
/* WARNING: Removing unreachable block (ram,0x01b077e8) */
/* WARNING: Removing unreachable block (ram,0x01b077ec) */
/* WARNING: Removing unreachable block (ram,0x01b07878) */
/* WARNING: Removing unreachable block (ram,0x01b07890) */
/* WARNING: Removing unreachable block (ram,0x01b0789c) */
/* WARNING: Removing unreachable block (ram,0x01b078a8) */
/* WARNING: Removing unreachable block (ram,0x01b078b4) */
/* WARNING: Removing unreachable block (ram,0x01b077f8) */
/* WARNING: Removing unreachable block (ram,0x01b07804) */
/* WARNING: Removing unreachable block (ram,0x01b07808) */
/* WARNING: Removing unreachable block (ram,0x01b0783c) */
/* WARNING: Removing unreachable block (ram,0x01b07840) */
/* WARNING: Removing unreachable block (ram,0x01b07854) */
/* WARNING: Removing unreachable block (ram,0x01b07860) */
/* WARNING: Removing unreachable block (ram,0x01b07864) */
/* WARNING: Removing unreachable block (ram,0x01b07868) */
/* WARNING: Removing unreachable block (ram,0x01b0786c) */
/* WARNING: Removing unreachable block (ram,0x01b077c8) */
/* WARNING: Removing unreachable block (ram,0x01b078bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b07610(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 extraout_r2;
  undefined4 uVar4;
  int extraout_r3;
  char *unaff_r4;
  char *pcVar5;
  undefined4 unaff_r5;
  int iVar6;
  undefined4 *unaff_r6;
  undefined4 uVar7;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r11;
  undefined1 *puVar8;
  undefined4 unaff_lr;
  longlong lVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  puVar8 = auStack_38;
  pcVar5 = (char *)(_UNK_01b078d0 + 0x1b07628);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b078d4 + 0x1b0763c));
    func_0x01384978(*(undefined4 *)(_UNK_01b078d8 + 0x1b07648));
    func_0x01384978(*(undefined4 *)(_UNK_01b078dc + 0x1b07654));
    func_0x01384978(*(undefined4 *)(_UNK_01b078e0 + 0x1b07660));
    func_0x01384978(*(undefined4 *)(_UNK_01b078e4 + 0x1b0766c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8830,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8830,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    iStack_28 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    iStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  iVar1 = FUN_01b04650(param_1);
  if (iVar1 != 0) {
    pcVar5 = *(char **)(iVar1 + 0x30);
  }
  if (iVar1 == 0 || pcVar5 == (char *)0x0) {
    return -1;
  }
  if (*(int *)(pcVar5 + 0xc) == 1) {
    uVar7 = **(undefined4 **)(_UNK_01b078ec + 0x1b07700);
    param_1 = unaff_r5;
    puVar8 = (undefined1 *)register0x00000054;
  }
  else {
    unaff_r7 = 0;
    uStack_2c = 0x7fffffff;
    uStack_30 = 0xffffffff;
    unaff_r6 = *(undefined4 **)(_UNK_01b078e8 + 0x1b07734);
    iStack_28 = -1;
    uStack_34 = param_1;
    if (pcVar5 == (char *)0x0) {
      func_0x01384bf0();
    }
    if (*(int *)(pcVar5 + 0xc) < 1) {
      return iStack_28;
    }
    pcVar5 = *(char **)(iVar1 + 0x30);
    if (pcVar5 == (char *)0x0) {
      func_0x01384bf0();
    }
    uVar7 = *unaff_r6;
    unaff_lr = 0x1b07770;
    unaff_r4 = pcVar5;
  }
  *(undefined4 *)(puVar8 + -4) = unaff_lr;
  *(undefined4 *)(puVar8 + -8) = unaff_r11;
  *(undefined4 *)(puVar8 + -0xc) = param_1;
  *(char **)(puVar8 + -0x10) = unaff_r4;
  if (0 < *(int *)(pcVar5 + 0xc)) {
    iVar1 = *(int *)(pcVar5 + 8);
    if (iVar1 == 0) {
      func_0x02457d50();
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
      func_0x02457d5c();
    }
    return *(int *)(iVar1 + 0x10);
  }
  func_0x02457d6c(*(undefined4 *)(iRam0364ca44 + 0x364ca10));
  uVar4 = func_0x02457d58();
  uVar2 = func_0x02457d6c(*(undefined4 *)(iRam0364ca48 + 0x364ca24));
  func_0x047901e8(uVar4,uVar2,0);
  func_0x02457d90(uVar4,uVar7);
  lVar9 = func_0x02457d94();
  uVar3 = (uint)((ulonglong)lVar9 >> 0x20);
  *(undefined4 *)(puVar8 + -0x14) = 0x364ca44;
  *(undefined4 *)(puVar8 + -0x18) = unaff_r8;
  *(undefined4 *)(puVar8 + -0x1c) = unaff_r7;
  *(undefined4 **)(puVar8 + -0x20) = unaff_r6;
  *(undefined4 *)(puVar8 + -0x24) = uVar4;
  *(undefined4 *)(puVar8 + -0x28) = uVar7;
  pcVar5 = (char *)(iRam0364cb28 + 0x364ca68);
  if (*pcVar5 == '\0') {
    func_0x02457d54(*(undefined4 *)(iRam0364cb2c + 0x364ca80));
    *pcVar5 = '\x01';
  }
  if ((-1 < lVar9) && ((int)uVar3 < *(int *)((int)lVar9 + 0xc))) {
    func_0x03031db0(extraout_r2,**(undefined4 **)(iRam0364cb30 + 0x364cab0),
                    *(undefined4 *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x80));
    iVar1 = *(int *)((int)lVar9 + 8);
    if (iVar1 == 0) {
      func_0x02457d50();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar3) {
      func_0x02457d5c();
    }
    iVar1 = iVar1 + uVar3 * 4;
    *(undefined4 *)(iVar1 + 0x10) = extraout_r2;
    return iVar1;
  }
  func_0x02457d6c(*(undefined4 *)(iRam0364cb34 + 0x364caf4));
  uVar7 = func_0x02457d58();
  uVar4 = func_0x02457d6c(*(undefined4 *)(iRam0364cb38 + 0x364cb08));
  func_0x047901e8(uVar7,uVar4,0);
  func_0x02457d90(uVar7,extraout_r3);
  func_0x02457d94();
  return 0;
}



// ===== FAT.RescueBoardActivity$$OnTargetCleared RVA 0x1af7900 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b07900(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar12 = (char *)(_UNK_01b07f8c + 0x1b07920);
  if (*pcVar12 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b07f90 + 0x1b07934));
    func_0x01384978(*(undefined4 *)(_UNK_01b07f94 + 0x1b07940));
    func_0x01384978(*(undefined4 *)(_UNK_01b07f98 + 0x1b0794c));
    func_0x01384978(*(undefined4 *)(_UNK_01b07f9c + 0x1b07958));
    func_0x01384978(*(undefined4 *)(_UNK_01b07fa0 + 0x1b07964));
    func_0x01384978(*(undefined4 *)(_UNK_01b07fa4 + 0x1b07970));
    func_0x01384978(*(undefined4 *)(_UNK_01b07fa8 + 0x1b0797c));
    func_0x01384978(*(undefined4 *)(_UNK_01b07fac + 0x1b07988));
    func_0x01384978(*(undefined4 *)(_UNK_01b07fb0 + 0x1b07994));
    func_0x01384978(*(undefined4 *)(_UNK_01b07fb4 + 0x1b079a0));
    func_0x01384978(*(undefined4 *)(_UNK_01b07fb8 + 0x1b079ac));
    func_0x01384978(*(undefined4 *)(_UNK_01b07fbc + 0x1b079b8));
    func_0x01384978(*(undefined4 *)(_UNK_01b07fc0 + 0x1b079c4));
    func_0x01384978(*(undefined4 *)(_UNK_01b07fc4 + 0x1b079d0));
    func_0x01384978(*(undefined4 *)(_UNK_01b07fc8 + 0x1b079dc));
    func_0x01384978(*(undefined4 *)(_UNK_01b07fcc + 0x1b079e8));
    func_0x01384978(*(undefined4 *)(_UNK_01b07fd0 + 0x1b079f4));
    *pcVar12 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x8831,0);
  if (iVar2 == 0) {
    iVar2 = FUN_01b05c10(param_1);
    if (iVar2 == 0) {
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      func_0x01b08b0c(param_1,*(undefined4 *)(param_3 + 0x28));
      uVar3 = 1;
    }
    else {
      if (*(int *)(param_1 + 0x6c) == 0) {
        uVar3 = func_0x01384be4(**(undefined4 **)(_UNK_01b07fd4 + 0x1b07a78));
        func_0x0328e950(uVar3,**(undefined4 **)(_UNK_01b07fd8 + 0x1b07a8c));
        *(undefined4 *)(param_1 + 0x6c) = uVar3;
      }
      if (param_3 == 0) {
        func_0x01384bf0();
      }
      iVar2 = *(int *)(param_3 + 0x20);
      if (iVar2 != 0) {
        iVar17 = 0;
        piVar18 = *(int **)(_UNK_01b07fdc + 0x1b07ac0);
        while( true ) {
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if (*(int *)(iVar2 + 0xc) <= iVar17) break;
          iVar2 = *(int *)(param_3 + 0x20);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar3 = func_0x03653d1c(iVar2,iVar17,**(undefined4 **)(_UNK_01b07fe0 + 0x1b07af8));
          if (*(int *)(**(int **)(_UNK_01b07fe4 + 0x1b07b10) + 0x74) == 0) {
            func_0x01384ab4();
          }
          iVar2 = func_0x02565a88(uVar3,0);
          iVar4 = func_0x01c24918(0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(iVar4 + 0x40);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar5 = *piVar18;
          uVar3 = *(undefined4 *)(iVar2 + 8);
          uVar13 = *(undefined4 *)(iVar2 + 0xc);
          if (*(int *)(iVar5 + 0x74) == 0) {
            func_0x01384ab4();
            iVar5 = *piVar18;
          }
          uVar14 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x388);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          uVar3 = func_0x01cdcbac(iVar4,uVar3,uVar13,uVar14,0,0,0,0x278,
                                  **(undefined4 **)(_UNK_01b07fe8 + 0x1b07ba0),
                                  **(undefined4 **)(_UNK_01b07fec + 0x1b07bac),0);
          iVar2 = *(int *)(param_1 + 0x6c);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(iVar2 + 8);
          uVar15 = *(uint *)(iVar2 + 0xc);
          piVar11 = *(int **)(_UNK_01b07ff0 + 0x1b07c0c);
          *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
          iVar5 = *piVar11;
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          if (uVar15 < *(uint *)(iVar4 + 0xc)) {
            *(uint *)(iVar2 + 0xc) = uVar15 + 1;
            *(undefined4 *)(iVar4 + uVar15 * 4 + 0x10) = uVar3;
          }
          else {
            func_0x0328f170(iVar2,uVar3,
                            *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
          }
          iVar17 = iVar17 + 1;
          iVar2 = *(int *)(param_3 + 0x20);
        }
      }
      uVar3 = 0;
    }
    if ((*(int *)(param_1 + 0x3c) != 0) &&
       (iVar2 = func_0x02139cf4(*(int *)(param_1 + 0x3c),0), iVar2 != 0)) {
      func_0x020ec8ac(iVar2,*(undefined4 *)(param_3 + 0x1c),0);
    }
    uVar13 = FUN_01b06e74(param_1);
    piVar18 = (int *)func_0x021566f4(0);
    if (piVar18 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar2 = *piVar18;
    uVar15 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar15 != 0) {
      piVar11 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar11[-1] == **(int **)(_UNK_01b07ff4 + 0x1b07ce4)) {
          puVar6 = (undefined4 *)(iVar2 + *piVar11 * 8 + 0x118);
          goto LAB_01b07d2c;
        }
        uVar15 = uVar15 - 1;
        piVar11 = piVar11 + 2;
      } while (uVar15 != 0);
    }
    puVar6 = (undefined4 *)func_0x014002dc(piVar18,**(int **)(_UNK_01b07ff4 + 0x1b07ce4),0xb);
LAB_01b07d2c:
    iVar2 = (*(code *)*puVar6)(piVar18,uVar13,puVar6[1]);
    iVar17 = *(int *)(param_1 + 0x50);
    uVar13 = 0;
    iVar4 = 0;
    if (iVar2 != 0) {
      uVar13 = *(undefined4 *)(iVar2 + 0x10);
    }
    if (iVar17 != 0) {
      iVar2 = *(int *)(iVar17 + 0x14);
    }
    if (iVar17 != 0 && iVar2 != 0) {
      iVar2 = *(int *)(iVar2 + 0xc);
      iVar5 = 0;
      if (0 < iVar2) {
        iVar5 = 0;
        iVar4 = 0;
        iVar19 = 0;
        puVar6 = *(undefined4 **)(_UNK_01b08008 + 0x1b07ed0);
        while( true ) {
          if (iVar17 == 0) {
            func_0x01384bf0();
          }
          iVar17 = *(int *)(iVar17 + 0x14);
          if (iVar17 == 0) {
            func_0x01384bf0();
          }
          uVar14 = func_0x0364c9b8(iVar17,iVar19,*puVar6);
          iVar10 = func_0x01816854(uVar14,0);
          if (iVar10 != 0) {
            piVar18 = *(int **)(iVar10 + 0x30);
            iVar17 = iVar10;
          }
          if (iVar10 != 0 && piVar18 != (int *)0x0) {
            iVar10 = 0;
            while( true ) {
              if (piVar18 == (int *)0x0) {
                func_0x01384bf0();
              }
              if (piVar18[3] <= iVar10) break;
              iVar16 = *(int *)(iVar17 + 0x30);
              if (iVar16 == 0) {
                func_0x01384bf0();
              }
              uVar14 = func_0x0364c9b8(iVar16,iVar10,*puVar6);
              iVar16 = FUN_01b046cc(param_1,uVar14);
              piVar18 = *(int **)(iVar17 + 0x30);
              iVar4 = iVar4 + iVar16;
              iVar10 = iVar10 + 1;
            }
            iVar5 = iVar5 + iVar10;
          }
          iVar19 = iVar19 + 1;
          if (iVar19 == iVar2) break;
          iVar17 = *(int *)(param_1 + 0x50);
        }
      }
    }
    else {
      iVar5 = 0;
    }
    iVar2 = FUN_01b061d4(param_1);
    uVar14 = 0;
    if (*(int *)(param_1 + 0x50) != 0) {
      iVar17 = *(int *)(*(int *)(param_1 + 0x50) + 0x34);
      uVar14 = 0;
      if (iVar17 != 0) {
        uStack_2c = 0;
        uStack_30 = 0;
        func_0x03507d38(&uStack_30,*(undefined4 *)(iVar17 + 0xc),
                        **(undefined4 **)(_UNK_01b07ff8 + 0x1b07da8));
        uVar14 = uStack_2c;
      }
    }
    bVar1 = FUN_01b05c10(param_1);
    uVar7 = FUN_01b062d8(param_1);
    uVar8 = FUN_01b0633c(param_1);
    uVar9 = FUN_01b05c10(param_1);
    func_0x0231452c(param_1,iVar2 + 1,uVar14,iVar4,iVar5,uVar7,uVar8,iVar5 <= iVar4 & (bVar1 ^ 1),
                    uVar9,*(int *)(param_1 + 0x60) + 1,uVar13,0);
    if (*(int *)(**(int **)(_UNK_01b07ffc + 0x1b07e50) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar2 = func_0x0300d558(**(undefined4 **)(_UNK_01b08000 + 0x1b07e6c));
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x034a079c(iVar2,param_2,uVar3,**(undefined4 **)(_UNK_01b08004 + 0x1b07e94));
  }
  else {
    iVar2 = func_0x0229f13c(0x8831,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x0217ab90(iVar2,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.RescueBoardActivity$$CommitPendingOutput RVA 0x1af800c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0800c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01b0812c + 0x1b08024);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b08130 + 0x1b08038));
    func_0x01384978(*(undefined4 *)(_UNK_01b08134 + 0x1b08044));
    func_0x01384978(*(undefined4 *)(_UNK_01b08138 + 0x1b08050));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8836,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8836,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  if (*(int *)(iVar1 + 0xc) != 0) {
    iVar1 = *(int *)(param_1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x024501ac(&uStack_20,iVar1,0,**(undefined4 **)(_UNK_01b0813c + 0x1b080e0));
    iVar1 = *(int *)(param_1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02450ca8(iVar1,0,**(undefined4 **)(_UNK_01b08140 + 0x1b0810c));
    func_0x01b08144(param_1,uStack_20,uStack_1c);
  }
  return;
}



// ===== FAT.RescueBoardActivity$$ProcessTargetOutput RVA 0x1af8144 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b08144(int param_1,undefined4 param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  char *pcVar16;
  int *piVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  
  pcVar16 = (char *)(_UNK_01b08820 + 0x1b0816c);
  if (*pcVar16 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b08824 + 0x1b08180));
    func_0x01384978(*(undefined4 *)(_UNK_01b08828 + 0x1b0818c));
    func_0x01384978(*(undefined4 *)(_UNK_01b0882c + 0x1b08198));
    func_0x01384978(*(undefined4 *)(_UNK_01b08830 + 0x1b081a4));
    func_0x01384978(*(undefined4 *)(_UNK_01b08834 + 0x1b081b0));
    func_0x01384978(*(undefined4 *)(_UNK_01b08838 + 0x1b081bc));
    func_0x01384978(*(undefined4 *)(_UNK_01b0883c + 0x1b081c8));
    func_0x01384978(*(undefined4 *)(_UNK_01b08840 + 0x1b081d4));
    func_0x01384978(*(undefined4 *)(_UNK_01b08844 + 0x1b081e0));
    func_0x01384978(*(undefined4 *)(_UNK_01b08848 + 0x1b081ec));
    func_0x01384978(*(undefined4 *)(_UNK_01b0884c + 0x1b081f8));
    func_0x01384978(*(undefined4 *)(_UNK_01b08850 + 0x1b08204));
    *pcVar16 = '\x01';
  }
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_58 = 0;
  uStack_48 = 0;
  iVar2 = func_0x0229f06c(0x8837,0);
  if (iVar2 == 0) {
    piVar3 = (int *)func_0x01b08a00(param_1,param_2,param_3);
    iVar2 = 0;
    if (piVar3 != (int *)0x0) {
      iVar2 = *(int *)(param_1 + 0x3c);
      param_3 = piVar3;
    }
    if (((piVar3 != (int *)0x0 && iVar2 != 0) && (iVar2 = func_0x02139cf4(iVar2,0), iVar2 != 0)) &&
       (iVar4 = func_0x01816d10(param_2,0), iVar4 != 0)) {
      iVar5 = FUN_01b046cc(param_1,param_2);
      if (iVar5 != 0) {
        func_0x020eca5c(iVar2,*(undefined4 *)(iVar4 + 0x1c),0);
      }
      uVar13 = 0;
      iVar4 = func_0x020ec92c(iVar2,*(undefined4 *)(iVar4 + 0x1c),0);
      if (iVar4 == 0) {
        uVar14 = 0;
      }
      else {
        iVar5 = *(int *)(iVar4 + 8);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        uVar14 = 0;
        if (0 < *(int *)(iVar5 + 0x10)) {
          iVar4 = *(int *)(iVar4 + 8);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          func_0x0245034c(&uStack_70,iVar4,**(undefined4 **)(_UNK_01b08854 + 0x1b08360));
          uStack_58 = uStack_70;
          uStack_54 = uStack_6c;
          uStack_50 = uStack_68;
          uStack_4c = uStack_64;
          uStack_48 = uStack_60;
          iVar4 = func_0x0146e968(&uStack_58,**(undefined4 **)(_UNK_01b08858 + 0x1b0837c));
          uVar13 = uStack_48;
          uVar14 = uStack_4c;
          func_0x02450350(&uStack_58,**(undefined4 **)(_UNK_01b0885c + 0x1b083a8));
          if (iVar4 == 0) {
            uVar13 = 0;
            uVar14 = 0;
          }
        }
      }
      if (*(int *)(**(int **)(_UNK_01b08864 + 0x1b08418) + 0x74) == 0) {
        func_0x01384ab4();
      }
      bVar1 = false;
      func_0x01dd876c(&uStack_70,uVar14,uVar13,0);
      uVar14 = uStack_6c;
      uVar13 = uStack_70;
      func_0x01dd7d28(0);
      func_0x020da680(&uStack_70,iVar2,0);
      fVar18 = (float)VectorSignedToFloat(uStack_70,(byte)(in_fpscr >> 0x16) & 3);
      pcVar16 = (char *)(_UNK_01b08868 + 0x1b0848c);
      if (*pcVar16 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01b0886c + 0x1b084a0));
        *pcVar16 = '\x01';
      }
      piVar3 = *(int **)(_UNK_01b08870 + 0x1b084b8);
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
        bVar1 = *pcVar16 == '\0';
      }
      fVar19 = (float)VectorSignedToFloat(uStack_6c,(byte)(in_fpscr >> 0x16) & 3);
      fVar6 = (float)func_0x02450364(fVar18 * 0.5);
      fVar18 = _UNK_01b0881c;
      iVar4 = (int)fVar6;
      if (fVar6 == _UNK_01b0881c) {
        iVar4 = -0x80000000;
      }
      if (bVar1) {
        func_0x01384978(*(undefined4 *)(_UNK_01b08874 + 0x1b08518));
        *pcVar16 = '\x01';
      }
      piVar17 = *(int **)(_UNK_01b08878 + 0x1b0853c);
      if (*(int *)(*piVar3 + 0x74) == 0) {
        func_0x01384ab4();
      }
      fVar6 = (float)func_0x02450364(fVar19 * 0.5);
      iVar15 = 0;
      iVar5 = (int)fVar6;
      if (fVar6 == fVar18) {
        iVar5 = -0x80000000;
      }
      do {
        iVar7 = *param_3;
        uVar12 = (uint)*(ushort *)(iVar7 + 0xb6);
        if (uVar12 != 0) {
          piVar3 = (int *)(*(int *)(iVar7 + 0x58) + 4);
          do {
            if (piVar3[-1] == **(int **)(_UNK_01b08898 + 0x1b08584)) {
              puVar8 = (undefined4 *)(iVar7 + *piVar3 * 8 + 0xc0);
              goto LAB_01b085cc;
            }
            uVar12 = uVar12 - 1;
            piVar3 = piVar3 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_01b08898 + 0x1b08584),0);
LAB_01b085cc:
        iVar7 = (*(code *)*puVar8)(param_3,puVar8[1]);
        if (iVar7 <= iVar15) {
          return;
        }
        iVar7 = *param_3;
        uVar12 = (uint)*(ushort *)(iVar7 + 0xb6);
        if (uVar12 != 0) {
          piVar3 = (int *)(*(int *)(iVar7 + 0x58) + 4);
          do {
            if (piVar3[-1] == **(int **)(_UNK_01b08880 + 0x1b085f4)) {
              puVar8 = (undefined4 *)(iVar7 + *piVar3 * 8 + 0xc0);
              goto LAB_01b0863c;
            }
            uVar12 = uVar12 - 1;
            piVar3 = piVar3 + 2;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined4 *)func_0x014002dc(param_3,**(int **)(_UNK_01b08880 + 0x1b085f4),0);
LAB_01b0863c:
        iVar7 = (*(code *)*puVar8)(param_3,iVar15,puVar8[1]);
        if (0 < iVar7) {
          if (*(int *)(*piVar17 + 0x74) == 0) {
            func_0x01384ab4();
          }
          func_0x01dd7838(iVar7,uVar13,uVar14,uStack_68,0xbf800000,0);
          uVar9 = func_0x020d8024(0,0x22,0);
          iVar10 = func_0x020ded9c(iVar2,iVar7,uVar9,iVar4,iVar5,0,0,0);
          if (iVar10 == 0) {
            if (*(int *)(*piVar17 + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x01dd7d28(0);
            iVar10 = func_0x01c24918(0);
            piVar3 = *(int **)(_UNK_01b08884 + 0x1b08704);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            iVar11 = *piVar3;
            iVar10 = *(int *)(iVar10 + 0x40);
            if (*(int *)(iVar11 + 0x74) == 0) {
              func_0x01384ab4();
              iVar11 = *piVar3;
            }
            piVar17 = *(int **)(_UNK_01b08888 + 0x1b08734);
            uVar9 = *(undefined4 *)(*(int *)(iVar11 + 0x5c) + 0x38c);
            if (iVar10 == 0) {
              func_0x01384bf0();
            }
            uVar9 = func_0x01cdcbac(iVar10,iVar7,1,uVar9,0,0,0,0x261,
                                    **(undefined4 **)(_UNK_01b0888c + 0x1b08754),
                                    **(undefined4 **)(_UNK_01b08890 + 0x1b08760),0);
            if (*(int *)(**(int **)(_UNK_01b08894 + 0x1b08798) + 0x74) == 0) {
              func_0x01384ab4();
            }
            func_0x0206de24(uVar9,uVar13,uVar14,uStack_68,0,0,0,0);
          }
        }
        iVar15 = iVar15 + 1;
      } while( true );
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x8837,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar2,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.RescueBoardActivity$$FlushPendingOutputToRewardBox RVA 0x1af889c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0889c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_01b089e8 + 0x1b088b4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b089ec + 0x1b088c8));
    func_0x01384978(*(undefined4 *)(_UNK_01b089f0 + 0x1b088d4));
    func_0x01384978(*(undefined4 *)(_UNK_01b089f4 + 0x1b088e0));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x883f,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x68);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    bVar8 = *(int *)(iVar1 + 0xc) != 0;
    iVar1 = 0;
    if (bVar8) {
      iVar1 = *(int *)(param_1 + 0x3c);
    }
    if (bVar8 && iVar1 != 0) {
      puVar6 = *(undefined4 **)(_UNK_01b089f8 + 0x1b0896c);
      puVar7 = *(undefined4 **)(_UNK_01b089fc + 0x1b08974);
      while( true ) {
        iVar1 = *(int *)(param_1 + 0x68);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar1 + 0xc) < 1) break;
        iVar1 = *(int *)(param_1 + 0x68);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x024501ac(&uStack_28,iVar1,0,*puVar6);
        uVar2 = uStack_24;
        uVar5 = uStack_28;
        iVar1 = *(int *)(param_1 + 0x68);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x02450ca8(iVar1,0,*puVar7);
        FUN_01b08144(param_1,uVar5,uVar2);
      }
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x883f,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.RescueBoardActivity$$GetTargetOutputItems RVA 0x1af8a00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b08a00(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  pcVar4 = (char *)(_UNK_01b08afc + 0x1b08a20);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b08b00 + 0x1b08a34));
    func_0x01384978(*(undefined4 *)(_UNK_01b08b04 + 0x1b08a40));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  iVar1 = func_0x0229f06c(0x8838,0);
  if (iVar1 == 0) {
    iVar2 = func_0x01816d10(param_2,0);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x24);
    }
    if ((iVar2 != 0 && iVar1 != 0) && (param_3 < *(int *)(iVar1 + 0xc))) {
      uVar3 = func_0x0364c9b8(iVar1,param_3,**(undefined4 **)(_UNK_01b08b08 + 0x1b08adc));
      uVar5 = 0;
      iVar1 = func_0x01814bec(uVar3,0);
      if (iVar1 != 0) {
        uVar5 = *(undefined4 *)(iVar1 + 0x14);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8838,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar5 = func_0x0225ca94(iVar1,param_1,param_2,param_3,0);
  }
  return uVar5;
}



// ===== FAT.RescueBoardActivity$$AddRescueProgress RVA 0x1af8b0c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b08b0c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint uStack_28;
  int iStack_24;
  
  pcVar6 = (char *)(_UNK_01b08d14 + 0x1b08b28);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b08d18 + 0x1b08b3c));
    func_0x01384978(*(undefined4 *)(_UNK_01b08d1c + 0x1b08b48));
    func_0x01384978(*(undefined4 *)(_UNK_01b08d20 + 0x1b08b54));
    func_0x01384978(*(undefined4 *)(_UNK_01b08d24 + 0x1b08b60));
    func_0x01384978(*(undefined4 *)(_UNK_01b08d28 + 0x1b08b6c));
    func_0x01384978(*(undefined4 *)(_UNK_01b08d2c + 0x1b08b78));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8834,0);
  if (iVar1 == 0) {
    if (0 < param_2) {
      iVar5 = FUN_01b061d4(param_1);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + param_2;
      iVar2 = FUN_01b061d4(param_1);
      iVar3 = *(int *)(param_1 + 0x50);
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = *(int *)(iVar3 + 0x34);
      }
      iVar8 = 0;
      if (iVar3 != 0 && iVar1 != 0) {
        iStack_24 = 0;
        uStack_28 = 0;
        func_0x03507d38(&uStack_28,*(undefined4 *)(iVar1 + 0xc),
                        **(undefined4 **)(_UNK_01b08d30 + 0x1b08c1c));
        iVar8 = iStack_24;
      }
      if (iVar5 < iVar2) {
        do {
          func_0x01b0b878(param_1,iVar5);
          uVar7 = FUN_01b062d8(param_1);
          uVar4 = FUN_01b0633c(param_1);
          uStack_38 = FUN_01b05c10(param_1);
          iVar5 = iVar5 + 1;
          uStack_40 = (uint)(iVar8 <= iVar5);
          iStack_34 = *(int *)(param_1 + 0x60) + 1;
          uStack_30 = 0;
          uStack_3c = uVar4;
          func_0x02314398(param_1,iVar5,iVar8,uVar7);
        } while (iVar2 != iVar5);
      }
      if (*(int *)(**(int **)(_UNK_01b08d34 + 0x1b08cbc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01b08d38 + 0x1b08cd8));
      uVar7 = *(undefined4 *)(param_1 + 0x58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x034a0af8(iVar1,iVar2,uVar7,**(undefined4 **)(_UNK_01b08d3c + 0x1b08d04));
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x8834,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  iStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,param_2,0);
  iVar5 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  func_0x0245495c(iVar5,uVar7,&uStack_38,uVar4,0,0);
  return;
}



// ===== FAT.RescueBoardActivity$$get_EventConf RVA 0x1af8d40 =====

undefined4 FUN_01b08d40(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}



// ===== FAT.RescueBoardActivity$$set_EventConf RVA 0x1af8d48 =====

void FUN_01b08d48(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}



// ===== FAT.RescueBoardActivity$$get_DetailConf RVA 0x1af8d50 =====

undefined4 FUN_01b08d50(int param_1)

{
  return *(undefined4 *)(param_1 + 0x50);
}



// ===== FAT.RescueBoardActivity$$set_DetailConf RVA 0x1af8d58 =====

void FUN_01b08d58(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x50) = param_2;
  return;
}



// ===== FAT.RescueBoardActivity$$get_BoardSkinId RVA 0x1af8d60 =====

undefined4 FUN_01b08d60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x8840,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8840,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245498c(&uStack_30,0,0);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x4c) + 0x14);
  }
  return uVar3;
}



// ===== FAT.RescueBoardActivity$$get_MainCategoryId RVA 0x1af8dc4 =====

undefined4 FUN_01b08dc4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x8841,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8841,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x0245498c(&uStack_30,0,0);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x50) != 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x50) + 0x30);
  }
  return uVar3;
}



// ===== FAT.RescueBoardActivity$$get_TokenNum RVA 0x1af8e28 =====

undefined4 FUN_01b08e28(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8842,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8842,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x5c);
}



// ===== FAT.RescueBoardActivity$$get_HasPendingOutput RVA 0x1af8e7c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01b08e7c(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_01b08f14 + 0x1b08e90);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b08f18 + 0x1b08ea4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8843,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8843,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  return (uint)(0 < *(int *)(iVar1 + 0xc));
}



// ===== FAT.RescueBoardActivity$$get_RescueCycleRewardList RVA 0x1af8f1c =====

undefined4 FUN_01b08f1c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x6c);
}



// ===== FAT.RescueBoardActivity$$set_RescueCycleRewardList RVA 0x1af8f24 =====

void FUN_01b08f24(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x6c) = param_2;
  return;
}



// ===== FAT.RescueBoardActivity$$get_Visual RVA 0x1af8f2c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b08f2c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8844,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8844,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021c7f44 + 0x21c7e64);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c7f48 + 0x21c7e78),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7f4c + 0x21c7f34));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x90);
}



// ===== FAT.RescueBoardActivity$$get_MainVisual RVA 0x1af8f80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b08f80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8845,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8845,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_021c7f44 + 0x21c7e64);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c7f48 + 0x21c7e78),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
    uVar5 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7f4c + 0x21c7f34));
    return uVar5;
  }
  return *(undefined4 *)(param_1 + 0x74);
}



// ===== FAT.RescueBoardActivity$$get_StartPopup RVA 0x1af8fd4 =====

void FUN_01b08fd4(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x94);
  *param_1 = uVar1;
  return;
}



// ===== FAT.RescueBoardActivity$$get_EndPopup RVA 0x1af8fe8 =====

void FUN_01b08fe8(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0xa0);
  *param_1 = uVar1;
  return;
}



// ===== FAT.RescueBoardActivity$$get_ConvertPopup RVA 0x1af8ffc =====

void FUN_01b08ffc(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0xac);
  *param_1 = uVar1;
  return;
}



// ===== FAT.RescueBoardActivity$$get_StartResAlt RVA 0x1af9010 =====

undefined4 FUN_01b09010(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}



// ===== FAT.RescueBoardActivity$$get_BoardResAlt RVA 0x1af9018 =====

undefined4 FUN_01b09018(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb4);
}



// ===== FAT.RescueBoardActivity$$get_ConvertResAlt RVA 0x1af9020 =====

undefined4 FUN_01b09020(int param_1)

{
  return *(undefined4 *)(param_1 + 0xb8);
}



// ===== FAT.RescueBoardActivity$$get_LoadingResAlt RVA 0x1af9028 =====

undefined4 FUN_01b09028(int param_1)

{
  return *(undefined4 *)(param_1 + 0xbc);
}



// ===== FAT.RescueBoardActivity$$get_MilestoneResAlt RVA 0x1af9030 =====

undefined4 FUN_01b09030(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc0);
}



// ===== FAT.RescueBoardActivity$$get_EndResAlt RVA 0x1af9038 =====

undefined4 FUN_01b09038(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc4);
}



// ===== FAT.RescueBoardActivity$$get_HelpResAlt RVA 0x1af9040 =====

undefined4 FUN_01b09040(int param_1)

{
  return *(undefined4 *)(param_1 + 200);
}



// ===== FAT.RescueBoardActivity$$get_RescueSuccessResAlt RVA 0x1af9048 =====

undefined4 FUN_01b09048(int param_1)

{
  return *(undefined4 *)(param_1 + 0xcc);
}



// ===== FAT.RescueBoardActivity$$.ctor RVA 0x1af9050 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b09050(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_01b09408 + 0x1b0906c);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0940c + 0x1b09080));
    func_0x01384978(*(undefined4 *)(_UNK_01b09410 + 0x1b0908c));
    func_0x01384978(*(undefined4 *)(_UNK_01b09414 + 0x1b09098));
    func_0x01384978(*(undefined4 *)(_UNK_01b09418 + 0x1b090a4));
    func_0x01384978(*(undefined4 *)(_UNK_01b0941c + 0x1b090b0));
    func_0x01384978(*(undefined4 *)(_UNK_01b09420 + 0x1b090bc));
    func_0x01384978(*(undefined4 *)(_UNK_01b09424 + 0x1b090c8));
    *pcVar6 = '\x01';
  }
  uVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b09428 + 0x1b090dc));
  func_0x024509b4(uVar1,**(undefined4 **)(_UNK_01b0942c + 0x1b090f0));
  puVar2 = *(undefined4 **)(_UNK_01b09430 + 0x1b09104);
  *(undefined4 *)(param_1 + 100) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02450660(uVar1,**(undefined4 **)(_UNK_01b09434 + 0x1b0911c));
  puVar2 = *(undefined4 **)(_UNK_01b09438 + 0x1b09130);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02b635c4(uVar1,0);
  uVar3 = *puVar2;
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x02b635c4(uVar1,0);
  uVar3 = *puVar2;
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x02b635c4(uVar1,0);
  uVar3 = *puVar2;
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x02b635c4(uVar1,0);
  uVar3 = *puVar2;
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x02b635c4(uVar1,0);
  uVar3 = *puVar2;
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x02b635c4(uVar1,0);
  piVar8 = *(int **)(_UNK_01b0943c + 0x1b091cc);
  iVar4 = *piVar8;
  iVar5 = *(int *)(iVar4 + 0x74);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  if (iVar5 == 0) {
    func_0x01384ab4();
    iVar4 = *piVar8;
  }
  uStack_2c = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x02b64854(&uStack_30,*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0xa10),0);
  iVar4 = *piVar8;
  *(undefined4 *)(param_1 + 0x94) = uStack_28;
  *(ulonglong *)(param_1 + 0x8c) = CONCAT44(uStack_2c,uStack_30);
  uStack_3c = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  func_0x02b64854(&uStack_40,*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0xa14),0);
  iVar4 = *piVar8;
  *(undefined4 *)(param_1 + 0xa0) = uStack_38;
  *(ulonglong *)(param_1 + 0x98) = CONCAT44(uStack_3c,uStack_40);
  uStack_4c = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  func_0x02b64854(&uStack_50,*(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0xa1c),0);
  iVar4 = *piVar8;
  *(undefined4 *)(param_1 + 0xac) = uStack_48;
  *(ulonglong *)(param_1 + 0xa4) = CONCAT44(uStack_4c,uStack_50);
  puVar2 = *(undefined4 **)(_UNK_01b09440 + 0x1b09290);
  uVar3 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0xa10);
  uVar1 = func_0x01384be4(*puVar2);
  func_0x02b63ca4(uVar1,uVar3,0);
  uVar3 = *puVar2;
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xa0c);
  *(undefined4 *)(param_1 + 0xb0) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x02b63ca4(uVar1,uVar7,0);
  uVar3 = *puVar2;
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xa1c);
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x02b63ca4(uVar1,uVar7,0);
  uVar3 = *puVar2;
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xa24);
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x02b63ca4(uVar1,uVar7,0);
  uVar3 = *puVar2;
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xa28);
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x02b63ca4(uVar1,uVar7,0);
  uVar3 = *puVar2;
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xa14);
  *(undefined4 *)(param_1 + 0xc0) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x02b63ca4(uVar1,uVar7,0);
  uVar3 = *puVar2;
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xa2c);
  *(undefined4 *)(param_1 + 0xc4) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x02b63ca4(uVar1,uVar7,0);
  uVar3 = *puVar2;
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xa30);
  *(undefined4 *)(param_1 + 200) = uVar1;
  uVar1 = func_0x01384be4(uVar3);
  func_0x02b63ca4(uVar1,uVar7,0);
  *(undefined4 *)(param_1 + 0xcc) = uVar1;
  func_0x02b4dc04(param_1,0);
  *(int **)(param_1 + 0x10) = param_2;
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  uVar1 = (**(code **)(*param_2 + 0x100))(param_2,*(undefined4 *)(*param_2 + 0x104));
  uVar1 = func_0x01814730(uVar1,0);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  return;
}



// ===== FAT.RescueBoardActivity$$SetupFresh RVA 0x1af9444 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b09444(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar5 = (char *)(_UNK_01b09760 + 0x1b0945c);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b09764 + 0x1b09470));
    func_0x01384978(*(undefined4 *)(_UNK_01b09768 + 0x1b0947c));
    func_0x01384978(*(undefined4 *)(_UNK_01b0976c + 0x1b09488));
    func_0x01384978(*(undefined4 *)(_UNK_01b09770 + 0x1b09494));
    func_0x01384978(*(undefined4 *)(_UNK_01b09774 + 0x1b094a0));
    func_0x01384978(*(undefined4 *)(_UNK_01b09778 + 0x1b094ac));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8846,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8846,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4,0,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar6 = *(int *)(param_1 + 0x4c);
  iVar1 = *(int *)(iVar1 + 0x2c);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar7 = *(undefined4 *)(iVar6 + 0x20);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar7 = func_0x01cf6408(iVar1,uVar7,0);
  *(undefined4 *)(param_1 + 0x54) = uVar7;
  uVar7 = func_0x018150a8(uVar7,0);
  iVar1 = *(int *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x50) = uVar7;
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x024509cc(iVar1,**(undefined4 **)(_UNK_01b0977c + 0x1b09580));
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  func_0x01b0978c(param_1);
  func_0x01b0987c(param_1);
  FUN_01b05ddc(param_1);
  FUN_01b05eb4(param_1);
  FUN_01b0608c(param_1);
  iVar1 = FUN_01b05154(param_1);
  if (0 < iVar1) {
    FUN_01b04200(param_1,iVar1,1);
  }
  func_0x01b098d4(param_1,1);
  func_0x01b09adc(param_1);
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0xfc);
  uVar7 = *(undefined4 *)(param_1 + 0x94);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 0;
  uStack_40 = 0;
  func_0x01e7437c(iVar1,uVar7,0,0);
  iVar1 = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar6 = *(int *)(*(int *)(param_1 + 0x50) + 0x34);
    iVar1 = 0;
    if (iVar6 != 0) {
      iStack_1c = 0;
      uStack_20 = 0;
      func_0x03507d38(&uStack_20,*(undefined4 *)(iVar6 + 0xc),
                      **(undefined4 **)(_UNK_01b09780 + 0x1b0967c));
      iVar1 = iStack_1c;
    }
  }
  iVar6 = FUN_01b05c10(param_1);
  if (iVar6 == 0) {
    iVar2 = *(int *)(param_1 + 0x60);
    uVar4 = 0;
    iVar6 = 0;
    if (*(int *)(param_1 + 0x50) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x50) + 0x14);
      iVar6 = 0;
      if (iVar3 != 0) {
        iStack_1c = 0;
        uStack_20 = 0;
        func_0x03507d38(&uStack_20,*(undefined4 *)(iVar3 + 0xc),
                        **(undefined4 **)(_UNK_01b09784 + 0x1b096e0));
        iVar6 = iStack_1c;
      }
    }
    if (iVar6 <= iVar2 + 1) {
      uVar4 = 1;
    }
  }
  uVar7 = FUN_01b062d8(param_1);
  uStack_40 = FUN_01b0633c(param_1);
  uStack_38 = **(undefined4 **)(_UNK_01b09788 + 0x1b0972c);
  uStack_3c = 1;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_34 = uStack_38;
  uStack_30 = uVar4;
  func_0x02314888(param_1,1,iVar1,uVar7);
  return;
}



// ===== FAT.RescueBoardActivity$$InitFreeToken RVA 0x1af978c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0978c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01b09870 + 0x1b097a4);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b09874 + 0x1b097b8));
    *pcVar3 = '\x01';
  }
  uVar7 = func_0x0229f06c(0x8848,0);
  iVar1 = (int)((ulonglong)uVar7 >> 0x20);
  if ((int)uVar7 == 0) {
    iVar4 = *(int *)(param_1 + 0x50);
    if (iVar4 != 0) {
      iVar1 = *(int *)(param_1 + 0x4c);
    }
    if ((iVar4 != 0 && iVar1 != 0) && (iVar4 = *(int *)(iVar4 + 0x20), 0 < iVar4)) {
      piVar6 = *(int **)(_UNK_01b09878 + 0x1b0983c);
      uVar5 = *(undefined4 *)(iVar1 + 0x50);
      iVar1 = *piVar6;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar6;
      }
      func_0x01b0cb38(param_1,uVar5,iVar4,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x374));
    }
    return;
  }
  iVar1 = func_0x0229f13c(0x8848,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.RescueBoardActivity$$RefreshOutputType RVA 0x1af987c =====

void FUN_01b0987c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8849,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8849,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  *(undefined4 *)(param_1 + 0xd4) = 2;
  return;
}



// ===== FAT.RescueBoardActivity$$InitHandbookAgent RVA 0x1af98d4 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x02b61b38) */
/* WARNING: Removing unreachable block (ram,0x02b61b44) */
/* WARNING: Removing unreachable block (ram,0x02b61b48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b098d4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(iRam01b09ab8 + 0x1b098f0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b09abc + 0x1b09904));
    func_0x01384978(*(undefined4 *)(_UNK_01b09ac0 + 0x1b09910));
    func_0x01384978(*(undefined4 *)(_UNK_01b09ac4 + 0x1b0991c));
    func_0x01384978(*(undefined4 *)(_UNK_01b09ac8 + 0x1b09928));
    *pcVar7 = '\x01';
  }
  uVar9 = func_0x0229f06c(0x884b,0);
  iVar1 = (int)((ulonglong)uVar9 >> 0x20);
  if ((int)uVar9 != 0) {
    iVar1 = func_0x0229f13c(0x884b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    iVar1 = func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
    return iVar1;
  }
  iVar6 = *(int *)(param_1 + 0x4c);
  if (iVar6 != 0) {
    iVar1 = *(int *)(param_1 + 0x50);
  }
  if (iVar6 != 0 && iVar1 != 0) {
    if (*(int *)(param_1 + 0xd0) == 0) {
      uVar5 = *(undefined4 *)(iVar1 + 0x24);
      uVar8 = *(undefined4 *)(iVar1 + 0x28);
      if (*(int *)(**(int **)(_UNK_01b09acc + 0x1b099b0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      uVar8 = func_0x02565a88(uVar8,0);
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b09ad0 + 0x1b099e8));
      uStack_24 = 0;
      uStack_28 = uVar8;
      func_0x02bf5bd8(iVar1,param_1,uVar5,param_2);
      puVar2 = *(undefined4 **)(_UNK_01b09ad4 + 0x1b09a10);
      *(int *)(param_1 + 0xd0) = iVar1;
      uVar8 = func_0x01384be4(*puVar2);
      func_0x024501dc(uVar8,param_1,**(undefined4 **)(_UNK_01b09ad8 + 0x1b09a30),0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02bf51c0(iVar1,uVar8,0);
      if (*(int *)(param_1 + 0xd0) == 0) {
        return 0;
      }
      iVar6 = *(int *)(param_1 + 0x4c);
      if (iVar6 == 0) {
        func_0x01384bf0();
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    iVar6 = *(int *)(iVar6 + 0x28);
    if (0 < iVar6) {
      iVar6 = *(int *)(param_1 + 0x4c);
      iVar1 = *(int *)(param_1 + 0xd0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0x28);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      pcVar7 = (char *)(_UNK_02bf66f0 + 0x2bf6634);
      if (*pcVar7 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02bf66f4 + 0x2bf6648),iVar6,0);
        *pcVar7 = '\x01';
      }
      iVar4 = func_0x0229f06c(0x5c08,0);
      if (iVar4 != 0) {
        iVar4 = func_0x0229f13c(0x5c08,0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,iVar6,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar4 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar4 + 0x10),0);
        }
        func_0x01485278(&uStack_38,iVar1,0);
        func_0x01485238(&uStack_38,iVar6,0);
        iVar6 = *(int *)(iVar4 + 8);
        uVar8 = *(undefined4 *)(iVar4 + 0xc);
        iVar1 = *(int *)(iVar4 + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar5 = 3;
        if (iVar1 == 0) {
          uVar5 = 2;
        }
        iVar1 = func_0x0245495c(iVar6,uVar8,&uStack_38,uVar5,0,0);
        return iVar1;
      }
      if (0 < iVar6) {
        puVar2 = *(undefined4 **)(_UNK_02bf66f8 + 0x2bf66ac);
        *(int *)(iVar1 + 0x20) = iVar6;
        iVar6 = func_0x01384be4(*puVar2);
        func_0x02b635c4(iVar6,0);
        iVar4 = *(int *)(iVar1 + 0x20);
        *(int *)(iVar1 + 0x24) = iVar6;
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        pcVar7 = (char *)(_UNK_02b61bf0 + 0x2b61a70);
        if (*pcVar7 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_02b61bf4 + 0x2b61a84),iVar4,0,0);
          func_0x01384978(*(undefined4 *)(_UNK_02b61bf8 + 0x2b61a90));
          func_0x01384978(*(undefined4 *)(_UNK_02b61bfc + 0x2b61a9c));
          func_0x01384978(*(undefined4 *)(_UNK_02b61c00 + 0x2b61aa8));
          *pcVar7 = '\x01';
        }
        iVar1 = func_0x0229f06c(0x305,0);
        if (iVar1 == 0) {
          iVar3 = 0;
          iVar1 = func_0x01822f2c(iVar4,0);
          *(int *)(iVar6 + 8) = iVar1;
          if (iVar1 == 0) {
            if (0 < iVar4) {
              uVar8 = func_0x01384abc(**(undefined4 **)(_UNK_02b61c04 + 0x2b61b88),&stack0xffffffe4)
              ;
              iVar3 = 0;
              uVar8 = func_0x0467272c(**(undefined4 **)(_UNK_02b61c08 + 0x2b61ba8),
                                      **(undefined4 **)(_UNK_02b61c0c + 0x2b61bb4),uVar8,0);
              if (*(int *)(**(int **)(_UNK_02b61c10 + 0x2b61bc8) + 0x74) == 0) {
                func_0x01384ab4();
              }
              func_0x028c2944(uVar8,0);
            }
          }
          else {
            uVar8 = func_0x017d2c28(*(undefined4 *)(iVar1 + 0x1c),0);
            iVar3 = 1;
            *(undefined4 *)(iVar6 + 0xc) = uVar8;
          }
        }
        else {
          iVar1 = func_0x0229f13c(0x305,0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x021846e8(iVar1,iVar6,iVar4,0);
        }
        return iVar3;
      }
      return 0;
    }
  }
  return iVar6;
}



// ===== FAT.RescueBoardActivity$$_RefreshPopupInfo RVA 0x1af9adc =====

void FUN_01b09adc(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uStack_28;
  int iStack_20;
  
  uStack_28 = 0;
  iStack_20 = 0;
  iVar1 = func_0x0229f06c(0x884f,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar1 != 0) {
      iVar1 = param_1[0x13];
      uStack_28 = *(undefined8 *)(param_1 + 0x23);
      iStack_20 = param_1[0x25];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x48),param_1,0,1,0);
      iVar1 = param_1[0x13];
      uStack_28 = *(undefined8 *)(param_1 + 0x29);
      iStack_20 = param_1[0x2b];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x24),param_1,0,0,0);
      iVar1 = param_1[0x13];
      uStack_28 = *(undefined8 *)(param_1 + 0x26);
      iStack_20 = param_1[0x28];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b64928(&uStack_28,*(undefined4 *)(iVar1 + 0x1c),param_1,0,0,0);
      iVar3 = param_1[0x13];
      iVar1 = param_1[0x1d];
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar2 = param_1[0x2d];
      uVar4 = *(undefined4 *)(iVar3 + 0x38);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b61a50(iVar1,uVar4,iVar2,0);
      iVar3 = param_1[0x13];
      iVar1 = param_1[0x20];
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar2 = param_1[0x2f];
      uVar4 = *(undefined4 *)(iVar3 + 0x34);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b61a50(iVar1,uVar4,iVar2,0);
      iVar3 = param_1[0x13];
      iVar1 = param_1[0x21];
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar2 = param_1[0x30];
      uVar4 = *(undefined4 *)(iVar3 + 0x3c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b61a50(iVar1,uVar4,iVar2,0);
      iVar3 = param_1[0x13];
      iVar1 = param_1[0x1e];
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar2 = param_1[0x32];
      uVar4 = *(undefined4 *)(iVar3 + 0x2c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b61a50(iVar1,uVar4,iVar2,0);
      iVar3 = param_1[0x13];
      iVar1 = param_1[0x1f];
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar4 = *(undefined4 *)(iVar3 + 0x28);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b61a50(iVar1,uVar4,0,0);
      iVar3 = param_1[0x13];
      iVar1 = param_1[0x22];
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      iVar2 = param_1[0x33];
      uVar4 = *(undefined4 *)(iVar3 + 0x44);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02b61a50(iVar1,uVar4,iVar2,0);
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x884f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.RescueBoardActivity$$SaveSetup RVA 0x1af9d80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b09d80(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  
  pcVar4 = (char *)(_UNK_01b0a288 + 0x1b09d9c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0a28c + 0x1b09db0));
    func_0x01384978(*(undefined4 *)(_UNK_01b0a290 + 0x1b09dbc));
    func_0x01384978(*(undefined4 *)(_UNK_01b0a294 + 0x1b09dc8));
    func_0x01384978(*(undefined4 *)(_UNK_01b0a298 + 0x1b09dd4));
    func_0x01384978(*(undefined4 *)(_UNK_01b0a29c + 0x1b09de0));
    func_0x01384978(*(undefined4 *)(_UNK_01b0a2a0 + 0x1b09dec));
    func_0x01384978(*(undefined4 *)(_UNK_01b0a2a4 + 0x1b09df8));
    func_0x01384978(*(undefined4 *)(_UNK_01b0a2a8 + 0x1b09e04));
    func_0x01384978(*(undefined4 *)(_UNK_01b0a2ac + 0x1b09e10));
    *pcVar4 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  iVar1 = func_0x0229f06c(0x8857,0);
  if (iVar1 == 0) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(param_2 + 0x28);
    uVar2 = func_0x01c23578(0,*(undefined4 *)(param_1 + 0x54),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar8 = *(undefined4 **)(_UNK_01b0a2b0 + 0x1b09ec8);
    func_0x03652b00(iVar1,uVar2,*puVar8);
    uVar2 = func_0x01c23578(1,*(undefined4 *)(param_1 + 0x58),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar2,*puVar8);
    uVar2 = func_0x01c23578(2,*(undefined4 *)(param_1 + 0x5c),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar2,*puVar8);
    uVar5 = 0;
    uVar2 = func_0x01c23578(3,*(undefined4 *)(param_1 + 0x60),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar2,*puVar8);
    uVar2 = 0;
    if (*(int *)(param_1 + 0xe0) != 0) {
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 0xe0) + 0x28);
    }
    uVar5 = func_0x01c23578(4,uVar5,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar5,*puVar8);
    if (*(int *)(param_1 + 0xe0) != 0) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xe0) + 0x2c);
    }
    uVar2 = func_0x01c23578(5,uVar2,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar2,*puVar8);
    iVar6 = *(int *)(param_1 + 100);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    func_0x02450598(&uStack_58,iVar6,**(undefined4 **)(_UNK_01b0a2b4 + 0x1b0a000));
    iVar9 = 0;
    iVar6 = 0x3ea;
    uStack_40 = uStack_58;
    uStack_3c = uStack_54;
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    puVar7 = *(undefined4 **)(_UNK_01b0a2b8 + 0x1b0a034);
    while (iVar3 = func_0x01475638(&uStack_40,*puVar7), iVar3 != 0) {
      uVar2 = (undefined4)uStack_30;
      uVar5 = func_0x01c23578(iVar6 + -1,uStack_34,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar1,uVar5,*puVar8);
      uVar2 = func_0x01c23578(iVar6,uVar2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar1,uVar2,*puVar8);
      iVar6 = iVar6 + 2;
      iVar9 = iVar9 + 1;
    }
    func_0x0245059c(&uStack_40,**(undefined4 **)(_UNK_01b0a2bc + 0x1b0a0bc));
    uVar2 = func_0x01c23578(1000,iVar9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar2,*puVar8);
    iVar6 = *(int *)(param_1 + 0x68);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    iVar9 = 0;
    uVar2 = func_0x01c23578(2000,*(undefined4 *)(iVar6 + 0xc),0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x03652b00(iVar1,uVar2,*puVar8);
    iVar6 = 0x7d2;
    puVar7 = *(undefined4 **)(_UNK_01b0a2c4 + 0x1b0a150);
    while( true ) {
      iVar3 = *(int *)(param_1 + 0x68);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar3 + 0xc) <= iVar9) break;
      iVar3 = *(int *)(param_1 + 0x68);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      func_0x024501ac(&uStack_58,iVar3,iVar9,*puVar7);
      uVar2 = uStack_54;
      uVar5 = func_0x01c23578(iVar6 + -1,uStack_58,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar1,uVar5,*puVar8);
      uVar2 = func_0x01c23578(iVar6,uVar2,0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03652b00(iVar1,uVar2,*puVar8);
      iVar6 = iVar6 + 2;
      iVar9 = iVar9 + 1;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8857,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02174108(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.RescueBoardActivity$$LoadSetup RVA 0x1afa2cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0a2cc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_01b0a658 + 0x1b0a2e8);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0a65c + 0x1b0a2fc));
    func_0x01384978(*(undefined4 *)(_UNK_01b0a660 + 0x1b0a308));
    func_0x01384978(*(undefined4 *)(_UNK_01b0a664 + 0x1b0a314));
    func_0x01384978(*(undefined4 *)(_UNK_01b0a668 + 0x1b0a320));
    func_0x01384978(*(undefined4 *)(_UNK_01b0a66c + 0x1b0a32c));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x885a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x885a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iStack_34 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    iStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar1 + 8);
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 3;
    if (iVar1 == 0) {
      uVar5 = 2;
    }
    func_0x0245495c(iVar7,uVar8,&uStack_38,uVar5,0,0);
    return;
  }
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar8 = *(undefined4 *)(param_2 + 0x28);
  uVar5 = func_0x01c23c30(0,uVar8,0);
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  uVar5 = func_0x018150a8(uVar5,0);
  *(undefined4 *)(param_1 + 0x50) = uVar5;
  uVar5 = func_0x01c23c30(1,uVar8,0);
  *(undefined4 *)(param_1 + 0x58) = uVar5;
  uVar5 = func_0x01c23c30(2,uVar8,0);
  *(undefined4 *)(param_1 + 0x5c) = uVar5;
  uVar5 = func_0x01c23c30(3,uVar8,0);
  *(undefined4 *)(param_1 + 0x60) = uVar5;
  FUN_01b0987c(param_1);
  FUN_01b05ddc(param_1);
  FUN_01b05eb4(param_1);
  FUN_01b0608c(param_1);
  iVar1 = *(int *)(param_1 + 0xe0);
  if (iVar1 != 0) {
    uVar5 = func_0x01c23c30(4,uVar8,0);
    *(undefined4 *)(iVar1 + 0x28) = uVar5;
    param_2 = *(int *)(param_1 + 0xe0);
    uVar5 = func_0x01c23c30(5,uVar8,0);
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    *(undefined4 *)(param_2 + 0x2c) = uVar5;
  }
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x024509cc(iVar1,**(undefined4 **)(_UNK_01b0a670 + 0x1b0a470));
  iVar1 = func_0x01c23c30(1000,uVar8,0);
  if (0 < iVar1) {
    iVar7 = 0x3ea;
    puVar10 = *(undefined4 **)(_UNK_01b0a674 + 0x1b0a4a4);
    do {
      iVar2 = func_0x01c23c30(iVar7 + -1,uVar8,0);
      iVar3 = func_0x01c23c30(iVar7,uVar8,0);
      iVar9 = iVar2;
      if (0 < iVar2) {
        iVar9 = iVar3;
        param_2 = iVar3;
      }
      if (0 < iVar9) {
        iVar9 = *(int *)(param_1 + 100);
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        func_0x0245025c(iVar9,iVar2,param_2,*puVar10);
      }
      iVar7 = iVar7 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x68);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  iVar1 = func_0x01c23c30(2000,uVar8,0);
  if (0 < iVar1) {
    iVar7 = 0x7d2;
    uStack_38 = uVar8;
    iStack_34 = param_1;
    do {
      iVar9 = func_0x01c23c30(iVar7 + -1,uVar8,0);
      uVar5 = func_0x01c23c30(iVar7,uVar8,0);
      if (0 < iVar9) {
        iVar2 = *(int *)(param_1 + 0x68);
        uStack_2c = 0;
        uStack_30 = 0;
        func_0x038fd264(&uStack_30,iVar9,uVar5,**(undefined4 **)(_UNK_01b0a678 + 0x1b0a594));
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar5 = uStack_2c;
        uVar8 = uStack_30;
        iVar9 = *(int *)(iVar2 + 8);
        uVar11 = *(uint *)(iVar2 + 0xc);
        piVar4 = *(int **)(_UNK_01b0a67c + 0x1b0a5dc);
        *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
        iVar3 = *piVar4;
        if (iVar9 == 0) {
          func_0x01384bf0();
        }
        if (uVar11 < *(uint *)(iVar9 + 0xc)) {
          *(uint *)(iVar2 + 0xc) = uVar11 + 1;
          iVar9 = iVar9 + uVar11 * 8;
          *(undefined4 *)(iVar9 + 0x10) = uVar8;
          *(undefined4 *)(iVar9 + 0x14) = uVar5;
          param_1 = iStack_34;
          uVar8 = uStack_38;
        }
        else {
          func_0x024501b4(iVar2,uVar8,uVar5,
                          *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x38));
          param_1 = iStack_34;
          uVar8 = uStack_38;
        }
      }
      iVar7 = iVar7 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_01b098d4(param_1,0);
  FUN_01b09adc(param_1);
  return;
}



// ===== FAT.RescueBoardActivity$$WhenEnd RVA 0x1afa680 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0a680(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar3 = (char *)(_UNK_01b0aec0 + 0x1b0a698);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0aec4 + 0x1b0a6ac));
    func_0x01384978(*(undefined4 *)(_UNK_01b0aec8 + 0x1b0a6b8));
    func_0x01384978(*(undefined4 *)(_UNK_01b0aecc + 0x1b0a6c4));
    func_0x01384978(*(undefined4 *)(_UNK_01b0aed0 + 0x1b0a6d0));
    func_0x01384978(*(undefined4 *)(_UNK_01b0aed4 + 0x1b0a6dc));
    func_0x01384978(*(undefined4 *)(_UNK_01b0aed8 + 0x1b0a6e8));
    func_0x01384978(*(undefined4 *)(_UNK_01b0aedc + 0x1b0a6f4));
    func_0x01384978(*(undefined4 *)(_UNK_01b0aee0 + 0x1b0a700));
    func_0x01384978(*(undefined4 *)(_UNK_01b0aee4 + 0x1b0a70c));
    func_0x01384978(*(undefined4 *)(_UNK_01b0aee8 + 0x1b0a718));
    func_0x01384978(*(undefined4 *)(_UNK_01b0aeec + 0x1b0a724));
    func_0x01384978(*(undefined4 *)(_UNK_01b0aef0 + 0x1b0a730));
    func_0x01384978(*(undefined4 *)(_UNK_01b0aef4 + 0x1b0a73c));
    *pcVar3 = '\x01';
  }
  uStack_2c = 0;
  uStack_30 = 0;
  iStack_34 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_44 = 0;
  uStack_48 = 0;
  iStack_4c = 0;
  iVar1 = func_0x0229f06c(0x885d,0);
  if (iVar1 == 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0xfc);
    uVar4 = *(undefined4 *)(param_1 + 0xa0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01e7437c(iVar1,uVar4,0,0,0);
    piVar6 = *(int **)(_UNK_01b0aef8 + 0x1b0a804);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x028c8d78(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0302a7c0(&uStack_30,iVar1,&iStack_34,**(undefined4 **)(_UNK_01b0aefc + 0x1b0a840));
    if ((*(int *)(param_1 + 0x4c) != 0) && (0 < *(int *)(param_1 + 0x5c))) {
      iVar2 = *(int *)(param_1 + 0x50);
      iVar1 = 0;
      if (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 0x1c);
      }
      if (iVar2 != 0 && iVar1 != 0) {
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x028c8d78(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0302a45c(&uStack_58,iVar1,&iStack_4c,**(undefined4 **)(_UNK_01b0af00 + 0x1b0a8b8));
        iVar1 = iStack_4c;
        iVar2 = *(int *)(param_1 + 0x4c);
        uStack_44 = uStack_54;
        uStack_48 = uStack_58;
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar4 = *(undefined4 *)(param_1 + 0x5c);
        uVar7 = *(undefined4 *)(iVar2 + 0x50);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0245025c(iVar1,uVar7,uVar4,**(undefined4 **)(_UNK_01b0af04 + 0x1b0a904));
        iVar1 = *(int *)(param_1 + 0x50);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = iStack_34;
        piVar6 = *(int **)(_UNK_01b0af08 + 0x1b0a930);
        uVar4 = *(undefined4 *)(iVar1 + 0x1c);
        iVar1 = *piVar6;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar6;
        }
        func_0x02b4aed4(uVar4,iVar2,*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 900),iStack_4c,0);
        func_0x028c98a0(&uStack_48,0);
      }
    }
    func_0x01b0af40(param_1,iStack_34);
    if (*(int *)(param_1 + 0xd0) != 0) {
      func_0x02bf7198(*(int *)(param_1 + 0xd0),iStack_34,0);
    }
    if (*(int *)(**(int **)(_UNK_01b0af0c + 0x1b0a9a8) + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = 0;
    func_0x024500c4(&uStack_58,0);
    uStack_40 = CONCAT44(uStack_54,uStack_58);
    uStack_38 = uStack_50;
    piVar6 = *(int **)(_UNK_01b0af10 + 0x1b0a9e8);
    pcVar3 = (char *)(_UNK_01b0af14 + 0x1b0a9f4);
    pcVar8 = (char *)(_UNK_01b0af18 + 0x1b0a9f8);
    while( true ) {
      iVar2 = iStack_34;
      if (iStack_34 == 0) {
        func_0x01384bf0();
      }
      iVar5 = iStack_34;
      if (*(int *)(iVar2 + 0xc) <= iVar1) break;
      if (iStack_34 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x0328eea8(iVar5,iVar1,**(undefined4 **)(_UNK_01b0af1c + 0x1b0aa30));
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x01384ab4();
      }
      if (0 < uStack_40._4_4_) {
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar5 = **(int **)(_UNK_01b0af20 + 0x1b0aa7c);
        if (*pcVar3 == '\0') {
          func_0x01384978(piVar6);
          *pcVar3 = '\x01';
        }
        if (*pcVar8 == '\0') {
          func_0x01384978(*(undefined4 *)(_UNK_01b0af24 + 0x1b0aab0));
          *pcVar8 = '\x01';
        }
        if (iVar5 == 0) {
          uVar7 = 0;
          uVar4 = 0;
        }
        else {
          uVar4 = func_0x0148d698(iVar5,0);
          uVar7 = *(undefined4 *)(iVar5 + 8);
        }
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x019a7f14(&uStack_40,uVar4,uVar7,0);
      }
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x014867c8(iVar2 + 8,0);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x01384ab4();
      }
      if (*pcVar3 == '\0') {
        func_0x01384978(piVar6);
        *pcVar3 = '\x01';
      }
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01b0af28 + 0x1b0ab6c));
        *pcVar8 = '\x01';
      }
      if (iVar5 == 0) {
        uVar7 = 0;
        uVar4 = 0;
      }
      else {
        uVar4 = func_0x0148d698(iVar5,0);
        uVar7 = *(undefined4 *)(iVar5 + 8);
      }
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x019a7f14(&uStack_40,uVar4,uVar7,0);
      iVar5 = **(int **)(_UNK_01b0af2c + 0x1b0abd0);
      if (*pcVar3 == '\0') {
        func_0x01384978(piVar6);
        *pcVar3 = '\x01';
      }
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01b0af30 + 0x1b0ac04));
        *pcVar8 = '\x01';
      }
      if (iVar5 == 0) {
        uVar7 = 0;
        uVar4 = 0;
      }
      else {
        uVar4 = func_0x0148d698(iVar5,0);
        uVar7 = *(undefined4 *)(iVar5 + 8);
      }
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x019a7f14(&uStack_40,uVar4,uVar7,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      iVar2 = func_0x014867c8(iVar2 + 0x10,0);
      if (*pcVar3 == '\0') {
        func_0x01384978(piVar6);
        *pcVar3 = '\x01';
      }
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_01b0af34 + 0x1b0acac));
        *pcVar8 = '\x01';
      }
      if (iVar2 == 0) {
        uVar7 = 0;
        uVar4 = 0;
      }
      else {
        uVar4 = func_0x0148d698(iVar2,0);
        uVar7 = *(undefined4 *)(iVar2 + 8);
      }
      if (*(int *)(*piVar6 + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x019a7f14(&uStack_40,uVar4,uVar7,0);
      iVar1 = iVar1 + 1;
    }
    if (*(int *)(*piVar6 + 0x74) == 0) {
      func_0x01384ab4();
    }
    uVar4 = func_0x0148d6d8(&uStack_40,0);
    func_0x02314be0(param_1,uVar4,0);
    iVar1 = iStack_34;
    if (iStack_34 == 0) {
      func_0x01384bf0();
    }
    if (*(int *)(iVar1 + 0xc) < 1) {
      func_0x03633b24(&uStack_30,**(undefined4 **)(_UNK_01b0af3c + 0x1b0addc));
    }
    else {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar7 = *(undefined4 *)(param_1 + 0xac);
      iVar1 = *(int *)(iVar1 + 0xfc);
      uStack_58 = uStack_30;
      uStack_54 = uStack_2c;
      uVar4 = func_0x01384abc(**(undefined4 **)(_UNK_01b0af38 + 0x1b0ad90),&uStack_58);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x01e7437c(iVar1,uVar7,0,uVar4,0);
    }
    FUN_01b047d4(param_1);
    func_0x01b0afb4(param_1);
    func_0x01b0b020(param_1);
    if (*(int *)(param_1 + 0xd0) != 0) {
      func_0x02bf56a4(*(int *)(param_1 + 0xd0),0);
      iVar1 = *(int *)(param_1 + 0xd0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x02bf6458(iVar1,0);
      *(undefined4 *)(param_1 + 0xd0) = 0;
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x885d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02173f80(iVar1,param_1,0);
  }
  return;
}



// ===== FAT.RescueBoardActivity$$CollectAllBoardReward RVA 0x1afaf40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b0af40(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined8 uVar12;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  uVar12 = func_0x0229f06c(0x885e,0);
  iVar1 = (int)((ulonglong)uVar12 >> 0x20);
  if ((int)uVar12 != 0) {
    iVar1 = func_0x0229f13c(0x885e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = 0;
    uStack_30 = CONCAT44(*(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc),
                         *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8));
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 3;
    if (iVar1 == 0) {
      uVar3 = 2;
    }
    uStack_58 = 0;
    uStack_54 = 0;
    uVar6 = func_0x0245495c(iVar4,uVar6,&uStack_38,uVar3);
    return uVar6;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x3c);
  }
  if (param_2 != 0 && iVar1 != 0) {
    pcVar5 = (char *)(_UNK_02c03dbc + 0x2c038b8);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02c03dc0 + 0x2c038cc),iVar1,0);
      func_0x01384978(*(undefined4 *)(_UNK_02c03dc4 + 0x2c038d8));
      func_0x01384978(*(undefined4 *)(_UNK_02c03dc8 + 0x2c038e4));
      func_0x01384978(*(undefined4 *)(_UNK_02c03dcc + 0x2c038f0));
      func_0x01384978(*(undefined4 *)(_UNK_02c03dd0 + 0x2c038fc));
      func_0x01384978(*(undefined4 *)(_UNK_02c03dd4 + 0x2c03908));
      func_0x01384978(*(undefined4 *)(_UNK_02c03dd8 + 0x2c03914));
      func_0x01384978(*(undefined4 *)(_UNK_02c03ddc + 0x2c03920));
      func_0x01384978(*(undefined4 *)(_UNK_02c03de0 + 0x2c0392c));
      func_0x01384978(*(undefined4 *)(_UNK_02c03de4 + 0x2c03938));
      func_0x01384978(*(undefined4 *)(_UNK_02c03de8 + 0x2c03944));
      func_0x01384978(*(undefined4 *)(_UNK_02c03dec + 0x2c03950));
      func_0x01384978(*(undefined4 *)(_UNK_02c03df0 + 0x2c0395c));
      func_0x01384978(*(undefined4 *)(_UNK_02c03df4 + 0x2c03968));
      func_0x01384978(*(undefined4 *)(_UNK_02c03df8 + 0x2c03974));
      func_0x01384978(*(undefined4 *)(_UNK_02c03dfc + 0x2c03980));
      func_0x01384978(*(undefined4 *)(_UNK_02c03e00 + 0x2c0398c));
      *pcVar5 = '\x01';
    }
    uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_40 = 0;
    uStack_30 = 0;
    iVar4 = func_0x0229f06c(0x5c20,0);
    if (iVar4 == 0) {
      iVar4 = func_0x01384be4(**(undefined4 **)(_UNK_02c03e04 + 0x2c03a08));
      func_0x02c05f70(iVar4,0);
      if (param_2 == 0 || iVar1 == 0) {
        uVar6 = **(undefined4 **)(_UNK_02c03e08 + 0x2c03a30);
      }
      else {
        piVar7 = *(int **)(_UNK_02c03e0c + 0x2c03a40);
        iVar2 = *piVar7;
        if (*(int *)(iVar2 + 0x74) == 0) {
          func_0x01384ab4();
          iVar2 = *piVar7;
        }
        iVar2 = **(int **)(iVar2 + 0x5c);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        puVar10 = *(undefined4 **)(_UNK_02c03e10 + 0x2c03a78);
        uVar6 = func_0x0359c52c(iVar2,*puVar10);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        iVar2 = **(int **)(*piVar7 + 0x5c);
        *(undefined4 *)(iVar4 + 8) = uVar6;
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar6 = func_0x0359c52c(iVar2,*puVar10);
        puVar10 = *(undefined4 **)(_UNK_02c03e14 + 0x2c03ac0);
        *(undefined4 *)(iVar4 + 0xc) = uVar6;
        uVar6 = func_0x01384be4(*puVar10);
        func_0x03ccb96c(uVar6,iVar4,**(undefined4 **)(_UNK_02c03e18 + 0x2c03ae4),0);
        func_0x021475dc(iVar1,uVar6,5,0);
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar2 = *(int *)(iVar4 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x40);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        func_0x03d5a200(&uStack_58,iVar2,**(undefined4 **)(_UNK_02c03e1c + 0x2c03b44));
        uStack_30 = (ulonglong)uStack_48;
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        while (iVar2 = func_0x03f9975c(&uStack_40,**(undefined4 **)(_UNK_02c03e34 + 0x2c03b74)),
              uVar6 = uStack_34, iVar2 != 0) {
          uVar3 = (undefined4)uStack_30;
          iVar2 = **(int **)(_UNK_02c03e20 + 0x2c03b90);
          if (*(int *)(iVar2 + 0x74) == 0) {
            func_0x01384ab4();
            iVar2 = **(int **)(_UNK_02c03e24 + 0x2c03bb0);
          }
          uVar8 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x24);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          uVar6 = func_0x01cdcbac(iVar1,uVar6,uVar3,uVar8,0,0,0,0x35,
                                  **(undefined4 **)(_UNK_02c03e28 + 0x2c03bd0),
                                  **(undefined4 **)(_UNK_02c03e2c + 0x2c03bdc),0);
          iVar2 = *(int *)(param_2 + 8);
          uVar9 = *(uint *)(param_2 + 0xc);
          piVar7 = *(int **)(_UNK_02c03e30 + 0x2c03c30);
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
          iVar11 = *piVar7;
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          if (uVar9 < *(uint *)(iVar2 + 0xc)) {
            *(uint *)(param_2 + 0xc) = uVar9 + 1;
            *(undefined4 *)(iVar2 + uVar9 * 4 + 0x10) = uVar6;
          }
          else {
            func_0x0328f170(param_2,uVar6,
                            *(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
          }
        }
        func_0x03f9989c(&uStack_40,**(undefined4 **)(_UNK_02c03e38 + 0x2c03c84));
        piVar7 = *(int **)(_UNK_02c03e40 + 0x2c03ca0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar6 = func_0x02c03e4c(*(undefined4 *)(iVar4 + 8));
        iVar1 = *piVar7;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar7;
        }
        uVar3 = *(undefined4 *)(iVar4 + 8);
        iVar1 = **(int **)(iVar1 + 0x5c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        puVar10 = *(undefined4 **)(_UNK_02c03e44 + 0x2c03cf4);
        func_0x0359c65c(iVar1,uVar3,*puVar10);
        uVar3 = *(undefined4 *)(iVar4 + 0xc);
        iVar1 = **(int **)(*piVar7 + 0x5c);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x0359c65c(iVar1,uVar3,*puVar10);
      }
    }
    else {
      iVar4 = func_0x0229f13c(0x5c20,0);
      if (iVar4 == 0) {
        func_0x01384bf0();
      }
      uVar6 = func_0x02173d58(iVar4,param_2,iVar1,0);
    }
    return uVar6;
  }
  return 0;
}



// ===== FAT.RescueBoardActivity$$ClearScoreEntity RVA 0x1afafb4 =====

void FUN_01b0afb4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x885f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x885f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(int *)(param_1 + 0xdc) != 0) {
    func_0x02af7520(*(int *)(param_1 + 0xdc),0);
  }
  *(undefined4 *)(param_1 + 0xdc) = 0;
  return;
}



// ===== FAT.RescueBoardActivity$$ClearSpawnBonusHandler RVA 0x1afb020 =====

void FUN_01b0b020(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8860,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8860,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    uVar4 = *(undefined4 *)(param_1 + 0xe0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x01dbba60(iVar1,uVar4,0);
  }
  *(undefined4 *)(param_1 + 0xe0) = 0;
  return;
}



// ===== FAT.RescueBoardActivity$$WhenReset RVA 0x1afb0c0 =====

void FUN_01b0b0c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8861,0);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x70) = 0;
    FUN_01b047d4(param_1);
    FUN_01b0afb4(param_1);
    iVar1 = func_0x0229f06c(0x8860,0);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0xe0) != 0) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 0x4c);
        uVar4 = *(undefined4 *)(param_1 + 0xe0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01dbba60(iVar1,uVar4,0);
      }
      *(undefined4 *)(param_1 + 0xe0) = 0;
      return;
    }
    iVar1 = func_0x0229f13c(0x8860,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8861,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.RescueBoardActivity$$Open RVA 0x1afb130 =====

void FUN_01b0b130(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = func_0x0229f06c(0x8862,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8862,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    return;
  }
  iVar1 = *(int *)(param_1 + 0xbc);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_18 = 0;
  uStack_14 = 0;
  func_0x02b57dac(param_1,*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(param_1 + 0xb4),
                  *(undefined4 *)(param_1 + 0x80));
  return;
}



// ===== FAT.RescueBoardActivity$$JumpTask RVA 0x1afb1bc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0b1bc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_01b0b420 + 0x1b0b1dc);
  if (*pcVar6 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0b424 + 0x1b0b1f0));
    func_0x01384978(*(undefined4 *)(_UNK_01b0b428 + 0x1b0b1fc));
    func_0x01384978(*(undefined4 *)(_UNK_01b0b42c + 0x1b0b208));
    func_0x01384978(*(undefined4 *)(_UNK_01b0b430 + 0x1b0b214));
    *pcVar6 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8863,0);
  if (iVar1 == 0) {
    uStack_28 = *(undefined4 *)(param_1 + 0x94);
    uStack_30 = *(undefined8 *)(param_1 + 0x8c);
    func_0x02b64d7c(&uStack_30,0);
    puVar7 = *(undefined4 **)(_UNK_01b0b434 + 0x1b0b294);
    iVar1 = func_0x034aaa34(*puVar7);
    iVar4 = *(int *)(param_1 + 0xb4);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar5 = *(undefined4 *)(iVar4 + 0xc);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01eea2b8(iVar1,uVar5,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0xbc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar9 = *(undefined4 *)(param_1 + 0x80);
      uVar3 = *(undefined4 *)(param_1 + 0xb4);
      uVar8 = *(undefined4 *)(iVar1 + 0xc);
      uVar5 = func_0x01384be4(**(undefined4 **)(_UNK_01b0b43c + 0x1b0b3cc));
      func_0x024500b4(uVar5,param_1,**(undefined4 **)(_UNK_01b0b440 + 0x1b0b3f8),0);
      func_0x02b57dac(param_1,uVar8,uVar3,uVar9,uVar5,0);
    }
    else {
      iVar1 = func_0x01c24918(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = *(int *)(iVar1 + 0x9c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar1 = func_0x01c74c1c(iVar1,0);
      if (iVar1 == 0) {
        iVar1 = func_0x034aaa34(*puVar7);
        iVar4 = *(int *)(param_1 + 0xc0);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uVar5 = *(undefined4 *)(iVar4 + 0xc);
        piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01b0b438 + 0x1b0b33c),1);
        if (piVar2 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar4 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar2 + 0x20));
        if (iVar4 == 0) {
          uVar3 = func_0x01384c10();
          func_0x01384aa0(uVar3,0);
        }
        if (piVar2[3] == 0) {
          func_0x01384bf4();
        }
        piVar2[4] = param_1;
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01ee858c(iVar1,uVar5,piVar2,0);
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8863,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179a68(iVar1,param_1,param_2,param_3,0);
  }
  return;
}



// ===== FAT.RescueBoardActivity$$ResEnumerate RVA 0x1afb444 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b0b444(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01b0b4f4 + 0x1b0b458);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0b4f8 + 0x1b0b46c));
    *pcVar3 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8865,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8865,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar3 = (char *)(_UNK_021c7568 + 0x21c7488);
    if (*pcVar3 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021c756c + 0x21c749c),param_1,0);
      *pcVar3 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar5,&uStack_30,uVar2,0,0);
    iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7570 + 0x21c7558));
    return iVar1;
  }
  iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b0b4fc + 0x1b0b4c4));
  func_0x0244f5a0(iVar1,0);
  *(undefined4 *)(iVar1 + 8) = 0xfffffffe;
  uVar5 = func_0x0245057c(0);
  *(undefined4 *)(iVar1 + 0x14) = uVar5;
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  return iVar1;
}



// ===== FAT.RescueBoardActivity.<ResEnumerate>d__130$$.ctor RVA 0x1afb500 =====

void FUN_01b0b500(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  func_0x0244f5a0(param_1,0);
  *(undefined4 *)(param_1 + 8) = param_2;
  uVar1 = func_0x0245057c(0);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}



// ===== FAT.RescueBoardActivity$$GetCurTargetAreaIds RVA 0x1afb528 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b0b528(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x8877,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8877,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar5 = (char *)(_UNK_022065c0 + 0x22064e0);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_022065c4 + 0x22064f4),param_1,0);
      *pcVar5 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar3 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar4,uVar3,&uStack_30,uVar2,0,0);
    uVar3 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_022065c8 + 0x22065b0));
    return uVar3;
  }
  iVar1 = FUN_01b04650(param_1);
  if (iVar1 != 0) {
    uVar3 = *(undefined4 *)(iVar1 + 0x30);
  }
  return uVar3;
}



// ===== FAT.RescueBoardActivity$$GetTargetHitCount RVA 0x1afb590 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b0b590(int param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_01b0b650 + 0x1b0b5ac);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0b654 + 0x1b0b5c0));
    *pcVar2 = '\x01';
  }
  uStack_14 = 0;
  iVar1 = func_0x0229f06c(0x8878,0);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 100);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02450590(iVar1,param_2,&uStack_14,**(undefined4 **)(_UNK_01b0b658 + 0x1b0b63c));
  }
  else {
    iVar1 = func_0x0229f13c(0x8878,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_14 = func_0x02175ef0(iVar1,param_1,param_2,0);
  }
  return uStack_14;
}



// ===== FAT.RescueBoardActivity$$GetTargetIdByCloudId RVA 0x1afb65c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b0b65c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int unaff_r7;
  undefined4 *puVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01b0b77c + 0x1b0b674);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0b780 + 0x1b0b688));
    func_0x01384978(*(undefined4 *)(_UNK_01b0b784 + 0x1b0b694));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8879,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8879,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar5,&uStack_38,uVar2,0,0);
    uVar5 = func_0x0245498c(&uStack_38,0,0);
    return uVar5;
  }
  iVar1 = FUN_01b04650(param_1);
  if (iVar1 != 0) {
    unaff_r7 = *(int *)(iVar1 + 0x30);
    param_1 = iVar1;
  }
  if (iVar1 != 0 && unaff_r7 != 0) {
    iVar1 = 0;
    puVar6 = *(undefined4 **)(_UNK_01b0b788 + 0x1b0b71c);
    while( true ) {
      if (unaff_r7 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(unaff_r7 + 0xc) <= iVar1) goto LAB_01b0b700;
      iVar3 = *(int *)(param_1 + 0x30);
      if (iVar3 == 0) {
        func_0x01384bf0();
      }
      uVar5 = func_0x0364c9b8(iVar3,iVar1,*puVar6);
      iVar3 = func_0x01816d10(uVar5,0);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == param_2)) break;
      unaff_r7 = *(int *)(param_1 + 0x30);
      iVar1 = iVar1 + 1;
    }
  }
  else {
LAB_01b0b700:
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



// ===== FAT.RescueBoardActivity$$GetMilestoneConfig RVA 0x1afb78c =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b0b78c(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_r4;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [4];
  
  pcVar8 = (char *)(_UNK_01b0b868 + 0x1b0b7a4);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0b86c + 0x1b0b7b8));
    func_0x01384978(*(undefined4 *)(_UNK_01b0b870 + 0x1b0b7c4));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x2374,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x2374,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_021f749c + 0x21f73a8);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_021f74a0 + 0x21f73bc),param_1,param_2,0);
      *pcVar8 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    auStack_28[0] = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar6,0,0);
    uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_021f74a4 + 0x21f748c));
    return uVar9;
  }
  if ((((*(int *)(param_1 + 0x50) == 0) || (param_2 < 0)) ||
      (iVar2 = *(int *)(*(int *)(param_1 + 0x50) + 0x34), iVar2 == 0)) ||
     (*(int *)(iVar2 + 0xc) <= param_2)) {
    return 0;
  }
  uVar9 = func_0x0364c9b8(iVar2,param_2,**(undefined4 **)(_UNK_01b0b874 + 0x1b0b84c));
  pcVar8 = (char *)(_UNK_01815f4c + 0x1815ef0);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01815f50 + 0x1815f04),0);
    func_0x01384978(*(undefined4 *)(_UNK_01815f54 + 0x1815f10));
    *pcVar8 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_01815f58 + 0x1815f24) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar7 = **(int **)(_UNK_01815f5c + 0x1815f40);
  iVar2 = *(int *)(iVar7 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x02457d84();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x02457d84();
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x02457d48();
  }
  iVar2 = *(int *)(iVar7 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x02457d84();
  }
  piVar3 = (int *)func_0x0369fa64(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0xe8));
  if (piVar3 == (int *)0x0) {
    func_0x02457d50();
  }
  iVar2 = *(int *)(iVar7 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x02457d84();
  }
  iVar7 = *(int *)(*(int *)(iVar2 + 0x60) + 0xf4);
  auStack_28[0] = 0;
  uStack_2c = 0;
  (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
  iVar2 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
  if (iVar2 != 0) {
    unaff_r4 = piVar3[0x11];
  }
  bVar1 = true;
  iVar5 = 0;
  if (iVar2 != 0 && unaff_r4 != 0) {
    iVar4 = func_0x03d66780(unaff_r4,uVar9,auStack_28,
                            *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x68));
    uVar6 = auStack_28[0];
    bVar1 = false;
    iVar5 = unaff_r4;
    if (iVar4 != 0) {
      iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
      if (iVar2 == 0) {
        return auStack_28[0];
      }
      (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
      return auStack_28[0];
    }
  }
  if ((piVar3[0x12] == 0) ||
     (iVar4 = func_0x0421f3b0(piVar3[0x12],uVar9,
                              *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x13c)),
     iVar4 == 0)) {
    uStack_2c = 0;
    iVar4 = (**(code **)(*piVar3 + 0x1a0))(piVar3,uVar9,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4))
    ;
    uVar6 = uStack_2c;
    if (iVar4 != 0) {
      if (iVar2 != 0) {
        if (bVar1) {
          if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x40) + 0xbd) & 1) ==
              0) {
            func_0x02457d84();
          }
          iVar5 = func_0x02457d58();
          func_0x03d63f04(iVar5,4,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x74));
          piVar3[0x11] = iVar5;
        }
        if (iVar5 == 0) {
          func_0x02457d50();
        }
        func_0x03d6491c(iVar5,uVar9,uVar6,
                        *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x78));
      }
      iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
      if (iVar2 == 0) {
        return uVar6;
      }
      (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
      return uVar6;
    }
    iVar2 = piVar3[0x12];
    if (iVar2 == 0) {
      if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x48) + 0xbd) & 1) == 0) {
        func_0x02457d84();
      }
      iVar2 = func_0x02457d58();
      func_0x0421ec60(iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x144));
      piVar3[0x12] = iVar2;
      if (iVar2 == 0) {
        func_0x02457d50();
        iVar2 = 0;
      }
    }
    func_0x04220004(iVar2,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x148));
  }
  func_0x0369fb50(piVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x134));
  return 0;
}



// ===== FAT.RescueBoardActivity$$ClaimMilestoneReward RVA 0x1afb878 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0b878(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  int *piVar10;
  int unaff_r10;
  undefined4 uVar11;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar9 = (char *)(_UNK_01b0bc08 + 0x1b0b894);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0bc0c + 0x1b0b8a8));
    func_0x01384978(*(undefined4 *)(_UNK_01b0bc10 + 0x1b0b8b4));
    func_0x01384978(*(undefined4 *)(_UNK_01b0bc14 + 0x1b0b8c0));
    func_0x01384978(*(undefined4 *)(_UNK_01b0bc18 + 0x1b0b8cc));
    func_0x01384978(*(undefined4 *)(_UNK_01b0bc1c + 0x1b0b8d8));
    func_0x01384978(*(undefined4 *)(_UNK_01b0bc20 + 0x1b0b8e4));
    func_0x01384978(*(undefined4 *)(_UNK_01b0bc24 + 0x1b0b8f0));
    func_0x01384978(*(undefined4 *)(_UNK_01b0bc28 + 0x1b0b8fc));
    func_0x01384978(*(undefined4 *)(_UNK_01b0bc2c + 0x1b0b908));
    func_0x01384978(*(undefined4 *)(_UNK_01b0bc30 + 0x1b0b914));
    func_0x01384978(*(undefined4 *)(_UNK_01b0bc34 + 0x1b0b920));
    func_0x01384978(*(undefined4 *)(_UNK_01b0bc38 + 0x1b0b92c));
    *pcVar9 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x0229f06c(0x8835,0);
  if (iVar1 == 0) {
    iVar2 = FUN_01b0b78c(param_1,param_2);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x18);
      unaff_r10 = iVar2;
    }
    if (iVar2 != 0 && iVar1 != 0) {
      if (*(int *)(**(int **)(_UNK_01b0bc3c + 0x1b0b9b0) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x028c8d78(0);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0302a7c0(&uStack_30,iVar1,&iStack_28,**(undefined4 **)(_UNK_01b0bc40 + 0x1b0b9ec));
      iVar1 = 0;
      piVar10 = *(int **)(_UNK_01b0bc44 + 0x1b0ba14);
      while( true ) {
        iVar2 = *(int *)(unaff_r10 + 0x18);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar2 + 0xc) <= iVar1) break;
        iVar2 = *(int *)(unaff_r10 + 0x18);
        if (iVar2 == 0) {
          func_0x01384bf0();
        }
        uVar3 = func_0x03653d1c(iVar2,iVar1,**(undefined4 **)(_UNK_01b0bc48 + 0x1b0ba4c));
        if (*(int *)(**(int **)(_UNK_01b0bc4c + 0x1b0ba64) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar2 = func_0x02565a88(uVar3,0);
        if (iVar2 != 0) {
          iVar4 = func_0x01c24918(0);
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          iVar5 = *piVar10;
          uVar11 = *(undefined4 *)(iVar2 + 8);
          uVar3 = *(undefined4 *)(iVar2 + 0xc);
          iVar2 = *(int *)(iVar4 + 0x40);
          if (*(int *)(iVar5 + 0x74) == 0) {
            func_0x01384ab4();
            iVar5 = *piVar10;
          }
          uVar7 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x380);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uVar3 = func_0x01cdcbac(iVar2,uVar11,uVar3,uVar7,0,0,0,0x1b1,
                                  **(undefined4 **)(_UNK_01b0bc50 + 0x1b0baf0),
                                  **(undefined4 **)(_UNK_01b0bc54 + 0x1b0bafc),0);
          iVar2 = iStack_28;
          if (iStack_28 == 0) {
            func_0x01384bf0();
          }
          iVar4 = *(int *)(iVar2 + 8);
          uVar8 = *(uint *)(iVar2 + 0xc);
          piVar6 = *(int **)(_UNK_01b0bc58 + 0x1b0bb5c);
          *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
          iVar5 = *piVar6;
          if (iVar4 == 0) {
            func_0x01384bf0();
          }
          if (uVar8 < *(uint *)(iVar4 + 0xc)) {
            *(uint *)(iVar2 + 0xc) = uVar8 + 1;
            *(undefined4 *)(iVar4 + uVar8 * 4 + 0x10) = uVar3;
          }
          else {
            func_0x0328f170(iVar2,uVar3,
                            *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
          }
        }
        iVar1 = iVar1 + 1;
      }
      if (*(int *)(**(int **)(_UNK_01b0bc5c + 0x1b0bbb4) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01b0bc60 + 0x1b0bbd0));
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x0349b788(iVar1,uStack_30,uStack_2c,**(undefined4 **)(_UNK_01b0bc64 + 0x1b0bbf0));
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8835,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x021773c4(iVar1,param_1,param_2,0);
  }
  return;
}



// ===== FAT.RescueBoardActivity$$CheckMilestoneFinish RVA 0x1afbc68 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01b0bc68(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_01b0bd38 + 0x1b0bc7c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0bd3c + 0x1b0bc90));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x887a,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x887a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar3 = 2;
    if (iVar1 == 0) {
      uVar3 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar3,0,0);
    uVar2 = func_0x0245496c(&uStack_30,0,0);
    return uVar2;
  }
  iVar5 = *(int *)(param_1 + 0x50);
  iVar1 = 0;
  if (iVar5 != 0) {
    iVar1 = *(int *)(iVar5 + 0x34);
  }
  if (iVar5 != 0 && iVar1 != 0) {
    iVar1 = FUN_01b061d4(param_1);
    iVar5 = *(int *)(param_1 + 0x50);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    iVar5 = *(int *)(iVar5 + 0x34);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    return (uint)(*(int *)(iVar5 + 0xc) <= iVar1);
  }
  return 1;
}



// ===== FAT.RescueBoardActivity$$GetMilestonePhase RVA 0x1afbd40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b0bd40(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar2 = func_0x0229f06c(0x2372,0);
  if (iVar2 == 0) {
    pcVar4 = (char *)(_UNK_01b062c8 + 0x1b061e8);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_01b062cc + 0x1b061fc));
      func_0x01384978(*(undefined4 *)(_UNK_01b062d0 + 0x1b06208));
      *pcVar4 = '\x01';
    }
    iVar5 = 0;
    iVar2 = func_0x0229f06c(0x2373,0);
    if (iVar2 == 0) {
      uVar9 = FUN_01b0b78c(param_1,0);
      if ((int)uVar9 != 0) {
        iVar5 = 0;
        puVar6 = *(undefined4 **)(_UNK_01b062d4 + 0x1b0627c);
        do {
          iVar2 = (int)((ulonglong)uVar9 >> 0x20);
          iVar1 = *(int *)((int)uVar9 + 0x1c);
          if (iVar1 != 0) {
            iVar2 = *(int *)(iVar1 + 0xc);
          }
          if (iVar1 == 0 || iVar2 == 0) {
            return iVar5;
          }
          iVar1 = func_0x0364c9b8(iVar1,0,*puVar6);
          bVar8 = SBORROW4(iVar1,1);
          iVar2 = iVar1 + -1;
          if (0 < iVar1) {
            bVar8 = SBORROW4(*(int *)(param_1 + 0x58),iVar1);
            iVar2 = *(int *)(param_1 + 0x58) - iVar1;
          }
          if (iVar2 < 0 != bVar8) {
            return iVar5;
          }
          iVar5 = iVar5 + 1;
          uVar9 = FUN_01b0b78c(param_1,iVar5);
        } while ((int)uVar9 != 0);
      }
      return iVar5;
    }
    iVar2 = func_0x0229f13c(0x2373,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar2 = func_0x0229f13c(0x2372,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar2 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar2 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar5 = *(int *)(iVar2 + 8);
  uVar7 = *(undefined4 *)(iVar2 + 0xc);
  iVar2 = *(int *)(iVar2 + 0x10);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  func_0x0245495c(iVar5,uVar7,&uStack_30,uVar3,0,0);
  iVar2 = func_0x0245498c(&uStack_30,0,0);
  return iVar2;
}



// ===== FAT.RescueBoardActivity$$GetMilestoneScore RVA 0x1afbd98 =====

undefined4 FUN_01b0bd98(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x887b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x887b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return *(undefined4 *)(param_1 + 0x58);
}



// ===== FAT.RescueBoardActivity$$GetCurrentBoardConfId RVA 0x1afbdec =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b0bdec(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint extraout_r1;
  int iVar4;
  undefined4 extraout_r2;
  undefined4 uVar5;
  int extraout_r3;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar7 = (char *)(_UNK_01b0bef8 + 0x1b0be00);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0befc + 0x1b0be14));
    func_0x01384978(*(undefined4 *)(_UNK_01b0bf00 + 0x1b0be20));
    *pcVar7 = '\x01';
  }
  uVar11 = func_0x0229f06c(0xb8a,0);
  iVar1 = (int)((ulonglong)uVar11 >> 0x20);
  if ((int)uVar11 != 0) {
    iVar1 = func_0x0229f13c(0xb8a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar9 = *(int *)(iVar1 + 8);
    uVar10 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar5 = 2;
    if (iVar1 == 0) {
      uVar5 = 1;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_30,uVar5,0,0);
    iVar1 = func_0x0245498c(&uStack_30,0,0);
    return iVar1;
  }
  iVar9 = *(int *)(param_1 + 0x50);
  if (iVar9 == 0) {
    return 0;
  }
  iVar8 = *(int *)(iVar9 + 0x14);
  if (iVar8 == 0) {
    uVar6 = *(uint *)(param_1 + 0x60);
    iVar4 = 0;
    if (-1 < (int)uVar6) goto LAB_01b0bea8;
    func_0x01384bf0();
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x60);
    iVar4 = *(int *)(iVar8 + 0xc);
    if (iVar4 <= (int)uVar6) {
LAB_01b0bea8:
      iVar8 = *(int *)(iVar9 + 0x2c);
      if (iVar8 != 0) {
        iVar1 = *(int *)(iVar8 + 0xc);
      }
      if (iVar8 == 0 || iVar1 == 0) {
        return 0;
      }
      func_0x01458344(uVar6 - iVar4);
      puVar2 = *(undefined4 **)(_UNK_01b0bf08 + 0x1b0bed8);
      uVar6 = extraout_r1;
      goto LAB_01b0bee8;
    }
  }
  puVar2 = *(undefined4 **)(_UNK_01b0bf04 + 0x1b0beec);
LAB_01b0bee8:
  uVar10 = *puVar2;
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(iVar8 + 0xc))) {
    iVar1 = *(int *)(iVar8 + 8);
    if (iVar1 == 0) {
      func_0x02457d50();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar6) {
      func_0x02457d5c();
    }
    return *(int *)(iVar1 + uVar6 * 4 + 0x10);
  }
  func_0x02457d6c(*(undefined4 *)(iRam0364ca44 + 0x364ca10));
  uVar5 = func_0x02457d58();
  uVar3 = func_0x02457d6c(*(undefined4 *)(iRam0364ca48 + 0x364ca24));
  func_0x047901e8(uVar5,uVar3,0);
  func_0x02457d90(uVar5,uVar10);
  lVar12 = func_0x02457d94();
  uVar6 = (uint)((ulonglong)lVar12 >> 0x20);
  pcVar7 = (char *)(iRam0364cb28 + 0x364ca68);
  uStack_28 = uVar10;
  uStack_24 = uVar5;
  if (*pcVar7 == '\0') {
    func_0x02457d54(*(undefined4 *)(iRam0364cb2c + 0x364ca80));
    *pcVar7 = '\x01';
  }
  if ((-1 < lVar12) && ((int)uVar6 < *(int *)((int)lVar12 + 0xc))) {
    func_0x03031db0(extraout_r2,**(undefined4 **)(iRam0364cb30 + 0x364cab0),
                    *(undefined4 *)(*(int *)(*(int *)(extraout_r3 + 0x10) + 0x60) + 0x80));
    iVar1 = *(int *)((int)lVar12 + 8);
    if (iVar1 == 0) {
      func_0x02457d50();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar6) {
      func_0x02457d5c();
    }
    iVar1 = iVar1 + uVar6 * 4;
    *(undefined4 *)(iVar1 + 0x10) = extraout_r2;
    return iVar1;
  }
  func_0x02457d6c(*(undefined4 *)(iRam0364cb34 + 0x364caf4));
  uVar10 = func_0x02457d58();
  uVar5 = func_0x02457d6c(*(undefined4 *)(iRam0364cb38 + 0x364cb08));
  func_0x047901e8(uVar10,uVar5,0);
  func_0x02457d90(uVar10,extraout_r3);
  func_0x02457d94();
  return 0;
}



// ===== FAT.RescueBoardActivity$$GetDropConfig RVA 0x1afbf0c =====

/* WARNING: Removing unreachable block (ram,0x036a2154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b0bf0c(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_r4;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [4];
  
  pcVar8 = (char *)(_UNK_01b0bfec + 0x1b0bf24);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0bff0 + 0x1b0bf38));
    func_0x01384978(*(undefined4 *)(_UNK_01b0bff4 + 0x1b0bf44));
    *pcVar8 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x887c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x887c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    pcVar8 = (char *)(_UNK_0225cd94 + 0x225cca0);
    if (*pcVar8 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0225cd98 + 0x225ccb4),param_1,param_2,0);
      *pcVar8 = '\x01';
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    auStack_28[0] = 0;
    func_0x0245494c(&uStack_50,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    auStack_28[0] = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar7 = *(int *)(iVar2 + 8);
    uVar9 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar7 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar7,uVar9,&uStack_38,uVar6,0,0);
    uVar9 = func_0x02f5db90(&uStack_38,0,**(undefined4 **)(_UNK_0225cd9c + 0x225cd84));
    return uVar9;
  }
  iVar2 = FUN_01b04650(param_1);
  if ((((iVar2 == 0) || (param_2 < 0)) || (iVar2 = *(int *)(iVar2 + 0x1c), iVar2 == 0)) ||
     (*(int *)(iVar2 + 0xc) <= param_2)) {
    return 0;
  }
  uVar9 = func_0x0364c9b8(iVar2,param_2,**(undefined4 **)(_UNK_01b0bff8 + 0x1b0bfd0));
  pcVar8 = (char *)(_UNK_018155d4 + 0x1815578);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_018155d8 + 0x181558c),0);
    func_0x01384978(*(undefined4 *)(_UNK_018155dc + 0x1815598));
    *pcVar8 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_018155e0 + 0x18155ac) + 0x74) == 0) {
    func_0x01384ab4();
  }
  iVar7 = **(int **)(_UNK_018155e4 + 0x18155c8);
  iVar2 = *(int *)(iVar7 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x02457d84();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x02457d84();
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    func_0x02457d48();
  }
  iVar2 = *(int *)(iVar7 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x02457d84();
  }
  piVar3 = (int *)func_0x0369fa64(*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0xe8));
  if (piVar3 == (int *)0x0) {
    func_0x02457d50();
  }
  iVar2 = *(int *)(iVar7 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = func_0x02457d84();
  }
  iVar7 = *(int *)(*(int *)(iVar2 + 0x60) + 0xf4);
  auStack_28[0] = 0;
  uStack_2c = 0;
  (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
  iVar2 = (**(code **)(*piVar3 + 0xe8))(piVar3,*(undefined4 *)(*piVar3 + 0xec));
  if (iVar2 != 0) {
    unaff_r4 = piVar3[0x11];
  }
  bVar1 = true;
  iVar5 = 0;
  if (iVar2 != 0 && unaff_r4 != 0) {
    iVar4 = func_0x03d66780(unaff_r4,uVar9,auStack_28,
                            *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x68));
    uVar6 = auStack_28[0];
    bVar1 = false;
    iVar5 = unaff_r4;
    if (iVar4 != 0) {
      iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
      if (iVar2 == 0) {
        return auStack_28[0];
      }
      (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
      return auStack_28[0];
    }
  }
  if ((piVar3[0x12] == 0) ||
     (iVar4 = func_0x0421f3b0(piVar3[0x12],uVar9,
                              *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x13c)),
     iVar4 == 0)) {
    uStack_2c = 0;
    iVar4 = (**(code **)(*piVar3 + 0x1a0))(piVar3,uVar9,&uStack_2c,*(undefined4 *)(*piVar3 + 0x1a4))
    ;
    uVar6 = uStack_2c;
    if (iVar4 != 0) {
      if (iVar2 != 0) {
        if (bVar1) {
          if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x40) + 0xbd) & 1) ==
              0) {
            func_0x02457d84();
          }
          iVar5 = func_0x02457d58();
          func_0x03d63f04(iVar5,4,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x74));
          piVar3[0x11] = iVar5;
        }
        if (iVar5 == 0) {
          func_0x02457d50();
        }
        func_0x03d6491c(iVar5,uVar9,uVar6,
                        *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x78));
      }
      iVar2 = (**(code **)(*piVar3 + 0x100))(piVar3,*(undefined4 *)(*piVar3 + 0x104));
      if (iVar2 == 0) {
        return uVar6;
      }
      (**(code **)(*piVar3 + 0x138))(piVar3,uVar9,uVar6,*(undefined4 *)(*piVar3 + 0x13c));
      return uVar6;
    }
    iVar2 = piVar3[0x12];
    if (iVar2 == 0) {
      if ((*(ushort *)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x48) + 0xbd) & 1) == 0) {
        func_0x02457d84();
      }
      iVar2 = func_0x02457d58();
      func_0x0421ec60(iVar2,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x144));
      piVar3[0x12] = iVar2;
      if (iVar2 == 0) {
        func_0x02457d50();
        iVar2 = 0;
      }
    }
    func_0x04220004(iVar2,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x148));
  }
  func_0x0369fb50(piVar3,uVar9,*(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x10) + 0x60) + 0x134));
  return 0;
}



// ===== FAT.RescueBoardActivity$$GetCurrentDropPhase RVA 0x1afbffc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b0bffc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar5 = (char *)(_UNK_01b0c138 + 0x1b0c010);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0c13c + 0x1b0c024));
    func_0x01384978(*(undefined4 *)(_UNK_01b0c140 + 0x1b0c030));
    *pcVar5 = '\x01';
  }
  iVar6 = 0;
  iVar1 = func_0x0229f06c(0x887d,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01b04650(param_1);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x28);
      iVar3 = 0;
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 0xc);
      }
      if (iVar2 != 0 && iVar3 != 0) {
        puVar8 = *(undefined4 **)(_UNK_01b0c144 + 0x1b0c0c0);
        iVar6 = iVar3;
        do {
          iVar6 = iVar6 + -1;
          if (iVar6 < 0) {
            return 0;
          }
          iVar3 = *(int *)(iVar1 + 0x28);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          uVar7 = func_0x0364c9b8(iVar3,iVar6,*puVar8);
          iVar3 = func_0x01c24918(0);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(iVar3 + 0x3c);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          iVar3 = func_0x01cc44e8(iVar3,uVar7,0);
        } while (iVar3 == 0);
      }
    }
    return iVar6;
  }
  iVar6 = func_0x0229f13c(0x887d,0);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar6 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar6 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar1 = *(int *)(iVar6 + 8);
  uVar7 = *(undefined4 *)(iVar6 + 0xc);
  iVar6 = *(int *)(iVar6 + 0x10);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar6 == 0) {
    uVar4 = 1;
  }
  func_0x0245495c(iVar1,uVar7,&uStack_30,uVar4,0,0);
  iVar6 = func_0x0245498c(&uStack_30,0,0);
  return iVar6;
}



// ===== FAT.RescueBoardActivity$$CheckGuideFirstRescue RVA 0x1afc148 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01b0c148(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar3 = (char *)(_UNK_01b0c290 + 0x1b0c15c);
  if (*pcVar3 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0c294 + 0x1b0c170));
    func_0x01384978(*(undefined4 *)(_UNK_01b0c298 + 0x1b0c17c));
    func_0x01384978(*(undefined4 *)(_UNK_01b0c29c + 0x1b0c188));
    *pcVar3 = '\x01';
  }
  uVar4 = 0;
  iVar1 = func_0x0229f06c(0x887e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x887e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar2,0,0);
    uVar4 = func_0x0245496c(&uStack_30,0,0);
    return uVar4;
  }
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if ((iVar1 != 0) && (0 < param_1[0x16])) {
    iVar1 = param_1[0x1a];
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    if ((*(int *)(iVar1 + 0xc) < 1) && ((char)param_1[0x1c] == '\0')) {
      iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01b0c2a0 + 0x1b0c234));
      piVar5 = *(int **)(_UNK_01b0c2a4 + 0x1b0c248);
      iVar6 = *piVar5;
      if (*(int *)(iVar6 + 0x74) == 0) {
        func_0x01384ab4();
        iVar6 = *piVar5;
      }
      uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x1b4);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar4 = func_0x01eeaa54(iVar1,uVar7,1,0);
      uVar4 = uVar4 ^ 1;
    }
  }
  return uVar4;
}



// ===== FAT.RescueBoardActivity$$SetGuideBlock RVA 0x1afc2a8 =====

void FUN_01b0c2a8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0x887f,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x887f,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485228(&uStack_38,param_2,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
    return;
  }
  *(char *)(param_1 + 0x70) = (char)param_2;
  return;
}



// ===== FAT.RescueBoardActivity$$get_HandbookAgent RVA 0x1afc304 =====

undefined4 FUN_01b0c304(int param_1)

{
  return *(undefined4 *)(param_1 + 0xd0);
}



// ===== FAT.RescueBoardActivity$$set_HandbookAgent RVA 0x1afc30c =====

void FUN_01b0c30c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xd0) = param_2;
  return;
}



// ===== FAT.RescueBoardActivity$$CheckIsBoardItem RVA 0x1afc314 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01b0c314(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0x8880,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0xd0);
    if (param_1 == 0) {
      return 0;
    }
    pcVar6 = (char *)(_UNK_02bf6bd0 + 0x2bf6b40);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02bf6bd4 + 0x2bf6b54),param_2,0);
      *pcVar6 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x5c43,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0xc);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      if (*(int *)(iVar1 + 0xc) == 0) {
        uVar2 = 0;
      }
      else {
        iVar1 = func_0x030fe230(*(undefined4 *)(iVar1 + 8),param_2,0);
        uVar2 = (uint)(iVar1 != -1);
      }
      return uVar2;
    }
    iVar1 = func_0x0229f13c(0x5c43,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8880,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485238(&uStack_38,param_2,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 3;
  if (iVar1 == 0) {
    uVar3 = 2;
  }
  func_0x0245495c(iVar4,uVar5,&uStack_38,uVar3,0,0);
  uVar2 = func_0x0245496c(&uStack_38,0,0);
  return uVar2;
}



// ===== FAT.RescueBoardActivity$$OnNewItemUnlock RVA 0x1afc38c =====

void FUN_01b0c38c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8881,0);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0xd0) != 0) {
      func_0x02bf6ab0(*(int *)(param_1 + 0xd0),0);
    }
    param_1 = *(int *)(param_1 + 0xe0);
    if (param_1 == 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x5b3,0);
    if (iVar1 == 0) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      return;
    }
    iVar1 = func_0x0229f13c(0x5b3,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8881,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.RescueBoardActivity$$OnNewItemShow RVA 0x1afc408 =====

void FUN_01b0c408(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = func_0x0229f06c(0x8882,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0xd0);
    if (param_1 == 0) {
      return;
    }
    iVar1 = func_0x0229f06c(0x5c48,0,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x3c);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x02bf6aa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))
                (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
    iVar1 = func_0x0229f13c(0x5c48,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8882,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0245494c(&uStack_50,0,param_2,0);
  uStack_38 = uStack_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_38,param_1,0);
  func_0x01485278(&uStack_38,param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_38,uVar2,0,0);
  return;
}



// ===== FAT.RescueBoardActivity$$CheckClaimBoardCategoryReward RVA 0x1afc47c =====

/* WARNING: Possible PIC construction at 0x02bf69e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bf69e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01b0c47c(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  int unaff_r5;
  int unaff_r6;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_lr;
  undefined1 auStack_18 [7];
  char cStack_11;
  
  iVar1 = func_0x0229f06c(0x8883,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0xd0);
    if (param_1 == 0) {
      return 0;
    }
    pcVar6 = (char *)(_UNK_02bf6a28 + 0x2bf697c);
    if (*pcVar6 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02bf6a2c + 0x2bf6990),param_2,0);
      *pcVar6 = '\x01';
    }
    cStack_11 = '\0';
    iVar1 = func_0x0229f06c(0x5c4a,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      func_0x03d50be8(iVar1,param_2,&cStack_11,**(undefined4 **)(_UNK_02bf6a30 + 0x2bf6a0c));
      return (uint)(cStack_11 == '\0');
    }
    iVar1 = func_0x0229f13c(0x5c4a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2bf69e4;
    unaff_r4 = param_2;
    unaff_r5 = param_1;
    unaff_r6 = iVar1;
    register0x00000054 = (BADSPACEBASE *)auStack_18;
  }
  else {
    iVar1 = func_0x0229f13c(0x8883,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r10;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r9;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0x14) = unaff_r7;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x1c) = unaff_r5;
  *(undefined4 *)((int)register0x00000054 + -0x20) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x38) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x28) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x50),0,param_2,0);
  iVar3 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x38) =
       *(undefined4 *)((int)register0x00000054 + -0x50);
  *(undefined4 *)((int)register0x00000054 + -0x34) =
       *(undefined4 *)((int)register0x00000054 + -0x4c);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x38),param_1,0);
  func_0x01485238((undefined1 *)((int)register0x00000054 + -0x38),param_2,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 3;
  if (iVar1 == 0) {
    uVar4 = 2;
  }
  *(undefined4 *)((int)register0x00000054 + -0x58) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x54) = 0;
  func_0x0245495c(iVar3,uVar5,(undefined1 *)((int)register0x00000054 + -0x38),uVar4);
  uVar2 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x38),0,0);
  return uVar2;
}



// ===== FAT.RescueBoardActivity$$CheckClaimBoardHandBookAllReward RVA 0x1afc4f4 =====

/* WARNING: Possible PIC construction at 0x02bf67ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x02bf67b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b0c4f4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_r4;
  char *pcVar5;
  int unaff_r5;
  undefined4 unaff_r6;
  undefined4 uVar6;
  undefined4 unaff_r7;
  undefined4 *puVar7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  iVar1 = func_0x0229f06c(0x8884,0);
  if (iVar1 == 0) {
    param_1 = *(int *)(param_1 + 0xd0);
    if (param_1 == 0) {
      return 0;
    }
    pcVar5 = (char *)(_UNK_02bf6934 + 0x2bf6714);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02bf6938 + 0x2bf6728),0);
      func_0x01384978(*(undefined4 *)(_UNK_02bf693c + 0x2bf6734));
      func_0x01384978(*(undefined4 *)(_UNK_02bf6940 + 0x2bf6740));
      func_0x01384978(*(undefined4 *)(_UNK_02bf6944 + 0x2bf674c));
      func_0x01384978(*(undefined4 *)(_UNK_02bf6948 + 0x2bf6758));
      *pcVar5 = '\x01';
    }
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    unaff_r6 = 0;
    uStack_28 = 0;
    iVar1 = func_0x0229f06c(0x5c4c,0);
    if (iVar1 == 0) {
      if (*(char *)(param_1 + 0x10) == '\0') {
        iVar3 = *(int *)(param_1 + 0xc);
        iVar1 = 0;
        if (iVar3 != 0) {
          iVar1 = *(int *)(iVar3 + 0xc);
        }
        if (iVar3 != 0 && iVar1 != 0) {
          iVar1 = func_0x01c24918(0);
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          iVar3 = *(int *)(param_1 + 0xc);
          iVar1 = *(int *)(iVar1 + 0x3c);
          if (iVar3 == 0) {
            func_0x01384bf0();
          }
          func_0x0325a3b4(&uStack_38,iVar3,**(undefined4 **)(_UNK_02bf694c + 0x2bf6818));
          uStack_28 = uStack_38;
          uStack_24 = uStack_34;
          uStack_20 = uStack_30;
          iStack_1c = iStack_2c;
          puVar7 = *(undefined4 **)(_UNK_02bf6950 + 0x2bf6834);
          do {
            do {
              iVar2 = func_0x03f597e0(&uStack_28,*puVar7);
              iVar3 = iStack_1c;
              if (iVar2 == 0) {
                iVar1 = 9;
                goto LAB_02bf6880;
              }
            } while (iStack_1c < 1);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            iVar3 = func_0x01cc4240(iVar1,iVar3,0);
          } while (iVar3 != 0);
          iVar1 = 8;
LAB_02bf6880:
          func_0x03f597dc(&uStack_28,**(undefined4 **)(_UNK_02bf6954 + 0x2bf688c));
          unaff_r6 = 0;
          if (iVar1 != 8) {
            unaff_r6 = 1;
          }
        }
      }
      return unaff_r6;
    }
    iVar1 = func_0x0229f13c(0x5c4c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    unaff_lr = 0x2bf67b0;
    unaff_r4 = iVar1;
    unaff_r5 = param_1;
    register0x00000054 = (BADSPACEBASE *)&uStack_38;
  }
  else {
    iVar1 = func_0x0229f13c(0x8884,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  *(undefined4 *)((int)register0x00000054 + -8) = unaff_r8;
  *(undefined4 *)((int)register0x00000054 + -0xc) = unaff_r7;
  *(undefined4 *)((int)register0x00000054 + -0x10) = unaff_r6;
  *(int *)((int)register0x00000054 + -0x14) = unaff_r5;
  *(int *)((int)register0x00000054 + -0x18) = unaff_r4;
  *(undefined4 *)((int)register0x00000054 + -0x30) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)((int)register0x00000054 + -0x20) = 0;
  func_0x0245494c((undefined4 *)((int)register0x00000054 + -0x48),0,0);
  iVar3 = *(int *)(iVar1 + 0x10);
  *(undefined4 *)((int)register0x00000054 + -0x30) =
       *(undefined4 *)((int)register0x00000054 + -0x48);
  *(undefined4 *)((int)register0x00000054 + -0x2c) =
       *(undefined4 *)((int)register0x00000054 + -0x44);
  *(undefined4 *)((int)register0x00000054 + -0x28) =
       *(undefined4 *)((int)register0x00000054 + -0x40);
  *(undefined4 *)((int)register0x00000054 + -0x24) =
       *(undefined4 *)((int)register0x00000054 + -0x3c);
  *(undefined4 *)((int)register0x00000054 + -0x20) =
       *(undefined4 *)((int)register0x00000054 + -0x38);
  if (iVar3 != 0) {
    func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),iVar3,0);
  }
  func_0x01485278((undefined1 *)((int)register0x00000054 + -0x30),param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  *(undefined4 *)((int)register0x00000054 + -0x50) = 0;
  *(undefined4 *)((int)register0x00000054 + -0x4c) = 0;
  func_0x0245495c(iVar3,uVar6,(undefined1 *)((int)register0x00000054 + -0x30),uVar4);
  uVar6 = func_0x0245496c((undefined1 *)((int)register0x00000054 + -0x30),0,0);
  return uVar6;
}



// ===== FAT.RescueBoardActivity$$ProcessAllUnlockReward RVA 0x1afc560 =====

/* WARNING: Removing unreachable block (ram,0x02bf91a0) */
/* WARNING: Removing unreachable block (ram,0x02bf91b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b0c560(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  int unaff_r11;
  bool bVar12;
  bool bVar13;
  byte bVar14;
  undefined8 uVar15;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int *piStack_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8885,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    piVar10 = (int *)0x0;
    if (iVar1 != 0) {
      piVar10 = (int *)param_1[0x34];
    }
    param_1 = piVar10;
    if (iVar1 == 0 || param_1 == (int *)0x0) {
      return 0;
    }
    pcVar5 = (char *)(iRam02bf9188 + 0x2bf8f60);
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(iRam02bf918c + 0x2bf8f74),0);
      func_0x01384978(*(undefined4 *)(iRam02bf9190 + 0x2bf8f80));
      func_0x01384978(*(undefined4 *)(iRam02bf9194 + 0x2bf8f8c));
      func_0x01384978(*(undefined4 *)(iRam02bf9198 + 0x2bf8f98));
      func_0x01384978(*(undefined4 *)(iRam02bf919c + 0x2bf8fa4));
      func_0x01384978(*(undefined4 *)(iRam02bf91a0 + 0x2bf8fb0));
      *pcVar5 = '\x01';
    }
    uVar7 = 0;
    iVar1 = func_0x0229f06c(0x5c4e,0);
    if (iVar1 == 0) {
      if (param_1[6] != 0) {
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar8 = param_1[6];
        iVar4 = *(int *)(iVar1 + 0x40);
        iVar1 = iVar8;
        if (iVar8 == 0) {
          func_0x01384bf0();
          iVar1 = param_1[6];
          bVar13 = iVar1 == 0;
          bVar12 = true;
          if (bVar13) {
            uVar15 = func_0x01384bf0();
            puVar2 = (undefined *)((ulonglong)uVar15 >> 0x20);
            bVar14 = bVar12;
            if (bVar13) {
              bVar14 = &UNK_01300000 < puVar2 || puVar2 + -0x1300000 < (undefined *)(uint)bVar12;
            }
            if (bVar13 && puVar2 == &UNK_01300000 + !bVar12) {
                    /* WARNING: Could not recover jumptable at 0x02bf919c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              uVar7 = (*(code *)(unaff_r11 + 0x2200 + (uint)bVar14))();
              return uVar7;
            }
            pcVar5 = (char *)(_UNK_02bf93d4 + 0x2bf91d4);
            piStack_58 = param_1;
            iStack_54 = iVar4;
            if (*pcVar5 == '\0') {
              func_0x01384978(*(undefined4 *)(_UNK_02bf93d8 + 0x2bf91e8));
              func_0x01384978(*(undefined4 *)(_UNK_02bf93dc + 0x2bf91f4));
              func_0x01384978(*(undefined4 *)(_UNK_02bf93e0 + 0x2bf9200));
              func_0x01384978(*(undefined4 *)(_UNK_02bf93e4 + 0x2bf920c));
              func_0x01384978(*(undefined4 *)(_UNK_02bf93e8 + 0x2bf9218));
              *pcVar5 = '\x01';
            }
            uStack_64 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
            uStack_60 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
            uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
            uStack_68 = 0;
            iVar1 = func_0x0229f06c(0x7a91,0);
            if (iVar1 == 0) {
              iVar1 = func_0x03668dfc(**(undefined4 **)(_UNK_02bf93ec + 0x2bf927c));
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uVar7 = 0;
              if (*(char *)(iVar1 + 10) != '\0') {
                iVar1 = *(int *)((int)uVar15 + 0xc);
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                func_0x0325a3b4(&uStack_78,iVar1,**(undefined4 **)(_UNK_02bf93f0 + 0x2bf92c0));
                uStack_68 = uStack_78;
                uStack_64 = uStack_74;
                uStack_60 = uStack_70;
                uStack_5c = uStack_6c;
                puVar11 = *(undefined4 **)(_UNK_02bf93f4 + 0x2bf92dc);
                while (iVar1 = func_0x03f597e0(&uStack_68,*puVar11), uVar7 = uStack_5c, iVar1 != 0)
                {
                  iVar1 = func_0x01c24918(0);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  iVar1 = *(int *)(iVar1 + 0x3c);
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  func_0x01cc14fc(iVar1,uVar7,1,0);
                }
                uVar7 = func_0x03f597dc(&uStack_68,**(undefined4 **)(_UNK_02bf93f8 + 0x2bf933c));
              }
            }
            else {
              iVar1 = func_0x0229f13c(0x7a91,0);
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              uVar7 = func_0x02173f80(iVar1,(int)uVar15,0);
            }
            return uVar7;
          }
        }
        piVar10 = *(int **)(iRam02bf91a4 + 0x2bf9058);
        uVar7 = *(undefined4 *)(iVar1 + 0xc);
        uVar3 = *(undefined4 *)(iVar8 + 8);
        iVar1 = *piVar10;
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x01384ab4();
          iVar1 = *piVar10;
        }
        uVar9 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x38);
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        uStack_30 = **(undefined4 **)(iRam02bf91a8 + 0x2bf909c);
        uStack_2c = **(undefined4 **)(iRam02bf91ac + 0x2bf90a8);
        uStack_28 = 0;
        uVar7 = func_0x01cdcbac(iVar4,uVar3,uVar7,uVar9);
        iVar1 = func_0x01384be4(**(undefined4 **)(iRam02bf91b0 + 0x2bf90e4));
        func_0x0328e950(iVar1,**(undefined4 **)(iRam02bf91b4 + 0x2bf90f8));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar4 = *(int *)(iVar1 + 8);
        uVar6 = *(uint *)(iVar1 + 0xc);
        piVar10 = *(int **)(iRam02bf91b8 + 0x2bf912c);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        iVar8 = *piVar10;
        if (iVar4 == 0) {
          func_0x01384bf0();
        }
        if (uVar6 < *(uint *)(iVar4 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar6 + 1;
          *(undefined4 *)(iVar4 + uVar6 * 4 + 0x10) = uVar7;
        }
        else {
          func_0x0328f170(iVar1,uVar7,
                          *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
        }
        uVar7 = 1;
        param_1[7] = iVar1;
      }
      return uVar7;
    }
    iVar1 = func_0x0229f13c(0x5c4e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8885,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&stack0xffffffb8,0,0);
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar4 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  uVar3 = 2;
  if (iVar1 == 0) {
    uVar3 = 1;
  }
  uStack_50 = 0;
  func_0x0245495c(iVar4,uVar7,&uStack_30,uVar3);
  uVar7 = func_0x0245496c(&uStack_30,0,0);
  return uVar7;
}



// ===== FAT.RescueBoardActivity$$TrackClaimItemReward RVA 0x1afc5e0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0c5e0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01b0c758 + 0x1b0c5fc);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0c75c + 0x1b0c610));
    func_0x01384978(*(undefined4 *)(_UNK_01b0c760 + 0x1b0c61c));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x884e,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x884e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    iStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,param_2,0);
    iVar4 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 3;
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    func_0x0245495c(iVar4,uVar6,&uStack_38,uVar2,0,0);
    return;
  }
  iVar1 = func_0x01c24918(0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = *(int *)(iVar1 + 0x50);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x01dd0230(iVar1,param_2,0);
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 0x44);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    iVar4 = func_0x0364c54c(iVar4,param_2,**(undefined4 **)(_UNK_01b0c764 + 0x1b0c6d4));
    iVar3 = *(int *)(iVar1 + 0x44);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    iVar3 = *(int *)(iVar3 + 0xc);
    uVar6 = FUN_01b062d8(param_1);
    uVar2 = FUN_01b0633c(param_1);
    uStack_30 = FUN_01b05c10(param_1);
    uStack_28 = *(undefined4 *)(iVar1 + 0x10);
    iStack_2c = *(int *)(param_1 + 0x60) + 1;
    uStack_24 = 0;
    uStack_34 = (uint)(iVar4 + 1 == iVar3);
    uStack_38 = uVar2;
    func_0x023146e4(param_1,iVar4 + 1,iVar3,uVar6);
  }
  return;
}



// ===== FAT.RescueBoardActivity$$get_OutputType RVA 0x1afc768 =====

undefined4 FUN_01b0c768(int param_1)

{
  return *(undefined4 *)(param_1 + 0xd4);
}



// ===== FAT.RescueBoardActivity$$set_OutputType RVA 0x1afc770 =====

void FUN_01b0c770(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xd4) = param_2;
  return;
}



// ===== FAT.RescueBoardActivity$$get_OutputMethod RVA 0x1afc778 =====

undefined4 FUN_01b0c778(int param_1)

{
  return *(undefined4 *)(param_1 + 0xd8);
}



// ===== FAT.RescueBoardActivity$$set_OutputMethod RVA 0x1afc780 =====

void FUN_01b0c780(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xd8) = param_2;
  return;
}



// ===== FAT.RescueBoardActivity$$IsEnergyMethod RVA 0x1afc788 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b0c788(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x87f9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x87f9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4);
    uVar7 = func_0x0245496c(&uStack_30,0,0);
    return uVar7;
  }
  pcVar8 = (char *)(_UNK_02c05e40 + 0x2c05d5c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c05e44 + 0x2c05d70),1,0);
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5a9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5a9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,1,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar4,0,0);
    uVar7 = func_0x0245496c(&uStack_38,0,0);
    return uVar7;
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02c05e48 + 0x2c05dd8)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xe8);
        goto LAB_02c05e28;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_02c05e48 + 0x2c05dd8),5);
LAB_02c05e28:
                    /* WARNING: Could not recover jumptable at 0x02c05e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (*(code *)*puVar2)(param_1,1,puVar2[1]);
  return uVar7;
}



// ===== FAT.RescueBoardActivity$$IsOrderMethod RVA 0x1afc7e8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b0c7e8(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x77d,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x77d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 2;
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    uStack_50 = 0;
    uStack_4c = 0;
    func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4);
    uVar7 = func_0x0245496c(&uStack_30,0,0);
    return uVar7;
  }
  pcVar8 = (char *)(_UNK_02c05e40 + 0x2c05d5c);
  if (*pcVar8 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_02c05e44 + 0x2c05d70),2,0);
    *pcVar8 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x5a9,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x5a9,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485238(&uStack_38,2,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar7 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar4 = 3;
    if (iVar1 == 0) {
      uVar4 = 2;
    }
    func_0x0245495c(iVar6,uVar7,&uStack_38,uVar4,0,0);
    uVar7 = func_0x0245496c(&uStack_38,0,0);
    return uVar7;
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(_UNK_02c05e48 + 0x2c05dd8)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xe8);
        goto LAB_02c05e28;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_02c05e48 + 0x2c05dd8),5);
LAB_02c05e28:
                    /* WARNING: Could not recover jumptable at 0x02c05e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (*(code *)*puVar2)(param_1,2,puVar2[1]);
  return uVar7;
}



// ===== FAT.RescueBoardActivity$$IsValidForOrder RVA 0x1afc848 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b0c848(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8886,0);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = func_0x0229f06c(0x77d,0);
    if (iVar1 == 0) {
      pcVar8 = (char *)(_UNK_02c05e40 + 0x2c05d5c);
      if (*pcVar8 == '\0') {
        func_0x01384978(*(undefined4 *)(_UNK_02c05e44 + 0x2c05d70),2,0);
        *pcVar8 = '\x01';
      }
      iVar1 = func_0x0229f06c(0x5a9,0);
      if (iVar1 != 0) {
        iVar1 = func_0x0229f13c(0x5a9,0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        uStack_38 = 0;
        uStack_28 = 0;
        func_0x0245494c(&uStack_50,0,2,0);
        uStack_38 = uStack_50;
        uStack_34 = uStack_4c;
        uStack_30 = uStack_48;
        uStack_2c = uStack_44;
        uStack_28 = uStack_40;
        if (*(int *)(iVar1 + 0x10) != 0) {
          func_0x01485278(&uStack_38,*(int *)(iVar1 + 0x10),0);
        }
        func_0x01485278(&uStack_38,param_1,0);
        func_0x01485238(&uStack_38,2,0);
        iVar6 = *(int *)(iVar1 + 8);
        uVar7 = *(undefined4 *)(iVar1 + 0xc);
        iVar1 = *(int *)(iVar1 + 0x10);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        uVar4 = 3;
        if (iVar1 == 0) {
          uVar4 = 2;
        }
        func_0x0245495c(iVar6,uVar7,&uStack_38,uVar4,0,0);
        uVar7 = func_0x0245496c(&uStack_38,0,0);
        return uVar7;
      }
      if (param_1 == (int *)0x0) {
        return 0;
      }
      iVar1 = *param_1;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(_UNK_02c05e48 + 0x2c05dd8)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xe8);
            goto LAB_02c05e28;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(param_1,**(int **)(_UNK_02c05e48 + 0x2c05dd8),5);
LAB_02c05e28:
                    /* WARNING: Could not recover jumptable at 0x02c05e3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar7 = (*(code *)*puVar2)(param_1,2,puVar2[1]);
      return uVar7;
    }
    iVar1 = func_0x0229f13c(0x77d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x8886,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar6 = *(int *)(iVar1 + 8);
  uVar7 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar6 == 0) {
    func_0x01384bf0();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  uStack_50 = 0;
  uStack_4c = 0;
  func_0x0245495c(iVar6,uVar7,&uStack_30,uVar4);
  uVar7 = func_0x0245496c(&uStack_30,0,0);
  return uVar7;
}



// ===== FAT.RescueBoardActivity$$FAT.IBoardActivityOutput.GetFlyType RVA 0x1afc8c4 =====

undefined4 FUN_01b0c8c4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x8887,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8887,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar3 = *(int *)(iVar1 + 8);
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar3 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
    uVar4 = func_0x0245498c(&uStack_30,0,0);
    return uVar4;
  }
  return 0x56;
}



// ===== FAT.RescueBoardActivity$$FAT.IBoardActivityOutput.TrackOrderGetItem RVA 0x1afc918 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0c918(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_01b0ca78 + 0x1b0c938);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0ca7c + 0x1b0c950));
    func_0x01384978(*(undefined4 *)(_UNK_01b0ca80 + 0x1b0c95c));
    func_0x01384978(*(undefined4 *)(_UNK_01b0ca84 + 0x1b0c968));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8888,0);
  if (iVar1 == 0) {
    iVar2 = FUN_01b061d4(param_1);
    iVar3 = *(int *)(param_1 + 0x50);
    iVar1 = 0;
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0x34);
    }
    uVar8 = 0;
    if (iVar3 != 0 && iVar1 != 0) {
      uStack_2c = 0;
      uStack_30 = 0;
      func_0x03507d38(&uStack_30,*(undefined4 *)(iVar1 + 0xc),
                      **(undefined4 **)(_UNK_01b0ca88 + 0x1b0c9f4));
      uVar8 = uStack_2c;
    }
    uVar4 = FUN_01b062d8(param_1);
    uVar5 = FUN_01b0633c(param_1);
    iVar1 = *(int *)(param_1 + 0x60);
    uVar6 = FUN_01b05c10(param_1);
    func_0x02314d14(param_1,iVar2 + 1,uVar8,uVar4,uVar5,iVar1 + 1,uVar6,param_2,param_3,param_4,0);
  }
  else {
    iVar1 = func_0x0229f13c(0x8888,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x02179c40(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return;
}



// ===== FAT.RescueBoardActivity$$FAT.IBoardActivityOutput.GetReasonString RVA 0x1afca8c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b0ca8c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar4 = (char *)(_UNK_01b0cb2c + 0x1b0caa0);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0cb30 + 0x1b0cab4));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x8889,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x8889,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_0221b1d4 + 0x221b0f4);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_0221b1d8 + 0x221b108),param_1,0);
      *pcVar4 = '\x01';
    }
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_30 = 0;
    uStack_20 = 0;
    func_0x0245494c(&uStack_48,0);
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01485278(&uStack_30,param_1,0);
    iVar5 = *(int *)(iVar1 + 8);
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    func_0x0245495c(iVar5,uVar6,&uStack_30,uVar2,0,0);
    uVar6 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_0221b1dc + 0x221b1c4));
    return uVar6;
  }
  piVar3 = *(int **)(_UNK_01b0cb34 + 0x1b0cb0c);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    func_0x01384ab4();
    iVar1 = *piVar3;
  }
  return *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x378);
}



// ===== FAT.RescueBoardActivity$$TryAddToken RVA 0x1afcb38 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0cb38(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01b0cc84 + 0x1b0cb58);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0cc88 + 0x1b0cb70));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x77a,0);
  if (iVar1 == 0) {
    iVar1 = param_3;
    if (0 < param_3) {
      iVar1 = param_2;
    }
    if ((((0 < iVar1) && (*(int *)(param_1 + 0x4c) != 0)) &&
        (*(int *)(*(int *)(param_1 + 0x4c) + 0x50) == param_2)) &&
       (iVar1 = func_0x01b0cc90(param_1,1,param_3), iVar1 != 0)) {
      iStack_28 = 0;
      func_0x019a4b9c(param_2,param_3,*(undefined4 *)(param_1 + 0x5c),param_4);
      piVar6 = *(int **)(_UNK_01b0cc8c + 0x1b0cc34);
      iVar1 = *piVar6;
      if (*(int *)(iVar1 + 0x74) == 0) {
        func_0x01384ab4();
        iVar1 = *piVar6;
      }
      if (param_4 != *(int *)(*(int *)(iVar1 + 0x5c) + 0x378)) {
        iVar2 = FUN_01b0c7e8(param_1);
        iVar1 = 0;
        if (iVar2 != 0) {
          iVar1 = *(int *)(param_1 + 0xdc);
        }
        if (iVar2 != 0 && iVar1 != 0) {
          uVar3 = *(undefined4 *)(param_1 + 0x5c);
          iVar2 = func_0x0229f06c(299,0,0);
          if (iVar2 == 0) {
            *(undefined4 *)(iVar1 + 0x28) = uVar3;
            return;
          }
          iVar2 = func_0x0229f13c(299,0);
          if (iVar2 == 0) {
            func_0x01384bf0();
          }
          uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
          uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
          uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
          uStack_38 = 0;
          iStack_28 = 0;
          func_0x0245494c(&uStack_50,0,uVar3,0);
          uStack_38 = uStack_50;
          uStack_34 = uStack_4c;
          uStack_30 = uStack_48;
          uStack_2c = uStack_44;
          iStack_28 = uStack_40;
          if (*(int *)(iVar2 + 0x10) != 0) {
            func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
          }
          func_0x01485278(&uStack_38,iVar1,0);
          func_0x01485238(&uStack_38,uVar3,0);
          iVar7 = *(int *)(iVar2 + 8);
          uVar3 = *(undefined4 *)(iVar2 + 0xc);
          iVar1 = *(int *)(iVar2 + 0x10);
          if (iVar7 == 0) {
            func_0x01384bf0();
          }
          uVar4 = 3;
          if (iVar1 == 0) {
            uVar4 = 2;
          }
          func_0x0245495c(iVar7,uVar3,&uStack_38,uVar4,0,0);
          return;
        }
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x77a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uStack_24 = 0;
    iStack_28 = param_4;
    func_0x02179974(iVar1,param_1,param_2,param_3);
  }
  return;
}



// ===== FAT.RescueBoardActivity$$ChangeToken RVA 0x1afcc90 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b0cc90(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_01b0cf4c + 0x1b0ccb0);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0cf50 + 0x1b0ccc4));
    func_0x01384978(*(undefined4 *)(_UNK_01b0cf54 + 0x1b0ccd0));
    func_0x01384978(*(undefined4 *)(_UNK_01b0cf58 + 0x1b0ccdc));
    func_0x01384978(*(undefined4 *)(_UNK_01b0cf5c + 0x1b0cce8));
    func_0x01384978(*(undefined4 *)(_UNK_01b0cf60 + 0x1b0ccf4));
    *pcVar7 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x77c,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x77c,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x0218ebd4(iVar1,param_1,param_2,param_3,0);
    return uVar2;
  }
  if ((param_3 < 1) || (param_2 == 0)) {
    if (param_2 != 0) {
      return 0;
    }
    if (*(int *)(param_1 + 0x5c) < param_3) {
      iVar1 = *(int *)(param_1 + 0x4c);
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      uVar2 = *(undefined4 *)(iVar1 + 0x50);
      if (*(int *)(**(int **)(_UNK_01b0cf7c + 0x1b0cdfc) + 0x74) == 0) {
        func_0x01384ab4();
      }
      iVar1 = func_0x02085f3c(uVar2,0);
      iVar6 = func_0x01c24918(0);
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      iVar6 = *(int *)(iVar6 + 0x10);
      piVar4 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01b0cf80 + 0x1b0ce48),1);
      if (piVar4 == (int *)0x0) {
        func_0x01384bf0();
      }
      if ((iVar1 != 0) &&
         (iVar5 = func_0x01384ab8(iVar1,*(undefined4 *)(*piVar4 + 0x20)), iVar5 == 0)) {
        uVar2 = func_0x01384c10();
        func_0x01384aa0(uVar2,0);
      }
      if (piVar4[3] == 0) {
        func_0x01384bf4();
      }
      piVar4[4] = iVar1;
      if (iVar6 == 0) {
        func_0x01384bf0();
      }
      func_0x01ca1c50(iVar6,0x54,piVar4,0);
      return 0;
    }
    piVar4 = *(int **)(_UNK_01b0cf70 + 0x1b0ced8);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - param_3;
    if (*(int *)(*piVar4 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01b0cf74 + 0x1b0cef8));
    iVar6 = *(int *)(param_1 + 0x4c);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(iVar6 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    param_3 = -param_3;
    puVar3 = *(undefined4 **)(_UNK_01b0cf78 + 0x1b0cf30);
  }
  else {
    iVar1 = **(int **)(_UNK_01b0cf64 + 0x1b0cd68);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + param_3;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x01384ab4();
    }
    iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01b0cf68 + 0x1b0cd90));
    iVar6 = *(int *)(param_1 + 0x4c);
    if (iVar6 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(iVar6 + 0x50);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    puVar3 = *(undefined4 **)(_UNK_01b0cf6c + 0x1b0cdc8);
  }
  func_0x034a0af8(iVar1,param_3,uVar2,*puVar3);
  return 1;
}



// ===== FAT.RescueBoardActivity$$TryUseToken RVA 0x1afcf84 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b0cf84(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)(_UNK_01b0d144 + 0x1b0cfa4);
  if (*pcVar2 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0d148 + 0x1b0cfbc));
    func_0x01384978(*(undefined4 *)(_UNK_01b0d14c + 0x1b0cfc8));
    func_0x01384978(*(undefined4 *)(_UNK_01b0d150 + 0x1b0cfd4));
    func_0x01384978(*(undefined4 *)(_UNK_01b0d154 + 0x1b0cfe0));
    *pcVar2 = '\x01';
  }
  uVar3 = 0;
  iVar1 = func_0x0229f06c(0x888a,0);
  if (iVar1 == 0) {
    iVar1 = param_3;
    if (0 < param_3) {
      iVar1 = param_2;
    }
    if (((0 < iVar1) && (*(int *)(param_1 + 0x4c) != 0)) &&
       (*(int *)(*(int *)(param_1 + 0x4c) + 0x50) == param_2)) {
      uVar3 = 0;
      iVar1 = FUN_01b0cc90(param_1,0,param_3);
      if (iVar1 != 0) {
        func_0x019a4b9c(param_2,-param_3,*(undefined4 *)(param_1 + 0x5c),param_4,0);
        if (*(int *)(**(int **)(_UNK_01b0d158 + 0x1b0d0b0) + 0x74) == 0) {
          func_0x01384ab4();
        }
        iVar1 = func_0x0300d558(**(undefined4 **)(_UNK_01b0d15c + 0x1b0d0cc));
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x034a0af8(iVar1,param_2,param_3,**(undefined4 **)(_UNK_01b0d160 + 0x1b0d0f4));
        iVar1 = func_0x01c24918(0);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        func_0x01bf3284(iVar1,**(undefined4 **)(_UNK_01b0d164 + 0x1b0d134),0);
        uVar3 = 1;
      }
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x888a,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar3 = func_0x0217a980(iVar1,param_1,param_2,param_3,param_4,0);
  }
  return uVar3;
}



// ===== FAT.RescueBoardActivity$$FAT.IActivityOrderHandler.OnPreUpdate RVA 0x1afd168 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b0d168(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar9 = (char *)(_UNK_01b0d4bc + 0x1b0d188);
  if (*pcVar9 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0d4c0 + 0x1b0d1a0));
    func_0x01384978(*(undefined4 *)(_UNK_01b0d4c4 + 0x1b0d1ac));
    *pcVar9 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x888b,0);
  if (iVar1 != 0) {
    iVar1 = func_0x0229f13c(0x888b,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021d2b64(iVar1,param_1,param_2,param_3,param_4,0);
    return uVar2;
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
    return 0;
  }
  iVar1 = FUN_01b0c7e8(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *param_2;
  uVar7 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar7 != 0) {
    piVar8 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar8[-1] == **(int **)(_UNK_01b0d4c8 + 0x1b0d244)) {
        puVar3 = (undefined4 *)(iVar1 + *piVar8 * 8 + 0x268);
        goto LAB_01b0d28c;
      }
      uVar7 = uVar7 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar7 != 0);
  }
  puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01b0d4c8 + 0x1b0d244),0x35);
LAB_01b0d28c:
  iVar1 = (*(code *)*puVar3)(param_2,puVar3[1]);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = func_0x02b449f8(param_1,0);
  iVar1 = func_0x01e4b758(param_2,uVar2,0);
  piVar8 = *(int **)(_UNK_01b0d4cc + 0x1b0d2d0);
  iVar4 = *piVar8;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x01384ab4();
    iVar4 = *piVar8;
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  iVar4 = func_0x01e4b23c(iVar4,param_2,0);
  if (iVar4 == 0) {
LAB_01b0d368:
    iVar4 = *(int *)(param_1 + 0x4c);
    iVar5 = *(int *)(param_1 + 0xdc);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = *(undefined4 *)(iVar4 + 0x50);
    if (iVar5 == 0) {
      func_0x01384bf0();
    }
    func_0x02afa744(iVar5,param_2,param_4,uVar2,0);
    uVar2 = 1;
  }
  else {
    iVar4 = *piVar8;
    if (*(int *)(iVar4 + 0x74) == 0) {
      func_0x01384ab4();
      iVar4 = *piVar8;
    }
    iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x10);
    if (iVar4 == 0) {
      func_0x01384bf0();
    }
    uVar2 = 0;
    iVar4 = func_0x01e4b2b0(iVar4,param_2,0);
    iVar5 = func_0x02b449f8(param_1,0);
    if (iVar4 != iVar5) goto LAB_01b0d368;
  }
  if (iVar1 == 0) {
    func_0x01384bf0();
    iVar4 = func_0x01e4b23c(0,param_2,0);
    if (iVar4 != 0) {
      func_0x01384bf0();
      goto LAB_01b0d3f0;
    }
  }
  else {
    iVar4 = func_0x01e4b23c(iVar1,param_2,0);
    if (iVar4 != 0) {
LAB_01b0d3f0:
      uVar6 = 0;
      iVar4 = func_0x01e4b2b0(iVar1,param_2,0);
      iVar5 = func_0x02b449f8(param_1,0);
      if (iVar4 == iVar5) goto LAB_01b0d4a0;
    }
  }
  iVar4 = *piVar8;
  if (*(int *)(iVar4 + 0x74) == 0) {
    func_0x01384ab4();
    iVar4 = *piVar8;
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x10);
  if (iVar4 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4b3b8(&uStack_2c,iVar4,param_2,0);
  uVar6 = func_0x02b449f8(param_1,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  func_0x01e4ba84(iVar1,param_2,uVar6,uStack_28,uStack_2c,0);
  uVar6 = 1;
LAB_01b0d4a0:
  iVar1 = func_0x01f2a218(0);
  if (iVar1 != 0) {
    uVar2 = uVar6;
  }
  return uVar2;
}



// ===== FAT.RescueBoardActivity$$GetSpawnOutputsOne RVA 0x1afd4d0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0d4d0(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_01b0d718 + 0x1b0d4ec);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0d71c + 0x1b0d500));
    func_0x01384978(*(undefined4 *)(_UNK_01b0d720 + 0x1b0d50c));
    func_0x01384978(*(undefined4 *)(_UNK_01b0d724 + 0x1b0d518));
    func_0x01384978(*(undefined4 *)(_UNK_01b0d728 + 0x1b0d524));
    *pcVar7 = '\x01';
  }
  iVar2 = func_0x0229f06c(0x888c,0);
  if (iVar2 != 0) {
    iVar2 = func_0x0229f13c(0x888c,0);
    if (iVar2 == 0) {
      func_0x01384bf0();
    }
    uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_38 = 0;
    uStack_28 = 0;
    func_0x0245494c(&uStack_50,0,param_2,0);
    uStack_38 = uStack_50;
    uStack_34 = uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar2 + 0x10) != 0) {
      func_0x01485278(&uStack_38,*(int *)(iVar2 + 0x10),0);
    }
    func_0x01485278(&uStack_38,param_1,0);
    func_0x01485278(&uStack_38,param_2,0);
    iVar9 = *(int *)(iVar2 + 8);
    uVar10 = *(undefined4 *)(iVar2 + 0xc);
    iVar2 = *(int *)(iVar2 + 0x10);
    if (iVar9 == 0) {
      func_0x01384bf0();
    }
    uVar6 = 3;
    if (iVar2 == 0) {
      uVar6 = 2;
    }
    func_0x0245495c(iVar9,uVar10,&uStack_38,uVar6,0,0);
    return;
  }
  if (param_2 != (int *)0x0) {
    iVar2 = *param_2;
    uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(_UNK_01b0d72c + 0x1b0d590)) {
          puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xd8);
          goto LAB_01b0d5d8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01b0d72c + 0x1b0d590),3);
LAB_01b0d5d8:
    (*(code *)*puVar3)(param_2,puVar3[1]);
    uVar10 = FUN_01b0bffc(param_1);
    iVar2 = FUN_01b0bf0c(param_1,uVar10);
    if (iVar2 != 0) {
      iVar9 = 0;
      while( true ) {
        iVar8 = *(int *)(iVar2 + 0x18);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        if (*(int *)(iVar8 + 0xc) <= iVar9) break;
        iVar8 = *(int *)(iVar2 + 0x18);
        if (iVar8 == 0) {
          func_0x01384bf0();
        }
        uVar10 = func_0x03653d1c(iVar8,iVar9,**(undefined4 **)(_UNK_01b0d730 + 0x1b0d64c));
        if (*(int *)(**(int **)(_UNK_01b0d734 + 0x1b0d664) + 0x74) == 0) {
          func_0x01384ab4();
        }
        func_0x02566088(&uStack_30,uVar10,0);
        uVar1 = uStack_28;
        uVar6 = uStack_2c;
        uVar10 = uStack_30;
        iVar8 = *param_2;
        uVar4 = (uint)*(ushort *)(iVar8 + 0xb6);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(int *)(iVar8 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(_UNK_01b0d738 + 0x1b0d6a0)) {
              puVar3 = (undefined4 *)(iVar8 + *piVar5 * 8 + 0xd0);
              goto LAB_01b0d6e8;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar4 != 0);
        }
        puVar3 = (undefined4 *)func_0x014002dc(param_2,**(int **)(_UNK_01b0d738 + 0x1b0d6a0),2);
LAB_01b0d6e8:
        uStack_38 = puVar3[1];
        (*(code *)*puVar3)(param_2,uVar10,uVar6,uVar1);
        iVar9 = iVar9 + 1;
      }
    }
  }
  return;
}



// ===== FAT.RescueBoardActivity$$TryGetOutputFixedOne RVA 0x1afd73c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01b0d73c(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01b0d868 + 0x1b0d75c);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0d86c + 0x1b0d770));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x888d,0);
  if (iVar1 == 0) {
    *param_2 = 0;
    *param_3 = 0;
    uVar3 = FUN_01b0bffc(param_1);
    iVar1 = FUN_01b0bf0c(param_1,uVar3);
    if (iVar1 != 0) {
      uVar3 = *(undefined4 *)(iVar1 + 0x14);
      if (*(int *)(**(int **)(_UNK_01b0d870 + 0x1b0d7fc) + 0x74) == 0) {
        func_0x01384ab4(**(int **)(_UNK_01b0d870 + 0x1b0d7fc));
      }
      iVar1 = func_0x02565a88(uVar3,0);
      if (iVar1 != 0) {
        *param_2 = *(int *)(iVar1 + 8);
        iVar1 = *(int *)(iVar1 + 0xc);
        *param_3 = iVar1;
        return (uint)(0 < iVar1 && 0 < *param_2);
      }
    }
    uVar2 = 0;
  }
  else {
    iVar1 = func_0x0229f13c(0x888d,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    uVar2 = func_0x021cc06c(iVar1,param_1,param_2,param_3,0);
  }
  return uVar2;
}



// ===== FAT.RescueBoardActivity$$GetWithOutputTimeRange RVA 0x1afd874 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0d874(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar5 = (char *)(_UNK_01b0da10 + 0x1b0d890);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0da14 + 0x1b0d8a4));
    func_0x01384978(*(undefined4 *)(_UNK_01b0da18 + 0x1b0d8b0));
    func_0x01384978(*(undefined4 *)(_UNK_01b0da1c + 0x1b0d8bc));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x0229f06c(0x888e,0);
  if (iVar1 == 0) {
    uVar2 = FUN_01b0bffc(param_2);
    pcVar3 = (char *)FUN_01b0bf0c(param_2,uVar2);
    iVar1 = 0;
    if (pcVar3 != (char *)0x0) {
      iVar1 = *(int *)(pcVar3 + 0x1c);
      pcVar5 = pcVar3;
    }
    if ((pcVar3 != (char *)0x0 && iVar1 != 0) && (iVar6 = *(int *)(iVar1 + 0xc), iVar6 != 0)) {
      puVar7 = *(undefined4 **)(_UNK_01b0da24 + 0x1b0d98c);
      iVar1 = func_0x0364c9b8(iVar1,0,*puVar7);
      iVar4 = iVar1;
      if (iVar6 == 1) {
        puVar7 = *(undefined4 **)(_UNK_01b0da28 + 0x1b0d9ac);
        *param_1 = 0;
        param_1[1] = 0;
        uVar2 = *puVar7;
      }
      else {
        iVar6 = *(int *)(pcVar5 + 0x1c);
        if (iVar6 == 0) {
          func_0x01384bf0();
        }
        iVar6 = func_0x0364c9b8(iVar6,1,*puVar7);
        *param_1 = 0;
        param_1[1] = 0;
        if (iVar1 <= iVar6) {
          iVar4 = iVar6;
          iVar6 = iVar1;
        }
        iVar1 = iVar6;
        uVar2 = **(undefined4 **)(_UNK_01b0da2c + 0x1b0da08);
      }
    }
    else {
      iVar1 = 0;
      uVar2 = **(undefined4 **)(_UNK_01b0da20 + 0x1b0d950);
      *param_1 = 0;
      param_1[1] = 0;
      iVar4 = 0;
    }
    func_0x038fd264(param_1,iVar1,iVar4,uVar2);
  }
  else {
    iVar1 = func_0x0229f13c(0x888e,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    func_0x0217edb0(&uStack_28,iVar1,param_2,0);
    *param_1 = uStack_28;
    param_1[1] = uStack_24;
  }
  return;
}



// ===== FAT.RescueBoardActivity$$<JumpTask>b__129_0 RVA 0x1afda30 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0da30(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  
  pcVar4 = (char *)(_UNK_01b0db70 + 0x1b0da44);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0db74 + 0x1b0da58));
    func_0x01384978(*(undefined4 *)(_UNK_01b0db78 + 0x1b0da64));
    *pcVar4 = '\x01';
  }
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1,*(undefined4 *)(*param_1 + 0x10c));
  if (iVar1 != 0) {
    iVar1 = func_0x01c24918(0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = *(int *)(iVar1 + 0x9c);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x01c74c1c(iVar1,0);
    if (iVar1 == 0) {
      iVar1 = func_0x034aaa34(**(undefined4 **)(_UNK_01b0db7c + 0x1b0dad4));
      iVar5 = param_1[0x30];
      if (iVar5 == 0) {
        func_0x01384bf0();
      }
      uVar6 = *(undefined4 *)(iVar5 + 0xc);
      piVar2 = (int *)func_0x01384a00(**(undefined4 **)(_UNK_01b0db80 + 0x1b0dafc),1);
      if (piVar2 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x01384ab8(param_1,*(undefined4 *)(*piVar2 + 0x20));
      if (iVar5 == 0) {
        uVar3 = func_0x01384c10();
        func_0x01384aa0(uVar3,0);
      }
      if (piVar2[3] == 0) {
        func_0x01384bf4();
      }
      piVar2[4] = (int)param_1;
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      iVar5 = func_0x0229f06c(0xd,0,piVar2,0);
      if (iVar5 == 0) {
        func_0x01ee81d4(iVar1,uVar6,0,piVar2);
      }
      else {
        iVar5 = func_0x0229f13c(0xd,0);
        if (iVar5 == 0) {
          func_0x01384bf0();
        }
        func_0x02174858(iVar5,iVar1,uVar6,piVar2,0);
      }
      return;
    }
  }
  return;
}



// ===== FAT.RescueBoardActivity$$<>iFixBaseProxy_get_Visual RVA 0x1afdb84 =====

undefined4 FUN_01b0db84(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



// ===== FAT.RescueBoardActivity$$<>iFixBaseProxy_SetupFresh RVA 0x1afdb8c =====

void FUN_01b0db8c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x1f0,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1f0,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.RescueBoardActivity$$<>iFixBaseProxy_WhenEnd RVA 0x1afdb94 =====

void FUN_01b0db94(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x1a2,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x1a2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.RescueBoardActivity$$<>iFixBaseProxy_WhenReset RVA 0x1afdb9c =====

void FUN_01b0db9c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x13ac,0);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x0229f13c(0x13ac,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar4,&uStack_30,uVar2,0,0);
  return;
}



// ===== FAT.RescueBoardActivity$$<>iFixBaseProxy_ResEnumerate RVA 0x1afdba4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b0dba4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  iVar1 = func_0x0229f06c(0x3189,0);
  if (iVar1 == 0) {
    param_1 = (int *)(**(code **)(*param_1 + 0x118))(param_1,*(undefined4 *)(*param_1 + 0x11c));
    if (param_1 == (int *)0x0) {
      func_0x01384bf0();
    }
    pcVar4 = (char *)(_UNK_02b61df8 + 0x2b61d5c);
    if (*pcVar4 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_02b61dfc + 0x2b61d70),0);
      *pcVar4 = '\x01';
    }
    iVar1 = func_0x0229f06c(0x1395,0);
    if (iVar1 == 0) {
      iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_02b61e00 + 0x2b61dc8));
      func_0x04874ed4(iVar1,0);
      *(undefined4 *)(iVar1 + 8) = 0xfffffffe;
      uVar5 = func_0x048799ac(0);
      *(undefined4 *)(iVar1 + 0x14) = uVar5;
      *(int **)(iVar1 + 0x18) = param_1;
      return iVar1;
    }
    iVar1 = func_0x0229f13c(0x1395,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  else {
    iVar1 = func_0x0229f13c(0x3189,0);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
  }
  pcVar4 = (char *)(_UNK_021c7568 + 0x21c7488);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_021c756c + 0x21c749c),param_1,0);
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  func_0x0245494c(&uStack_48,0);
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01485278(&uStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01485278(&uStack_30,param_1,0);
  iVar3 = *(int *)(iVar1 + 8);
  uVar5 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar3 == 0) {
    func_0x01384bf0();
  }
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  func_0x0245495c(iVar3,uVar5,&uStack_30,uVar2,0,0);
  iVar1 = func_0x02f5db90(&uStack_30,0,**(undefined4 **)(_UNK_021c7570 + 0x21c7558));
  return iVar1;
}



// ===== FAT.RescueBoardActivity.<>c__DisplayClass17_0$$<ExecuteExtremeCase>b__0 RVA 0x1afdbac =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b0dbac(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  char *pcVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int aiStack_24 [3];
  
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02116c00(param_2,0);
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    pcVar9 = (char *)(_UNK_020df794 + 0x20df458);
    if (*pcVar9 == '\0') {
      func_0x01384978(*(undefined4 *)(_UNK_020df798 + 0x20df46c),param_2,1,0);
      func_0x01384978(*(undefined4 *)(_UNK_020df79c + 0x20df478));
      func_0x01384978(*(undefined4 *)(_UNK_020df7a0 + 0x20df484));
      func_0x01384978(*(undefined4 *)(_UNK_020df7a4 + 0x20df490));
      *pcVar9 = '\x01';
    }
    aiStack_24[0] = 0;
    iVar2 = func_0x0229f06c(0x5b73,0);
    if (iVar2 == 0) {
      if (param_2 == 0) {
        func_0x01384bf0();
        iVar2 = func_0x0210cd28(0,0);
        func_0x01384bf0();
      }
      else {
        iVar2 = func_0x0210cd28(param_2,0);
      }
      if (iVar2 == iVar1) {
        func_0x0210cd7c(&uStack_30,param_2,0);
        if (param_2 == 0) {
          func_0x01384bf0();
        }
        func_0x0210cd7c(&uStack_30,param_2,0);
        uVar3 = func_0x020db85c(iVar1,uStack_30,uStack_2c);
        iVar4 = func_0x03005894(*(undefined4 *)(iVar1 + 0x80),uVar3,aiStack_24,
                                **(undefined4 **)(_UNK_020df7a8 + 0x20df588));
        iVar2 = aiStack_24[0];
        if (iVar4 != 0) {
          if (aiStack_24[0] == 0) {
            func_0x01384bf0();
          }
          iVar4 = aiStack_24[0];
          if (*(int *)(iVar2 + 8) == param_2) {
            if (aiStack_24[0] == 0) {
              func_0x01384bf0();
            }
            *(undefined4 *)(iVar4 + 8) = 0;
            func_0x020df7b8(iVar1,1);
            if (param_2 == 0) {
              func_0x01384bf0();
              func_0x021177d0(0,0,0,0);
              func_0x01384bf0();
            }
            else {
              func_0x021177d0(param_2,0,0,0);
            }
            func_0x02117440(param_2,0,0,0);
            iVar2 = *(int *)(iVar1 + 100);
            if (iVar2 != 0) {
              (**(code **)(iVar2 + 0xc))
                        (*(undefined4 *)(iVar2 + 0x20),param_2,*(undefined4 *)(iVar2 + 0x14));
            }
            iVar2 = *(int *)(iVar1 + 0x98);
            if (param_2 == 0) {
              func_0x01384bf0();
            }
            uVar8 = 0;
            iVar4 = func_0x02116990(param_2,0);
            if ((iVar4 != 0) && (uVar8 = 0, *(char *)(iVar4 + 0x45) != '\0')) {
              uVar8 = 1;
            }
            if (iVar2 == 0) {
              func_0x01384bf0();
            }
            func_0x02144d84(iVar2,param_2,uVar8,0);
            iVar1 = func_0x020d83c8(iVar1);
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            func_0x02148ef8(iVar1,param_2,0xe,0);
            return 1;
          }
        }
        if (param_2 == 0) {
          func_0x01384bf0();
        }
      }
      uStack_30 = func_0x0210e5f4(param_2,0);
      puVar7 = *(undefined4 **)(_UNK_020df7ac + 0x20df5dc);
      uVar5 = func_0x01384abc(*puVar7,&uStack_30);
      if (param_2 == 0) {
        func_0x01384bf0();
      }
      uVar3 = 0;
      uStack_28 = func_0x0210e2d4(param_2,0);
      uVar6 = func_0x01384abc(*puVar7,&uStack_28);
      uVar5 = func_0x0244f690(**(undefined4 **)(_UNK_020df7b0 + 0x20df634),uVar5,uVar6,0);
      if (*(int *)(**(int **)(_UNK_020df7b4 + 0x20df648) + 0x74) == 0) {
        func_0x01384ab4();
      }
      func_0x028c2874(uVar5,0);
    }
    else {
      iVar2 = func_0x0229f13c(0x5b73,0);
      if (iVar2 == 0) {
        func_0x01384bf0();
      }
      uVar3 = func_0x0218d1f0(iVar2,iVar1,param_2,1,0);
    }
    return uVar3;
  }
  return 0;
}



// ===== FAT.RescueBoardActivity.<>c__DisplayClass29_0$$<CollectInheritItems>b__0 RVA 0x1afdc00 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0dc00(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01b0dd7c + 0x1b0dc18);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0dd80 + 0x1b0dc2c));
    func_0x01384978(*(undefined4 *)(_UNK_01b0dd84 + 0x1b0dc38));
    func_0x01384978(*(undefined4 *)(_UNK_01b0dd88 + 0x1b0dc44));
    *pcVar5 = '\x01';
  }
  if (param_2 == 0) {
    func_0x01384bf0();
    iVar1 = func_0x02116c00(0,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 8);
    func_0x01384bf0();
  }
  else {
    iVar1 = func_0x02116c00(param_2,0);
    if (iVar1 == 0) {
      return;
    }
    iVar1 = *(int *)(param_1 + 8);
  }
  uVar2 = func_0x0210e2d4(param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450998(iVar1,uVar2,**(undefined4 **)(_UNK_01b0dd8c + 0x1b0dcbc));
  iVar4 = *(int *)(param_1 + 8);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar2 = func_0x0210e2d4(param_2,0);
  if (iVar4 == 0) {
    func_0x01384bf0();
    if (iVar1 == 0) goto LAB_01b0dd5c;
    iVar1 = func_0x0245099c(0,uVar2,**(undefined4 **)(_UNK_01b0dd90 + 0x1b0dd38));
    func_0x01384bf0();
  }
  else {
    if (iVar1 == 0) {
LAB_01b0dd5c:
      iVar1 = 1;
      piVar3 = *(int **)(_UNK_01b0dd9c + 0x1b0dd70);
      goto LAB_01b0dd6c;
    }
    iVar1 = func_0x0245099c(iVar4,uVar2,**(undefined4 **)(_UNK_01b0dd94 + 0x1b0dd08));
  }
  iVar1 = iVar1 + 1;
  piVar3 = *(int **)(_UNK_01b0dd98 + 0x1b0dd5c);
LAB_01b0dd6c:
  func_0x03d5a8e0(iVar4,uVar2,iVar1,1,
                  *(undefined4 *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x88));
  return;
}



// ===== FAT.RescueBoardActivity.<>c__DisplayClass30_0$$<CollectRewardBoxItems>b__0 RVA 0x1afdda0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0dda0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_01b0ded8 + 0x1b0ddb8);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0dedc + 0x1b0ddcc));
    func_0x01384978(*(undefined4 *)(_UNK_01b0dee0 + 0x1b0ddd8));
    func_0x01384978(*(undefined4 *)(_UNK_01b0dee4 + 0x1b0dde4));
    *pcVar4 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 8);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0210e2d4(param_2,0);
  if (iVar5 == 0) {
    func_0x01384bf0();
  }
  iVar5 = func_0x02450998(iVar5,uVar1,**(undefined4 **)(_UNK_01b0dee8 + 0x1b0de28));
  iVar3 = *(int *)(param_1 + 8);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar1 = func_0x0210e2d4(param_2,0);
  if (iVar3 == 0) {
    func_0x01384bf0();
    iVar2 = 1;
    if (iVar5 == 0) goto LAB_01b0debc;
    iVar2 = func_0x0245099c(0,uVar1,**(undefined4 **)(_UNK_01b0deec + 0x1b0dea8));
    func_0x01384bf0();
  }
  else {
    iVar2 = 1;
    if (iVar5 == 0) goto LAB_01b0debc;
    iVar2 = func_0x0245099c(iVar3,uVar1,**(undefined4 **)(_UNK_01b0def0 + 0x1b0de78));
  }
  iVar2 = iVar2 + 1;
LAB_01b0debc:
  func_0x03d5a8e0(iVar3,uVar1,iVar2,1,
                  *(undefined4 *)
                   (*(int *)(*(int *)(**(int **)(_UNK_01b0def4 + 0x1b0decc) + 0x10) + 0x60) + 0x88))
  ;
  return;
}



// ===== FAT.RescueBoardActivity.<>c__DisplayClass31_0$$<CollectBonusItems>b__0 RVA 0x1afdef8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0def8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iStack_20;
  int iStack_1c;
  
  pcVar5 = (char *)(_UNK_01b0e128 + 0x1b0df14);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0e12c + 0x1b0df28));
    func_0x01384978(*(undefined4 *)(_UNK_01b0e130 + 0x1b0df34));
    func_0x01384978(*(undefined4 *)(_UNK_01b0e134 + 0x1b0df40));
    func_0x01384978(*(undefined4 *)(_UNK_01b0e138 + 0x1b0df4c));
    func_0x01384978(*(undefined4 *)(_UNK_01b0e13c + 0x1b0df58));
    *pcVar5 = '\x01';
  }
  iStack_1c = 0;
  iStack_20 = 0;
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02feb690(param_2,&iStack_1c,0,**(undefined4 **)(_UNK_01b0e140 + 0x1b0df8c));
  if ((((iStack_1c == 0 || iVar1 == 0) || (iVar1 = func_0x0211d748(iStack_1c,0), iVar1 != 1)) ||
      (iStack_1c == 0)) || (iVar1 = func_0x0211dc48(iStack_1c,0), iVar1 == 0)) {
    if (param_2 == 0) {
      func_0x01384bf0();
    }
    iVar2 = func_0x02feb690(param_2,&iStack_20,0,**(undefined4 **)(_UNK_01b0e154 + 0x1b0dfc8));
    iVar1 = iStack_20;
    if (iVar2 == 0) {
      return;
    }
    if (iStack_20 == 0) {
      func_0x01384bf0();
    }
    iVar1 = func_0x021372e0(iVar1,0);
    if (iVar1 != 3) {
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x0210e2d4(param_2,0);
  if (iVar1 == 0) {
    func_0x01384bf0();
  }
  iVar1 = func_0x02450998(iVar1,uVar3,**(undefined4 **)(_UNK_01b0e144 + 0x1b0e068));
  iVar2 = *(int *)(param_1 + 8);
  if (param_2 == 0) {
    func_0x01384bf0();
  }
  uVar3 = func_0x0210e2d4(param_2,0);
  if (iVar2 == 0) {
    func_0x01384bf0();
    if (iVar1 != 0) {
      iVar1 = func_0x0245099c(0,uVar3,**(undefined4 **)(_UNK_01b0e148 + 0x1b0e0e0));
      func_0x01384bf0();
      goto LAB_01b0e0f0;
    }
  }
  else if (iVar1 != 0) {
    iVar1 = func_0x0245099c(iVar2,uVar3,**(undefined4 **)(_UNK_01b0e14c + 0x1b0e0b4));
LAB_01b0e0f0:
    iVar1 = iVar1 + 1;
    puVar4 = *(undefined4 **)(_UNK_01b0e150 + 0x1b0e104);
    goto LAB_01b0e114;
  }
  iVar1 = 1;
  puVar4 = *(undefined4 **)(_UNK_01b0e158 + 0x1b0e118);
LAB_01b0e114:
  func_0x0245025c(iVar2,uVar3,iVar1,*puVar4);
  return;
}



// ===== FAT.RescueBoardActivity.<ResEnumerate>d__130$$System.IDisposable.Dispose RVA 0x1afe15c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0e15c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0xfffffff5:
  case 9:
    break;
  case 0xfffffff6:
  case 8:
    pcVar5 = &UNK_01b0fa94 + _UNK_01b0fb34;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01b0faa8 + _UNK_01b0fb38));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01b0fad4 + _UNK_01b0fb3c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01b0fb20;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b0fad4 + _UNK_01b0fb3c),0);
code_r0x01b0fb20:
                    /* WARNING: Could not recover jumptable at 0x01b0fb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffff7:
  case 7:
    pcVar5 = &UNK_01b0f9d4 + _UNK_01b0fa74;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01b0f9e8 + _UNK_01b0fa78));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01b0fa14 + _UNK_01b0fa7c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01b0fa60;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b0fa14 + _UNK_01b0fa7c),0);
code_r0x01b0fa60:
                    /* WARNING: Could not recover jumptable at 0x01b0fa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffff8:
  case 6:
    pcVar5 = &UNK_01b0f914 + _UNK_01b0f9b4;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01b0f928 + _UNK_01b0f9b8));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01b0f954 + _UNK_01b0f9bc)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01b0f9a0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b0f954 + _UNK_01b0f9bc),0);
code_r0x01b0f9a0:
                    /* WARNING: Could not recover jumptable at 0x01b0f9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffff9:
  case 5:
    pcVar5 = &UNK_01b0f854 + _UNK_01b0f8f4;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01b0f868 + _UNK_01b0f8f8));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01b0f894 + _UNK_01b0f8fc)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01b0f8e0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b0f894 + _UNK_01b0f8fc),0);
code_r0x01b0f8e0:
                    /* WARNING: Could not recover jumptable at 0x01b0f8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffa:
  case 4:
    pcVar5 = &UNK_01b0f794 + _UNK_01b0f834;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01b0f7a8 + _UNK_01b0f838));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01b0f7d4 + _UNK_01b0f83c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01b0f820;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b0f7d4 + _UNK_01b0f83c),0);
code_r0x01b0f820:
                    /* WARNING: Could not recover jumptable at 0x01b0f830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffb:
  case 3:
    pcVar5 = &UNK_01b0f6d4 + _UNK_01b0f774;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01b0f6e8 + _UNK_01b0f778));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01b0f714 + _UNK_01b0f77c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01b0f760;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b0f714 + _UNK_01b0f77c),0);
code_r0x01b0f760:
                    /* WARNING: Could not recover jumptable at 0x01b0f770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffc:
  case 2:
    pcVar5 = &UNK_01b0f614 + _UNK_01b0f6b4;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01b0f628 + _UNK_01b0f6b8));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01b0f654 + _UNK_01b0f6bc)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01b0f6a0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b0f654 + _UNK_01b0f6bc),0);
code_r0x01b0f6a0:
                    /* WARNING: Could not recover jumptable at 0x01b0f6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffd:
  case 1:
    pcVar5 = &UNK_01b0f554 + _UNK_01b0f5f4;
    if (*pcVar5 == '\0') {
      func_0x01384978(*(undefined4 *)(&UNK_01b0f568 + _UNK_01b0f5f8));
      *pcVar5 = '\x01';
    }
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar6 == (int *)0x0) {
      return;
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar4[-1] == **(int **)(&UNK_01b0f594 + _UNK_01b0f5fc)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
          goto code_r0x01b0f5e0;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b0f594 + _UNK_01b0f5fc),0);
code_r0x01b0f5e0:
                    /* WARNING: Could not recover jumptable at 0x01b0f5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar2)(piVar6,puVar2[1]);
    return;
  case 0xfffffffe:
  case 0xffffffff:
  case 0:
    return;
  default:
    return;
  }
  pcVar5 = &UNK_01b0fb54 + _UNK_01b0fbf4;
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(&UNK_01b0fb68 + _UNK_01b0fbf8));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(&UNK_01b0fb94 + _UNK_01b0fbfc)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto code_r0x01b0fbe0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b0fb94 + _UNK_01b0fbfc),0);
code_r0x01b0fbe0:
                    /* WARNING: Could not recover jumptable at 0x01b0fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.RescueBoardActivity.<ResEnumerate>d__130$$MoveNext RVA 0x1afe1f4 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b0e1f4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar7 = (char *)(_UNK_01b0f1e4 + 0x1b0e20c);
  if (*pcVar7 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0f1e8 + 0x1b0e220));
    func_0x01384978(*(undefined4 *)(_UNK_01b0f1ec + 0x1b0e22c));
    func_0x01384978(*(undefined4 *)(_UNK_01b0f1f0 + 0x1b0e238));
    *pcVar7 = '\x01';
  }
  if (9 < *(uint *)(param_1 + 8)) {
    return 0;
  }
  piVar8 = *(int **)(param_1 + 0x18);
  switch(*(uint *)(param_1 + 8)) {
  case 0:
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = (**(code **)(*piVar8 + 0x108))(piVar8,*(undefined4 *)(*piVar8 + 0x10c));
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = piVar8[0x24];
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b61d48(iVar1,0);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(&UNK_01b0e2f4 + _UNK_01b0f278)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto code_r0x01b0e3cc;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b0e2f4 + _UNK_01b0f278),0);
code_r0x01b0e3cc:
    piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    *(int **)(param_1 + 0x1c) = piVar6;
    break;
  case 1:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    break;
  case 2:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
    goto code_r0x01b0e5b4;
  case 3:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffb;
    goto code_r0x01b0e778;
  case 4:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffffa;
    goto code_r0x01b0e93c;
  case 5:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff9;
    goto code_r0x01b0eb00;
  case 6:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff8;
    goto code_r0x01b0ecc4;
  case 7:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff7;
    goto code_r0x01b0ee88;
  case 8:
    piVar6 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff6;
    goto code_r0x01b0f04c;
  case 9:
    piVar8 = *(int **)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 8) = 0xfffffff5;
    goto code_r0x01b0f220;
  }
  if (piVar6 == (int *)0x0) {
    func_0x01384bf0();
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar5[-1] == **(int **)(&UNK_01b0e408 + _UNK_01b0f400)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
        goto code_r0x01b0e450;
      }
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b0e408 + _UNK_01b0f400),0);
code_r0x01b0e450:
  iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
  if (iVar1 == 0) {
    func_0x01b0f540(param_1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = piVar8[0x1d];
    if (iVar1 == 0) {
      func_0x01384bf0();
    }
    piVar6 = (int *)func_0x02b61d48(iVar1,0);
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(&UNK_01b0e51c + _UNK_01b0f4e0)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto code_r0x01b0e594;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b0e51c + _UNK_01b0f4e0),0);
code_r0x01b0e594:
    piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 0xfffffffc;
    *(int **)(param_1 + 0x1c) = piVar6;
code_r0x01b0e5b4:
    if (piVar6 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar6;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar5[-1] == **(int **)(&UNK_01b0e5d0 + _UNK_01b0f4e8)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
          goto code_r0x01b0e618;
        }
        uVar3 = uVar3 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b0e5d0 + _UNK_01b0f4e8),0);
code_r0x01b0e618:
    iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
    if (iVar1 == 0) {
      func_0x01b0f600(param_1);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = piVar8[0x27];
      if (iVar1 == 0) {
        func_0x01384bf0();
      }
      piVar6 = (int *)func_0x02b61d48(iVar1,0);
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar6;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(&UNK_01b0e6e4 + _UNK_01b0f4ec)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto code_r0x01b0e758;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b0e6e4 + _UNK_01b0f4ec),0);
code_r0x01b0e758:
      piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
      *(undefined4 *)(param_1 + 8) = 0xfffffffb;
      *(int **)(param_1 + 0x1c) = piVar6;
code_r0x01b0e778:
      if (piVar6 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar6;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar5[-1] == **(int **)(&UNK_01b0e794 + _UNK_01b0f4f4)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
            goto code_r0x01b0e7dc;
          }
          uVar3 = uVar3 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b0e794 + _UNK_01b0f4f4),0);
code_r0x01b0e7dc:
      iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
      if (iVar1 == 0) {
        func_0x01b0f6c0(param_1);
        *(undefined4 *)(param_1 + 0x1c) = 0;
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = piVar8[0x1e];
        if (iVar1 == 0) {
          func_0x01384bf0();
        }
        piVar6 = (int *)func_0x02b61d48(iVar1,0);
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar6;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(&UNK_01b0e8a8 + _UNK_01b0f4f8)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto code_r0x01b0e91c;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b0e8a8 + _UNK_01b0f4f8),0);
code_r0x01b0e91c:
        piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
        *(undefined4 *)(param_1 + 8) = 0xfffffffa;
        *(int **)(param_1 + 0x1c) = piVar6;
code_r0x01b0e93c:
        if (piVar6 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar6;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar5[-1] == **(int **)(&UNK_01b0e958 + _UNK_01b0f500)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
              goto code_r0x01b0e9a0;
            }
            uVar3 = uVar3 - 1;
            piVar5 = piVar5 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b0e958 + _UNK_01b0f500),0);
code_r0x01b0e9a0:
        iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
        if (iVar1 == 0) {
          func_0x01b0f780(param_1);
          *(undefined4 *)(param_1 + 0x1c) = 0;
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = piVar8[0x1f];
          if (iVar1 == 0) {
            func_0x01384bf0();
          }
          piVar6 = (int *)func_0x02b61d48(iVar1,0);
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar6;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar5[-1] == **(int **)(&UNK_01b0ea6c + _UNK_01b0f504)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                goto code_r0x01b0eae0;
              }
              uVar3 = uVar3 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b0ea6c + _UNK_01b0f504),0)
          ;
code_r0x01b0eae0:
          piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
          *(undefined4 *)(param_1 + 8) = 0xfffffff9;
          *(int **)(param_1 + 0x1c) = piVar6;
code_r0x01b0eb00:
          if (piVar6 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar6;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar5[-1] == **(int **)(&UNK_01b0eb1c + _UNK_01b0f50c)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                goto code_r0x01b0eb64;
              }
              uVar3 = uVar3 - 1;
              piVar5 = piVar5 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(&UNK_01b0eb1c + _UNK_01b0f50c),0)
          ;
code_r0x01b0eb64:
          iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
          if (iVar1 == 0) {
            func_0x01b0f840(param_1);
            *(undefined4 *)(param_1 + 0x1c) = 0;
            if (piVar8 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = piVar8[0x20];
            if (iVar1 == 0) {
              func_0x01384bf0();
            }
            piVar6 = (int *)func_0x02b61d48(iVar1,0);
            if (piVar6 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar6;
            uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar3 != 0) {
              piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar5[-1] == **(int **)(&UNK_01b0ec30 + _UNK_01b0f510)) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                  goto code_r0x01b0eca4;
                }
                uVar3 = uVar3 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined4 *)
                     func_0x014002dc(piVar6,**(int **)(&UNK_01b0ec30 + _UNK_01b0f510),0);
code_r0x01b0eca4:
            piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
            *(undefined4 *)(param_1 + 8) = 0xfffffff8;
            *(int **)(param_1 + 0x1c) = piVar6;
code_r0x01b0ecc4:
            if (piVar6 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar6;
            uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar3 != 0) {
              piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar5[-1] == **(int **)(&UNK_01b0ece0 + _UNK_01b0f518)) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                  goto code_r0x01b0ed28;
                }
                uVar3 = uVar3 - 1;
                piVar5 = piVar5 + 2;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined4 *)
                     func_0x014002dc(piVar6,**(int **)(&UNK_01b0ece0 + _UNK_01b0f518),0);
code_r0x01b0ed28:
            iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
            if (iVar1 == 0) {
              func_0x01b0f900(param_1);
              *(undefined4 *)(param_1 + 0x1c) = 0;
              if (piVar8 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = piVar8[0x21];
              if (iVar1 == 0) {
                func_0x01384bf0();
              }
              piVar6 = (int *)func_0x02b61d48(iVar1,0);
              if (piVar6 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar6;
              uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar3 != 0) {
                piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar5[-1] == **(int **)(&UNK_01b0edf4 + _UNK_01b0f51c)) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                    goto code_r0x01b0ee68;
                  }
                  uVar3 = uVar3 - 1;
                  piVar5 = piVar5 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)
                       func_0x014002dc(piVar6,**(int **)(&UNK_01b0edf4 + _UNK_01b0f51c),0);
code_r0x01b0ee68:
              piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
              *(undefined4 *)(param_1 + 8) = 0xfffffff7;
              *(int **)(param_1 + 0x1c) = piVar6;
code_r0x01b0ee88:
              if (piVar6 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar6;
              uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar3 != 0) {
                piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar5[-1] == **(int **)(&UNK_01b0eea4 + _UNK_01b0f524)) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                    goto code_r0x01b0eeec;
                  }
                  uVar3 = uVar3 - 1;
                  piVar5 = piVar5 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)
                       func_0x014002dc(piVar6,**(int **)(&UNK_01b0eea4 + _UNK_01b0f524),0);
code_r0x01b0eeec:
              iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
              if (iVar1 == 0) {
                func_0x01b0f9c0(param_1);
                *(undefined4 *)(param_1 + 0x1c) = 0;
                if (piVar8 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar1 = piVar8[0x2a];
                if (iVar1 == 0) {
                  func_0x01384bf0();
                }
                piVar6 = (int *)func_0x02b61d48(iVar1,0);
                if (piVar6 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar1 = *piVar6;
                uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                if (uVar3 != 0) {
                  piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                  do {
                    if (piVar5[-1] == **(int **)(&UNK_01b0efb8 + _UNK_01b0f528)) {
                      puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                      goto code_r0x01b0f02c;
                    }
                    uVar3 = uVar3 - 1;
                    piVar5 = piVar5 + 2;
                  } while (uVar3 != 0);
                }
                puVar2 = (undefined4 *)
                         func_0x014002dc(piVar6,**(int **)(&UNK_01b0efb8 + _UNK_01b0f528),0);
code_r0x01b0f02c:
                piVar6 = (int *)(*(code *)*puVar2)(piVar6,puVar2[1]);
                *(undefined4 *)(param_1 + 8) = 0xfffffff6;
                *(int **)(param_1 + 0x1c) = piVar6;
code_r0x01b0f04c:
                if (piVar6 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar1 = *piVar6;
                uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                if (uVar3 != 0) {
                  piVar5 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                  do {
                    if (piVar5[-1] == **(int **)(&UNK_01b0f068 + _UNK_01b0f530)) {
                      puVar2 = (undefined4 *)(iVar1 + *piVar5 * 8 + 0xc0);
                      goto code_r0x01b0f0b0;
                    }
                    uVar3 = uVar3 - 1;
                    piVar5 = piVar5 + 2;
                  } while (uVar3 != 0);
                }
                puVar2 = (undefined4 *)
                         func_0x014002dc(piVar6,**(int **)(&UNK_01b0f068 + _UNK_01b0f530),0);
code_r0x01b0f0b0:
                iVar1 = (*(code *)*puVar2)(piVar6,puVar2[1]);
                if (iVar1 == 0) {
                  func_0x01b0fa80(param_1);
                  *(undefined4 *)(param_1 + 0x1c) = 0;
                  if (piVar8 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar1 = piVar8[0x22];
                  if (iVar1 == 0) {
                    func_0x01384bf0();
                  }
                  piVar8 = (int *)func_0x02b61d48(iVar1,0);
                  if (piVar8 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar1 = *piVar8;
                  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                  if (uVar3 != 0) {
                    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                    do {
                      if (piVar6[-1] == **(int **)(&UNK_01b0f17c + _UNK_01b0f534)) {
                        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                        goto code_r0x01b0f200;
                      }
                      uVar3 = uVar3 - 1;
                      piVar6 = piVar6 + 2;
                    } while (uVar3 != 0);
                  }
                  puVar2 = (undefined4 *)
                           func_0x014002dc(piVar8,**(int **)(&UNK_01b0f17c + _UNK_01b0f534),0);
code_r0x01b0f200:
                  piVar8 = (int *)(*(code *)*puVar2)(piVar8,puVar2[1]);
                  *(undefined4 *)(param_1 + 8) = 0xfffffff5;
                  *(int **)(param_1 + 0x1c) = piVar8;
code_r0x01b0f220:
                  if (piVar8 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar1 = *piVar8;
                  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                  if (uVar3 != 0) {
                    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                    do {
                      if (piVar6[-1] == **(int **)(&UNK_01b0f23c + _UNK_01b0f53c)) {
                        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                        goto code_r0x01b0f288;
                      }
                      uVar3 = uVar3 - 1;
                      piVar6 = piVar6 + 2;
                    } while (uVar3 != 0);
                  }
                  puVar2 = (undefined4 *)
                           func_0x014002dc(piVar8,**(int **)(&UNK_01b0f23c + _UNK_01b0f53c),0);
code_r0x01b0f288:
                  iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
                  if (iVar1 == 0) {
                    func_0x01b0fb40(param_1);
                    *(undefined4 *)(param_1 + 0x1c) = 0;
                    return 0;
                  }
                  piVar8 = *(int **)(param_1 + 0x1c);
                  if (piVar8 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar1 = *piVar8;
                  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                  if (uVar3 != 0) {
                    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                    do {
                      if (piVar6[-1] == **(int **)(&UNK_01b0f2c0 + _UNK_01b0f538)) {
                        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                        goto code_r0x01b0f31c;
                      }
                      uVar3 = uVar3 - 1;
                      piVar6 = piVar6 + 2;
                    } while (uVar3 != 0);
                  }
                  puVar2 = (undefined4 *)
                           func_0x014002dc(piVar8,**(int **)(&UNK_01b0f2c0 + _UNK_01b0f538),0);
code_r0x01b0f31c:
                  (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
                  uVar4 = 9;
                }
                else {
                  piVar8 = *(int **)(param_1 + 0x1c);
                  if (piVar8 == (int *)0x0) {
                    func_0x01384bf0();
                  }
                  iVar1 = *piVar8;
                  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                  if (uVar3 != 0) {
                    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                    do {
                      if (piVar6[-1] == **(int **)(&UNK_01b0f0e8 + _UNK_01b0f52c)) {
                        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                        goto code_r0x01b0f1c4;
                      }
                      uVar3 = uVar3 - 1;
                      piVar6 = piVar6 + 2;
                    } while (uVar3 != 0);
                  }
                  puVar2 = (undefined4 *)
                           func_0x014002dc(piVar8,**(int **)(&UNK_01b0f0e8 + _UNK_01b0f52c),0);
code_r0x01b0f1c4:
                  (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
                  uVar4 = 8;
                }
              }
              else {
                piVar8 = *(int **)(param_1 + 0x1c);
                if (piVar8 == (int *)0x0) {
                  func_0x01384bf0();
                }
                iVar1 = *piVar8;
                uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
                if (uVar3 != 0) {
                  piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                  do {
                    if (piVar6[-1] == **(int **)(&UNK_01b0ef24 + _UNK_01b0f520)) {
                      puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                      goto code_r0x01b0f000;
                    }
                    uVar3 = uVar3 - 1;
                    piVar6 = piVar6 + 2;
                  } while (uVar3 != 0);
                }
                puVar2 = (undefined4 *)
                         func_0x014002dc(piVar8,**(int **)(&UNK_01b0ef24 + _UNK_01b0f520),0);
code_r0x01b0f000:
                (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
                uVar4 = 7;
              }
            }
            else {
              piVar8 = *(int **)(param_1 + 0x1c);
              if (piVar8 == (int *)0x0) {
                func_0x01384bf0();
              }
              iVar1 = *piVar8;
              uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
              if (uVar3 != 0) {
                piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
                do {
                  if (piVar6[-1] == **(int **)(&UNK_01b0ed60 + _UNK_01b0f514)) {
                    puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                    goto code_r0x01b0ee3c;
                  }
                  uVar3 = uVar3 - 1;
                  piVar6 = piVar6 + 2;
                } while (uVar3 != 0);
              }
              puVar2 = (undefined4 *)
                       func_0x014002dc(piVar8,**(int **)(&UNK_01b0ed60 + _UNK_01b0f514),0);
code_r0x01b0ee3c:
              (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
              uVar4 = 6;
            }
          }
          else {
            piVar8 = *(int **)(param_1 + 0x1c);
            if (piVar8 == (int *)0x0) {
              func_0x01384bf0();
            }
            iVar1 = *piVar8;
            uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
            if (uVar3 != 0) {
              piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
              do {
                if (piVar6[-1] == **(int **)(&UNK_01b0eb9c + _UNK_01b0f508)) {
                  puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                  goto code_r0x01b0ec78;
                }
                uVar3 = uVar3 - 1;
                piVar6 = piVar6 + 2;
              } while (uVar3 != 0);
            }
            puVar2 = (undefined4 *)
                     func_0x014002dc(piVar8,**(int **)(&UNK_01b0eb9c + _UNK_01b0f508),0);
code_r0x01b0ec78:
            (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
            uVar4 = 5;
          }
        }
        else {
          piVar8 = *(int **)(param_1 + 0x1c);
          if (piVar8 == (int *)0x0) {
            func_0x01384bf0();
          }
          iVar1 = *piVar8;
          uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
          if (uVar3 != 0) {
            piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
            do {
              if (piVar6[-1] == **(int **)(&UNK_01b0e9d8 + _UNK_01b0f4fc)) {
                puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
                goto code_r0x01b0eab4;
              }
              uVar3 = uVar3 - 1;
              piVar6 = piVar6 + 2;
            } while (uVar3 != 0);
          }
          puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01b0e9d8 + _UNK_01b0f4fc),0)
          ;
code_r0x01b0eab4:
          (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
          uVar4 = 4;
        }
      }
      else {
        piVar8 = *(int **)(param_1 + 0x1c);
        if (piVar8 == (int *)0x0) {
          func_0x01384bf0();
        }
        iVar1 = *piVar8;
        uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
        if (uVar3 != 0) {
          piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
          do {
            if (piVar6[-1] == **(int **)(&UNK_01b0e814 + _UNK_01b0f4f0)) {
              puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
              goto code_r0x01b0e8f0;
            }
            uVar3 = uVar3 - 1;
            piVar6 = piVar6 + 2;
          } while (uVar3 != 0);
        }
        puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01b0e814 + _UNK_01b0f4f0),0);
code_r0x01b0e8f0:
        (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
        uVar4 = 3;
      }
    }
    else {
      piVar8 = *(int **)(param_1 + 0x1c);
      if (piVar8 == (int *)0x0) {
        func_0x01384bf0();
      }
      iVar1 = *piVar8;
      uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
      if (uVar3 != 0) {
        piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
        do {
          if (piVar6[-1] == **(int **)(&UNK_01b0e650 + _UNK_01b0f4e4)) {
            puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
            goto code_r0x01b0e72c;
          }
          uVar3 = uVar3 - 1;
          piVar6 = piVar6 + 2;
        } while (uVar3 != 0);
      }
      puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01b0e650 + _UNK_01b0f4e4),0);
code_r0x01b0e72c:
      (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
      uVar4 = 2;
    }
    *(undefined4 *)(param_1 + 8) = uVar4;
  }
  else {
    piVar8 = *(int **)(param_1 + 0x1c);
    if (piVar8 == (int *)0x0) {
      func_0x01384bf0();
    }
    iVar1 = *piVar8;
    uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(&UNK_01b0e488 + _UNK_01b0f47c)) {
          puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto code_r0x01b0e564;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined4 *)func_0x014002dc(piVar8,**(int **)(&UNK_01b0e488 + _UNK_01b0f47c),0);
code_r0x01b0e564:
    (*(code *)*puVar2)(&uStack_20,piVar8,puVar2[1]);
    *(undefined4 *)(param_1 + 8) = 1;
  }
  *(undefined4 *)(param_1 + 0xc) = uStack_20;
  *(undefined4 *)(param_1 + 0x10) = uStack_1c;
  return 1;
}



// ===== FAT.RescueBoardActivity.<ResEnumerate>d__130$$<>m__Finally1 RVA 0x1aff540 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0f540(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01b0f5f4 + 0x1b0f554);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0f5f8 + 0x1b0f568));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01b0f5fc + 0x1b0f594)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01b0f5e0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01b0f5fc + 0x1b0f594),0);
LAB_01b0f5e0:
                    /* WARNING: Could not recover jumptable at 0x01b0f5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.RescueBoardActivity.<ResEnumerate>d__130$$<>m__Finally2 RVA 0x1aff600 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0f600(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01b0f6b4 + 0x1b0f614);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0f6b8 + 0x1b0f628));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01b0f6bc + 0x1b0f654)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01b0f6a0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01b0f6bc + 0x1b0f654),0);
LAB_01b0f6a0:
                    /* WARNING: Could not recover jumptable at 0x01b0f6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.RescueBoardActivity.<ResEnumerate>d__130$$<>m__Finally3 RVA 0x1aff6c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0f6c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01b0f774 + 0x1b0f6d4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0f778 + 0x1b0f6e8));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01b0f77c + 0x1b0f714)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01b0f760;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01b0f77c + 0x1b0f714),0);
LAB_01b0f760:
                    /* WARNING: Could not recover jumptable at 0x01b0f770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.RescueBoardActivity.<ResEnumerate>d__130$$<>m__Finally4 RVA 0x1aff780 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0f780(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01b0f834 + 0x1b0f794);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0f838 + 0x1b0f7a8));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01b0f83c + 0x1b0f7d4)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01b0f820;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01b0f83c + 0x1b0f7d4),0);
LAB_01b0f820:
                    /* WARNING: Could not recover jumptable at 0x01b0f830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.RescueBoardActivity.<ResEnumerate>d__130$$<>m__Finally5 RVA 0x1aff840 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0f840(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01b0f8f4 + 0x1b0f854);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0f8f8 + 0x1b0f868));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01b0f8fc + 0x1b0f894)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01b0f8e0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01b0f8fc + 0x1b0f894),0);
LAB_01b0f8e0:
                    /* WARNING: Could not recover jumptable at 0x01b0f8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.RescueBoardActivity.<ResEnumerate>d__130$$<>m__Finally6 RVA 0x1aff900 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0f900(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01b0f9b4 + 0x1b0f914);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0f9b8 + 0x1b0f928));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01b0f9bc + 0x1b0f954)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01b0f9a0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01b0f9bc + 0x1b0f954),0);
LAB_01b0f9a0:
                    /* WARNING: Could not recover jumptable at 0x01b0f9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.RescueBoardActivity.<ResEnumerate>d__130$$<>m__Finally7 RVA 0x1aff9c0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0f9c0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01b0fa74 + 0x1b0f9d4);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0fa78 + 0x1b0f9e8));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01b0fa7c + 0x1b0fa14)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01b0fa60;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01b0fa7c + 0x1b0fa14),0);
LAB_01b0fa60:
                    /* WARNING: Could not recover jumptable at 0x01b0fa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.RescueBoardActivity.<ResEnumerate>d__130$$<>m__Finally8 RVA 0x1affa80 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0fa80(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01b0fb34 + 0x1b0fa94);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0fb38 + 0x1b0faa8));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01b0fb3c + 0x1b0fad4)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01b0fb20;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01b0fb3c + 0x1b0fad4),0);
LAB_01b0fb20:
                    /* WARNING: Could not recover jumptable at 0x01b0fb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.RescueBoardActivity.<ResEnumerate>d__130$$<>m__Finally9 RVA 0x1affb40 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0fb40(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_01b0fbf4 + 0x1b0fb54);
  if (*pcVar5 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0fbf8 + 0x1b0fb68));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_01b0fbfc + 0x1b0fb94)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_01b0fbe0;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)func_0x014002dc(piVar6,**(int **)(_UNK_01b0fbfc + 0x1b0fb94),0);
LAB_01b0fbe0:
                    /* WARNING: Could not recover jumptable at 0x01b0fbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,puVar2[1]);
  return;
}



// ===== FAT.RescueBoardActivity.<ResEnumerate>d__130$$System.Collections.Generic.IEnumerator<(System.String,EL.Resource.AssetTag)>.get_Current RVA 0x1affc00 =====

void FUN_01b0fc00(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *param_1 = *(undefined4 *)(param_2 + 0xc);
  param_1[1] = uVar1;
  return;
}



// ===== FAT.RescueBoardActivity.<ResEnumerate>d__130$$System.Collections.IEnumerator.Reset RVA 0x1affc14 =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0fc14(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  func_0x01384988(*(undefined4 *)(_UNK_01b0fc50 + 0x1b0fc24));
  uVar1 = func_0x01384be4();
  func_0x0244f7fc(uVar1,0);
  uVar2 = func_0x01384988(*(undefined4 *)(_UNK_01b0fc54 + 0x1b0fc40));
  func_0x01384aa0(uVar1,uVar2);
  func_0x01384928();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== FAT.RescueBoardActivity.<ResEnumerate>d__130$$System.Collections.IEnumerator.get_Current RVA 0x1affc58 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b0fc58(int param_1)

{
  char *pcVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_01b0fcb4 + 0x1b0fc70);
  if (*pcVar1 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0fcb8 + 0x1b0fc84));
    *pcVar1 = '\x01';
  }
  uStack_18 = *(undefined4 *)(param_1 + 0xc);
  uStack_14 = *(undefined4 *)(param_1 + 0x10);
  func_0x01384abc(**(undefined4 **)(_UNK_01b0fcbc + 0x1b0fca0),&uStack_18);
  return;
}



// ===== FAT.RescueBoardActivity.<ResEnumerate>d__130$$System.Collections.Generic.IEnumerable<(System.String,EL.Resource.AssetTag)>.GetEnumerator RVA 0x1affcc0 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_01b0fcc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_01b0fd60 + 0x1b0fcd4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0fd64 + 0x1b0fce8));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x0245057c(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b0fd68 + 0x1b0fd2c));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x0245057c(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}



// ===== FAT.RescueBoardActivity.<ResEnumerate>d__130$$System.Collections.IEnumerable.GetEnumerator RVA 0x1affd6c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int thunk_FUN_01b0fcc0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(_UNK_01b0fd60 + 0x1b0fcd4);
  if (*pcVar4 == '\0') {
    func_0x01384978(*(undefined4 *)(_UNK_01b0fd64 + 0x1b0fce8));
    *pcVar4 = '\x01';
  }
  if ((*(int *)(param_1 + 8) == -2) &&
     (iVar5 = *(int *)(param_1 + 0x14), iVar1 = func_0x0245057c(0), iVar5 == iVar1)) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = param_1;
  }
  else {
    iVar1 = func_0x01384be4(**(undefined4 **)(_UNK_01b0fd68 + 0x1b0fd2c));
    func_0x0244f5a0(iVar1,0);
    *(undefined4 *)(iVar1 + 8) = 0;
    uVar2 = func_0x0245057c(0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
  }
  return iVar1;
}


