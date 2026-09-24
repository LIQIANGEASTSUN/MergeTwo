
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d3b8e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  float fVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_01d3bd88 + 0x1d3b904);
  if (*pcVar4 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01d3bd8c + 0x1d3b91c));
    func_0x01438628(*(undefined4 *)(_UNK_01d3bd90 + 0x1d3b928));
    func_0x01438628(*(undefined4 *)(_UNK_01d3bd94 + 0x1d3b934));
    func_0x01438628(*(undefined4 *)(_UNK_01d3bd98 + 0x1d3b940));
    func_0x01438628(*(undefined4 *)(_UNK_01d3bd9c + 0x1d3b94c));
    func_0x01438628(*(undefined4 *)(_UNK_01d3bda0 + 0x1d3b958));
    func_0x01438628(*(undefined4 *)(_UNK_01d3bda4 + 0x1d3b964));
    func_0x01438628(*(undefined4 *)(_UNK_01d3bda8 + 0x1d3b970));
    func_0x01438628(*(undefined4 *)(_UNK_01d3bdac + 0x1d3b97c));
    func_0x01438628(*(undefined4 *)(_UNK_01d3bdb0 + 0x1d3b988));
    *pcVar4 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x5e66,0);
  if (iVar1 == 0) {
    iVar1 = FUN_01d39bc4(param_1,0);
    if (iVar1 != 0) {
      fVar2 = (float)func_0x024f1544(0x3f800000,param_5);
      iVar1 = (int)fVar2;
      if (fVar2 == _UNK_01d3bd84) {
        iVar1 = -0x80000000;
      }
      iVar3 = FUN_01d3a9c0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x0269f788(iVar3,*(int *)(iVar3 + 0x3c) + iVar1,0);
      iVar1 = FUN_01d3b6a0(param_1);
      iVar3 = FUN_01d3a9c0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (iVar1 <= *(int *)(iVar3 + 0x3c)) {
        iVar3 = FUN_01d3a9c0(param_1);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x0269f788(iVar3,*(int *)(iVar3 + 0x3c) - iVar1,0);
        iVar1 = **(int **)(**(int **)(_UNK_01d3bdb4 + 0x1d3bab8) + 0x5c);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x02e64460(iVar1,0x3a5,1);
        piVar6 = *(int **)(_UNK_01d3bdb8 + 0x1d3bb1c);
        if (*(int *)(*piVar6 + 0x74) == 0) {
          func_0x014387a4();
        }
        puVar8 = *(undefined4 **)(_UNK_01d3bdbc + 0x1d3bb38);
        iVar1 = func_0x014e9518(*puVar8);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x03579aec(iVar1,**(undefined4 **)(_UNK_01d3bdc4 + 0x1d3bb64),
                                **(undefined4 **)(_UNK_01d3bdc0 + 0x1d3bb58));
        pcVar4 = (char *)(_UNK_01d3bdc8 + 0x1d3bb7c);
        if (*pcVar4 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_01d3bdcc + 0x1d3bb90));
          *pcVar4 = '\x01';
        }
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x014e94d8(iVar1,0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        iVar3 = func_0x024efc2c(iVar3,0);
        if (iVar3 == 0) {
          if (*(int *)(*piVar6 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar1 = func_0x014e9518(*puVar8);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x03579aec(iVar1,**(undefined4 **)(_UNK_01d3bdd4 + 0x1d3bc2c),
                                  **(undefined4 **)(_UNK_01d3bdd0 + 0x1d3bc20));
          if (iVar1 == 0) {
            func_0x014388e4();
          }
        }
        else if (iVar1 == 0) {
          func_0x014388e4();
        }
        iVar1 = func_0x024eecb8(iVar1,0);
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        func_0x024ef228(&uStack_30,iVar1,0);
        pcVar4 = (char *)(_UNK_01d3bdd8 + 0x1d3bc84);
        if (*pcVar4 == '\0') {
          func_0x01438628(*(undefined4 *)(_UNK_01d3bddc + 0x1d3bc98));
          *pcVar4 = '\x01';
        }
        piVar6 = *(int **)(_UNK_01d3bde4 + 0x1d3bcb8);
        puVar8 = *(undefined4 **)(**(int **)(_UNK_01d3bde0 + 0x1d3bcac) + 0x5c);
        iVar1 = *piVar6;
        uVar7 = *puVar8;
        uVar9 = puVar8[1];
        if (*(int *)(iVar1 + 0x74) == 0) {
          func_0x014387a4();
          iVar1 = *piVar6;
        }
        iVar3 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
        if (iVar3 == 0) {
          if (*(int *)(iVar1 + 0x74) == 0) {
            func_0x014387a4();
            iVar1 = *piVar6;
          }
          uVar5 = **(undefined4 **)(iVar1 + 0x5c);
          iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_01d3bde8 + 0x1d3bd08));
          func_0x0152e3ec(iVar3,uVar5,**(undefined4 **)(_UNK_01d3bdec + 0x1d3bd28),0);
          piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 4);
          *piVar6 = iVar3;
          func_0x014385cc(piVar6,iVar3);
        }
        if (param_1 == 0) {
          func_0x014388e4();
        }
        func_0x01d3bdf0(param_1,uVar7,uVar9,uStack_30,uStack_2c,0x3f000000,1,iVar3);
      }
    }
  }
  else {
    iVar1 = func_0x029540a4(0x5e66,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    func_0x028bd544(iVar1,param_1,param_2,param_3,param_4,param_5,0);
  }
  return;
}

