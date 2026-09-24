
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_031565cc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int aiStack_28 [3];
  
  iVar9 = *(int *)(param_1 + 8);
  iVar10 = *(int *)(param_1 + 0xc);
  if (iVar9 == 0) {
    func_0x014388e4();
  }
  pcVar8 = (char *)(_UNK_0314ea68 + 0x314e2c8);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_0314ea6c + 0x314e2dc),iVar10,0);
    func_0x01438628(*(undefined4 *)(_UNK_0314ea70 + 0x314e2e8));
    func_0x01438628(*(undefined4 *)(_UNK_0314ea74 + 0x314e2f4));
    func_0x01438628(*(undefined4 *)(_UNK_0314ea78 + 0x314e300));
    func_0x01438628(*(undefined4 *)(_UNK_0314ea7c + 0x314e30c));
    func_0x01438628(*(undefined4 *)(_UNK_0314ea80 + 0x314e318));
    func_0x01438628(*(undefined4 *)(_UNK_0314ea84 + 0x314e324));
    func_0x01438628(*(undefined4 *)(_UNK_0314ea88 + 0x314e330));
    func_0x01438628(*(undefined4 *)(_UNK_0314ea8c + 0x314e33c));
    func_0x01438628(*(undefined4 *)(_UNK_0314ea90 + 0x314e348));
    func_0x01438628(*(undefined4 *)(_UNK_0314ea94 + 0x314e354));
    func_0x01438628(*(undefined4 *)(_UNK_0314ea98 + 0x314e360));
    func_0x01438628(*(undefined4 *)(_UNK_0314ea9c + 0x314e36c));
    func_0x01438628(*(undefined4 *)(_UNK_0314eaa0 + 0x314e378));
    func_0x01438628(*(undefined4 *)(_UNK_0314eaa4 + 0x314e384));
    func_0x01438628(*(undefined4 *)(_UNK_0314eaa8 + 0x314e390));
    func_0x01438628(*(undefined4 *)(_UNK_0314eaac + 0x314e39c));
    func_0x01438628(*(undefined4 *)(_UNK_0314eab0 + 0x314e3a8));
    func_0x01438628(*(undefined4 *)(_UNK_0314eab4 + 0x314e3b4));
    func_0x01438628(*(undefined4 *)(_UNK_0314eab8 + 0x314e3c0));
    func_0x01438628(*(undefined4 *)(_UNK_0314eabc + 0x314e3cc));
    func_0x01438628(*(undefined4 *)(_UNK_0314eac0 + 0x314e3d8));
    func_0x01438628(*(undefined4 *)(_UNK_0314eac4 + 0x314e3e4));
    func_0x01438628(*(undefined4 *)(_UNK_0314eac8 + 0x314e3f0));
    func_0x01438628(*(undefined4 *)(_UNK_0314eacc + 0x314e3fc));
    func_0x01438628(*(undefined4 *)(_UNK_0314ead0 + 0x314e408));
    *pcVar8 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar1 = func_0x02953fd4(0x79d8,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_0314ead4 + 0x314e46c));
    func_0x031565f8(iVar1,0);
    iVar3 = FUN_031457fc(iVar9);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x44);
    if (iVar10 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(iVar10 + 8);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x046b50c0(iVar3,uVar2,**(undefined4 **)(_UNK_0314ead8 + 0x314e4c4));
    if (iVar3 == 0) {
      iVar3 = FUN_031457fc(iVar9);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x03b70700(iVar3,uVar2,1,**(undefined4 **)(_UNK_0314eadc + 0x314e514));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0314eae0 + 0x314e528));
      func_0x04cfd1b4(iVar3,**(undefined4 **)(_UNK_0314eae4 + 0x314e53c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar9 = FUN_03146980(iVar9);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x046ce3e4(iVar9,uVar2,aiStack_28,**(undefined4 **)(_UNK_0314eae8 + 0x314e598));
      iVar9 = aiStack_28[0];
      if (aiStack_28[0] == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0x10) != 0) {
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_0314eaec + 0x314e5cc);
        while( true ) {
          iVar10 = aiStack_28[0];
          if (aiStack_28[0] == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 0x10);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = aiStack_28[0];
          if (*(int *)(iVar10 + 0xc) <= iVar9) break;
          iVar10 = *piVar14;
          if (aiStack_28[0] == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x10);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar2 = func_0x04cd26d0(iVar3,iVar9,*puVar12);
          iVar3 = aiStack_28[0];
          if (aiStack_28[0] == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar3 + 0x14);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x04cd26d0(iVar3,iVar9,*puVar12);
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_0314eaf0 + 0x314e66c));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar10 + 8);
          uVar11 = *(uint *)(iVar10 + 0xc);
          piVar7 = *(int **)(_UNK_0314eaf4 + 0x314e6bc);
          *(int *)(iVar10 + 0x10) = *(int *)(iVar10 + 0x10) + 1;
          iVar15 = *piVar7;
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          if (uVar11 < *(uint *)(iVar3 + 0xc)) {
            *(uint *)(iVar10 + 0xc) = uVar11 + 1;
            puVar6 = (undefined4 *)(iVar3 + uVar11 * 4 + 0x10);
            *puVar6 = uVar5;
            func_0x014385cc(puVar6,uVar5);
          }
          else {
            func_0x04cfda38(iVar10,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
          }
          iVar9 = iVar9 + 1;
        }
      }
      iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_0314eaf8 + 0x314e71c));
      func_0x03bbd054(iVar9,**(undefined4 **)(_UNK_0314eafc + 0x314e730));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar9;
      func_0x014385cc(piVar7,iVar9);
      iVar9 = *(int *)(iVar1 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar9 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_0314eb00 + 0x314e774) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = FUN_03143658();
        if (iVar9 != 0) {
          func_0x03157904(iVar9,0);
        }
        if (*(int *)(**(int **)(_UNK_0314eb04 + 0x314e7a4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x04e4a028(**(undefined4 **)(_UNK_0314eb08 + 0x314e7c4));
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar9,0,0);
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_0314eb0c + 0x314e7fc);
        piVar13 = *(int **)(_UNK_0314eb10 + 0x314e804);
        while( true ) {
          iVar10 = *piVar14;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar10 + 0xc) <= iVar9) break;
          iVar10 = *piVar14;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar10 = func_0x04cfd760(iVar10,iVar9,*puVar12);
          if (*(int *)(*piVar13 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar3 = func_0x0202346c(0);
          if (iVar10 == 0) {
            func_0x014388e4();
            uVar2 = func_0x01524ffc(8,0);
            func_0x014388e4();
          }
          else {
            uVar2 = func_0x01524ffc(iVar10 + 8,0);
          }
          uVar4 = func_0x01524ffc(iVar10 + 0xc,0);
          if (iVar3 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar3,0x291,uVar2,uVar4,0,0,0);
          iVar9 = iVar9 + 1;
        }
        if (*(int *)(**(int **)(_UNK_0314eb14 + 0x314e960) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x03b2c734(**(undefined4 **)(_UNK_0314eb18 + 0x314e97c));
        iVar10 = *piVar14;
        if (*(int *)(**(int **)(_UNK_0314eb1c + 0x314e990) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_0314eb20 + 0x314e9b0));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar3 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_0314eb24 + 0x314e9d0));
        func_0x05096384(uVar2,iVar1,**(undefined4 **)(_UNK_0314eb28 + 0x314e9f0),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar9,iVar10,uVar4,1,0xb1,0,0,0,0,0,0,0,uVar2,0,0);
        iVar9 = *piVar7;
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar9 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_0314eb2c + 0x314e8f8);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_0314eb30 + 0x314e914);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_0314eb34 + 0x314e928));
      *pcVar8 = '\x01';
    }
    iVar9 = *piVar14;
    if (*(int *)(iVar9 + 0x74) == 0) {
      func_0x014387a4();
      iVar9 = *piVar14;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x18);
  }
  else {
    iVar1 = func_0x029540a4(0x79d8,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,iVar9,iVar10,0);
  }
  return uVar2;
}

