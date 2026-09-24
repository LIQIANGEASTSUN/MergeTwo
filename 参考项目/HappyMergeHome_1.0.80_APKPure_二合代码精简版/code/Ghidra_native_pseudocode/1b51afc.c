
/* WARNING: Possible PIC construction at 0x01b6200c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x01b620a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x01b62010) */
/* WARNING: Removing unreachable block (ram,0x01b62038) */
/* WARNING: Removing unreachable block (ram,0x01b62044) */
/* WARNING: Removing unreachable block (ram,0x01b62054) */
/* WARNING: Removing unreachable block (ram,0x01b62058) */
/* WARNING: Removing unreachable block (ram,0x01b62064) */
/* WARNING: Removing unreachable block (ram,0x01b62068) */
/* WARNING: Removing unreachable block (ram,0x01b6207c) */
/* WARNING: Removing unreachable block (ram,0x01b62080) */
/* WARNING: Removing unreachable block (ram,0x01b62090) */
/* WARNING: Removing unreachable block (ram,0x01b62094) */
/* WARNING: Removing unreachable block (ram,0x01b620a8) */
/* WARNING: Removing unreachable block (ram,0x01b620d0) */
/* WARNING: Removing unreachable block (ram,0x01b620dc) */
/* WARNING: Removing unreachable block (ram,0x01b620ec) */
/* WARNING: Removing unreachable block (ram,0x01b620f0) */
/* WARNING: Removing unreachable block (ram,0x01b620fc) */
/* WARNING: Removing unreachable block (ram,0x01b62100) */
/* WARNING: Removing unreachable block (ram,0x01b62114) */
/* WARNING: Removing unreachable block (ram,0x01b62118) */
/* WARNING: Removing unreachable block (ram,0x01b62128) */
/* WARNING: Removing unreachable block (ram,0x01b6212c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01b61afc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 uStack_68;
  undefined4 **ppuStack_64;
  undefined1 *puStack_60;
  undefined4 *puStack_5c;
  undefined1 auStack_58 [4];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 *puStack_38;
  int *piStack_34;
  undefined4 *puStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01b62150 + 0x1b61b14);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01b62154 + 0x1b61b28));
    func_0x01438628(*(undefined4 *)(_UNK_01b62158 + 0x1b61b34));
    func_0x01438628(*(undefined4 *)(_UNK_01b6215c + 0x1b61b40));
    func_0x01438628(*(undefined4 *)(_UNK_01b62160 + 0x1b61b4c));
    func_0x01438628(*(undefined4 *)(_UNK_01b62164 + 0x1b61b58));
    func_0x01438628(*(undefined4 *)(_UNK_01b62168 + 0x1b61b64));
    func_0x01438628(*(undefined4 *)(_UNK_01b6216c + 0x1b61b70));
    func_0x01438628(*(undefined4 *)(_UNK_01b62170 + 0x1b61b7c));
    func_0x01438628(*(undefined4 *)(_UNK_01b62174 + 0x1b61b88));
    func_0x01438628(*(undefined4 *)(_UNK_01b62178 + 0x1b61b94));
    func_0x01438628(*(undefined4 *)(_UNK_01b6217c + 0x1b61ba0));
    func_0x01438628(*(undefined4 *)(_UNK_01b62180 + 0x1b61bac));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0xcd4,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01b572ec(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = FUN_01b572ec(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x20);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x024f0708(iVar1,**(undefined4 **)(_UNK_01b62184 + 0x1b61c40));
    iVar1 = FUN_01b572ec(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x026bf128(iVar1,0,0);
    iVar1 = FUN_01b572ec(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    piVar9 = *(int **)(_UNK_01b62188 + 0x1b61c94);
    iVar1 = *(int *)(iVar1 + 0x1c);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar13 = *(undefined4 **)(_UNK_01b6218c + 0x1b61cb4);
    iVar8 = func_0x014e9518(*puVar13);
    if (iVar8 == 0) {
      func_0x014388e4();
    }
    if (*(int *)(iVar8 + 0x40) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(*(int *)(iVar8 + 0x40) + 0xc);
    }
    if (iVar1 != 0) {
      iVar8 = iVar8 + 1;
      if (iVar8 < 2) {
        iVar8 = 1;
      }
      func_0x026bf898(iVar1,iVar8,0);
      func_0x026bf954(iVar1,0,0);
    }
    iVar1 = FUN_01b572ec(param_1);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puVar14 = *(undefined4 **)(iVar1 + 0x18);
    if (puVar14 != (undefined4 *)0x0) {
      if (*(int *)(*piVar9 + 0x74) == 0) {
        func_0x014387a4();
      }
      iVar1 = func_0x014e9518(*puVar13);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar8 = *(int *)(iVar1 + 0x38);
      iVar1 = 0;
      if ((iVar8 != 0) && (0 < *(int *)(iVar8 + 0xc))) {
        iVar1 = 0;
        iVar11 = 0;
        puVar7 = *(undefined4 **)(_UNK_01b62190 + 0x1b61d8c);
        do {
          iVar2 = func_0x0152983c(iVar8,iVar11,*puVar7);
          if (((iVar2 != 0) && (*(int *)(iVar2 + 0xc) == 0x12e)) &&
             (iVar1 <= *(int *)(iVar2 + 0x14))) {
            iVar1 = *(int *)(iVar2 + 0x14);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(iVar8 + 0xc));
      }
      func_0x026bfa18(puVar14,iVar1,0);
      piVar9 = *(int **)(_UNK_01b62194 + 0x1b61de4);
    }
    if (*(int *)(*piVar9 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = func_0x014e9518(*puVar13);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    iVar1 = *(int *)(iVar1 + 0x38);
    if ((iVar1 != 0) && (0 < *(int *)(iVar1 + 0xc))) {
      iVar8 = 0;
      puVar13 = *(undefined4 **)(_UNK_01b62198 + 0x1b61e34);
      puVar14 = *(undefined4 **)(_UNK_01b6219c + 0x1b61e3c);
      do {
        iVar11 = func_0x0152983c(iVar1,iVar8,*puVar13);
        if ((iVar11 != 0) && (iVar2 = func_0x01b621b4(*(undefined4 *)(iVar11 + 0xc)), iVar2 == 0)) {
          iVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01b621a0 + 0x1b61e70));
          func_0x026bf888(iVar2,0);
          uVar10 = *(undefined4 *)(iVar11 + 8);
          if (iVar2 == 0) {
            func_0x014388e4();
            func_0x026bf65c(0,uVar10,0);
            func_0x014388e4();
          }
          else {
            func_0x026bf65c(iVar2,uVar10,0);
          }
          func_0x026bf718(iVar2,0,0);
          uVar6 = *(uint *)(iVar11 + 0x14);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x026bf7d4(iVar2,uVar6 & ~((int)uVar6 >> 0x1f),0);
          iVar11 = FUN_01b572ec(param_1);
          if (iVar11 == 0) {
            func_0x014388e4();
          }
          iVar11 = *(int *)(iVar11 + 0x20);
          if (iVar11 == 0) {
            func_0x014388e4();
          }
          func_0x024f0f08(iVar11,iVar2,*puVar14);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(iVar1 + 0xc));
    }
    if (*(int *)(**(int **)(_UNK_01b621a4 + 0x1b61f3c) + 0x74) == 0) {
      func_0x014387a4();
    }
    puVar7 = *(undefined4 **)(_UNK_01b621a8 + 0x1b61f58);
    puVar13 = (undefined4 *)func_0x014e9518(*puVar7);
    piVar9 = *(int **)(_UNK_01b621ac + 0x1b61f6c);
    iVar1 = *piVar9;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar9;
    }
    piVar12 = *(int **)(_UNK_01b621b0 + 0x1b61f8c);
    iVar8 = *piVar12;
    uVar10 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x374);
    iVar1 = *(int *)(iVar8 + 0x1c);
    if (iVar1 == 0) {
      func_0x014909d8(iVar8);
      iVar1 = *(int *)(iVar8 + 0x1c);
    }
    iVar1 = *(int *)(iVar1 + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x0149097c();
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar1 = *(int *)(*(int *)(iVar8 + 0x1c) + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = func_0x0149097c();
    }
    uVar4 = **(undefined4 **)(iVar1 + 0x5c);
    if (puVar13 == (undefined4 *)0x0) {
      func_0x014388e4();
    }
    uStack_2c = 0x1b62010;
    pcVar5 = (char *)(_UNK_029903f0 + 0x29901d4);
    puStack_4c = puVar13;
    puStack_48 = puVar13;
    uStack_44 = uVar10;
    uStack_40 = uVar4;
    piStack_3c = piVar9;
    puStack_38 = puVar7;
    piStack_34 = piVar12;
    puStack_30 = puVar14;
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_029903f4 + 0x29901ec),uVar10,uVar4,0);
      func_0x01438628(*(undefined4 *)(_UNK_029903f8 + 0x29901f8));
      func_0x01438628(*(undefined4 *)(_UNK_029903fc + 0x2990204));
      func_0x01438628(*(undefined4 *)(_UNK_02990400 + 0x2990210));
      *pcVar5 = '\x01';
    }
    uStack_50 = 0;
    uStack_54 = 0;
    iVar1 = func_0x02953fd4(0x226,0);
    if (iVar1 == 0) {
      iVar1 = puVar13[5];
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar1 = func_0x04753c80(iVar1,uVar10,**(undefined4 **)(_UNK_02990404 + 0x2990298));
      uVar3 = 0;
      if (iVar1 != 0) {
        iVar1 = puVar13[5];
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x0475399c(iVar1,uVar10,**(undefined4 **)(_UNK_02990408 + 0x29902cc));
        if (iVar1 != 0) {
          iVar1 = puVar13[4];
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x024f2f10(iVar1,0);
          if (iVar1 == 0) {
            iVar1 = puVar13[4];
            if (iVar1 == 0) {
              func_0x014388e4();
            }
            iVar1 = func_0x024f2f20(iVar1,200,0);
            if (iVar1 == 0) {
              return 0;
            }
          }
          puStack_5c = &uStack_50;
          puStack_60 = auStack_58;
          ppuStack_64 = &puStack_4c;
          uStack_68 = 0;
          uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0299040c + 0x2990340));
          func_0x0298fd74(uVar3,uVar10,uVar4);
          iVar1 = puStack_4c[6];
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          func_0x03a39760(iVar1,uVar3,**(undefined4 **)(_UNK_02990410 + 0x299038c));
          func_0x010b8c68(&uStack_68);
          uVar3 = 1;
        }
      }
    }
    else {
      iVar1 = func_0x029540a4(0x226,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uVar3 = func_0x02871898(iVar1,puVar13,uVar10,uVar4,0);
    }
    return uVar3;
  }
  iVar1 = func_0x029540a4(0xcd4,0);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  puStack_30 = (undefined4 *)0x0;
  func_0x024f56c0(&puStack_48,0,0);
  puStack_30 = puStack_48;
  uStack_2c = uStack_44;
  uStack_28 = uStack_40;
  if (*(int *)(iVar1 + 0x10) != 0) {
    func_0x01523a6c(&puStack_30,*(int *)(iVar1 + 0x10),0);
  }
  func_0x01523a6c(&puStack_30,param_1,0);
  iVar8 = *(int *)(iVar1 + 8);
  uVar10 = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  if (iVar8 == 0) {
    func_0x014388e4();
  }
  uVar4 = 2;
  if (iVar1 == 0) {
    uVar4 = 1;
  }
  uStack_50 = 0;
  puStack_4c = (undefined4 *)0x0;
  uVar10 = func_0x024f56d0(iVar8,uVar10,&puStack_30,uVar4);
  return uVar10;
}

