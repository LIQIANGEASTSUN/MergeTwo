
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0184330c(undefined4 param_1,int param_2)

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
  int iStack_28;
  
  pcVar8 = (char *)(_UNK_01843ac8 + 0x1843328);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01843acc + 0x184333c));
    func_0x01438628(*(undefined4 *)(_UNK_01843ad0 + 0x1843348));
    func_0x01438628(*(undefined4 *)(_UNK_01843ad4 + 0x1843354));
    func_0x01438628(*(undefined4 *)(_UNK_01843ad8 + 0x1843360));
    func_0x01438628(*(undefined4 *)(_UNK_01843adc + 0x184336c));
    func_0x01438628(*(undefined4 *)(_UNK_01843ae0 + 0x1843378));
    func_0x01438628(*(undefined4 *)(_UNK_01843ae4 + 0x1843384));
    func_0x01438628(*(undefined4 *)(_UNK_01843ae8 + 0x1843390));
    func_0x01438628(*(undefined4 *)(_UNK_01843aec + 0x184339c));
    func_0x01438628(*(undefined4 *)(_UNK_01843af0 + 0x18433a8));
    func_0x01438628(*(undefined4 *)(_UNK_01843af4 + 0x18433b4));
    func_0x01438628(*(undefined4 *)(_UNK_01843af8 + 0x18433c0));
    func_0x01438628(*(undefined4 *)(_UNK_01843afc + 0x18433cc));
    func_0x01438628(*(undefined4 *)(_UNK_01843b00 + 0x18433d8));
    func_0x01438628(*(undefined4 *)(_UNK_01843b04 + 0x18433e4));
    func_0x01438628(*(undefined4 *)(_UNK_01843b08 + 0x18433f0));
    func_0x01438628(*(undefined4 *)(_UNK_01843b0c + 0x18433fc));
    func_0x01438628(*(undefined4 *)(_UNK_01843b10 + 0x1843408));
    func_0x01438628(*(undefined4 *)(_UNK_01843b14 + 0x1843414));
    func_0x01438628(*(undefined4 *)(_UNK_01843b18 + 0x1843420));
    func_0x01438628(*(undefined4 *)(_UNK_01843b1c + 0x184342c));
    func_0x01438628(*(undefined4 *)(_UNK_01843b20 + 0x1843438));
    func_0x01438628(*(undefined4 *)(_UNK_01843b24 + 0x1843444));
    func_0x01438628(*(undefined4 *)(_UNK_01843b28 + 0x1843450));
    func_0x01438628(*(undefined4 *)(_UNK_01843b2c + 0x184345c));
    func_0x01438628(*(undefined4 *)(_UNK_01843b30 + 0x1843468));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x9203,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01843b34 + 0x18434cc));
    func_0x0184b6bc(iVar1,0);
    iVar3 = FUN_0183a850(param_1);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = *(int *)(iVar3 + 0x44);
    if (param_2 == 0) {
      func_0x014388e4();
    }
    uVar2 = *(undefined4 *)(param_2 + 8);
    if (iVar3 == 0) {
      func_0x014388e4();
    }
    iVar3 = func_0x024f1110(iVar3,uVar2,**(undefined4 **)(_UNK_01843b38 + 0x1843524));
    if (iVar3 == 0) {
      iVar3 = FUN_0183a850(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f1120(iVar3,uVar2,1,**(undefined4 **)(_UNK_01843b3c + 0x1843574));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01843b40 + 0x1843588));
      func_0x024eed9c(iVar3,**(undefined4 **)(_UNK_01843b44 + 0x184359c));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar3 = FUN_0183b9d4(param_1);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f064c(iVar3,uVar2,&iStack_28,**(undefined4 **)(_UNK_01843b48 + 0x18435f8));
      iVar3 = iStack_28;
      if (iStack_28 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x10) != 0) {
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_01843b4c + 0x184362c);
        while( true ) {
          iVar9 = iStack_28;
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          iVar9 = *(int *)(iVar9 + 0x10);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar10 = iStack_28;
          if (*(int *)(iVar9 + 0xc) <= iVar3) break;
          iVar9 = *piVar14;
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 0x10);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar2 = func_0x024f0530(iVar10,iVar3,*puVar12);
          iVar10 = iStack_28;
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 0x14);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x024f0530(iVar10,iVar3,*puVar12);
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_01843b50 + 0x18436cc));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar9 + 8);
          uVar11 = *(uint *)(iVar9 + 0xc);
          piVar7 = *(int **)(_UNK_01843b54 + 0x184371c);
          *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
          iVar15 = *piVar7;
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          if (uVar11 < *(uint *)(iVar10 + 0xc)) {
            *(uint *)(iVar9 + 0xc) = uVar11 + 1;
            puVar6 = (undefined4 *)(iVar10 + uVar11 * 4 + 0x10);
            *puVar6 = uVar5;
            func_0x014385cc(puVar6,uVar5);
          }
          else {
            func_0x0152874c(iVar9,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
          }
          iVar3 = iVar3 + 1;
        }
      }
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01843b58 + 0x184377c));
      func_0x024f1124(iVar3,**(undefined4 **)(_UNK_01843b5c + 0x1843790));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar3;
      func_0x014385cc(piVar7,iVar3);
      iVar3 = *(int *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar3 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_01843b60 + 0x18437d4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = FUN_018386ac();
        if (iVar3 != 0) {
          func_0x0184c9c8(iVar3,0);
        }
        if (*(int *)(**(int **)(_UNK_01843b64 + 0x1843804) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_01843b68 + 0x1843824));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar3,0,0);
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_01843b6c + 0x184385c);
        piVar13 = *(int **)(_UNK_01843b70 + 0x1843864);
        while( true ) {
          iVar9 = *piVar14;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          if (*(int *)(iVar9 + 0xc) <= iVar3) break;
          iVar9 = *piVar14;
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar9 = func_0x0152983c(iVar9,iVar3,*puVar12);
          if (*(int *)(*piVar13 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar10 = func_0x0202346c(0);
          if (iVar9 == 0) {
            func_0x014388e4();
            uVar2 = func_0x01524ffc(8,0);
            func_0x014388e4();
          }
          else {
            uVar2 = func_0x01524ffc(iVar9 + 8,0);
          }
          uVar4 = func_0x01524ffc(iVar9 + 0xc,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar10,0x2a7,uVar2,uVar4,0,0,0);
          iVar3 = iVar3 + 1;
        }
        if (*(int *)(**(int **)(_UNK_01843b74 + 0x18439c0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e96a8(**(undefined4 **)(_UNK_01843b78 + 0x18439dc));
        iVar9 = *piVar14;
        if (*(int *)(**(int **)(_UNK_01843b7c + 0x18439f0) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = func_0x014e9518(**(undefined4 **)(_UNK_01843b80 + 0x1843a10));
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar10 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_01843b84 + 0x1843a30));
        func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_01843b88 + 0x1843a50),0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar3,iVar9,uVar4,1,0xc0,0,0,0,0,0,0,0,uVar2,0,0);
        iVar1 = *piVar7;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar1 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_01843b8c + 0x1843958);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_01843b90 + 0x1843974);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_01843b94 + 0x1843988));
      *pcVar8 = '\x01';
    }
    iVar1 = *piVar14;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar14;
    }
    uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x18);
  }
  else {
    iVar1 = func_0x029540a4(0x9203,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

