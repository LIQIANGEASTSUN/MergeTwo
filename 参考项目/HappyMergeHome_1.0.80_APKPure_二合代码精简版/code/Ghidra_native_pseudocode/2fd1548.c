
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_02fe1548(int param_1)

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
  pcVar8 = (char *)(_UNK_02fd8eac + 0x2fd870c);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_02fd8eb0 + 0x2fd8720),iVar10,0);
    func_0x01438628(*(undefined4 *)(_UNK_02fd8eb4 + 0x2fd872c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8eb8 + 0x2fd8738));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8ebc + 0x2fd8744));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8ec0 + 0x2fd8750));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8ec4 + 0x2fd875c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8ec8 + 0x2fd8768));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8ecc + 0x2fd8774));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8ed0 + 0x2fd8780));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8ed4 + 0x2fd878c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8ed8 + 0x2fd8798));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8edc + 0x2fd87a4));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8ee0 + 0x2fd87b0));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8ee4 + 0x2fd87bc));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8ee8 + 0x2fd87c8));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8eec + 0x2fd87d4));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8ef0 + 0x2fd87e0));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8ef4 + 0x2fd87ec));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8ef8 + 0x2fd87f8));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8efc + 0x2fd8804));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8f00 + 0x2fd8810));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8f04 + 0x2fd881c));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8f08 + 0x2fd8828));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8f0c + 0x2fd8834));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8f10 + 0x2fd8840));
    func_0x01438628(*(undefined4 *)(_UNK_02fd8f14 + 0x2fd884c));
    *pcVar8 = '\x01';
  }
  aiStack_28[0] = 0;
  iVar1 = func_0x02953fd4(0x70c3,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_02fd8f18 + 0x2fd88b0));
    func_0x02fe1574(iVar1,0);
    iVar3 = FUN_02fcfc38(iVar9);
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
    iVar3 = func_0x046b50c0(iVar3,uVar2,**(undefined4 **)(_UNK_02fd8f1c + 0x2fd8908));
    if (iVar3 == 0) {
      iVar3 = FUN_02fcfc38(iVar9);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x03b70700(iVar3,uVar2,1,**(undefined4 **)(_UNK_02fd8f20 + 0x2fd8958));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_02fd8f24 + 0x2fd896c));
      func_0x04cfd1b4(iVar3,**(undefined4 **)(_UNK_02fd8f28 + 0x2fd8980));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar9 = FUN_02fd0dbc(iVar9);
      uVar2 = *(undefined4 *)(iVar10 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      func_0x046ce3e4(iVar9,uVar2,aiStack_28,**(undefined4 **)(_UNK_02fd8f2c + 0x2fd89dc));
      iVar9 = aiStack_28[0];
      if (aiStack_28[0] == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar9 + 0x10) != 0) {
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_02fd8f30 + 0x2fd8a10);
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
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_02fd8f34 + 0x2fd8ab0));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          iVar3 = *(int *)(iVar10 + 8);
          uVar11 = *(uint *)(iVar10 + 0xc);
          piVar7 = *(int **)(_UNK_02fd8f38 + 0x2fd8b00);
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
      iVar9 = func_0x014388d4(**(undefined4 **)(_UNK_02fd8f3c + 0x2fd8b60));
      func_0x03bbd054(iVar9,**(undefined4 **)(_UNK_02fd8f40 + 0x2fd8b74));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar9;
      func_0x014385cc(piVar7,iVar9);
      iVar9 = *(int *)(iVar1 + 8);
      if (iVar9 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar9 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_02fd8f44 + 0x2fd8bb8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = FUN_02fcd8a4();
        if (iVar9 != 0) {
          func_0x02fe2890(iVar9,0);
        }
        if (*(int *)(**(int **)(_UNK_02fd8f48 + 0x2fd8be8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd8f4c + 0x2fd8c08));
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar9,0,0);
        iVar9 = 0;
        puVar12 = *(undefined4 **)(_UNK_02fd8f50 + 0x2fd8c40);
        piVar13 = *(int **)(_UNK_02fd8f54 + 0x2fd8c48);
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
          func_0x020257a4(iVar3,0x313,uVar2,uVar4,0,0,0);
          iVar9 = iVar9 + 1;
        }
        if (*(int *)(**(int **)(_UNK_02fd8f58 + 0x2fd8da4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar9 = func_0x03b2c734(**(undefined4 **)(_UNK_02fd8f5c + 0x2fd8dc0));
        iVar10 = *piVar14;
        if (*(int *)(**(int **)(_UNK_02fd8f60 + 0x2fd8dd4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_02fd8f64 + 0x2fd8df4));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar3 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_02fd8f68 + 0x2fd8e14));
        func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_02fd8f6c + 0x2fd8e34),0);
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar9,iVar10,uVar4,1,0x103,0,0,0,0,0,0,0,uVar2,0,0);
        iVar9 = *piVar7;
        if (iVar9 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar9 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_02fd8f70 + 0x2fd8d3c);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_02fd8f74 + 0x2fd8d58);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_02fd8f78 + 0x2fd8d6c));
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
    iVar1 = func_0x029540a4(0x70c3,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,iVar9,iVar10,0);
  }
  return uVar2;
}

