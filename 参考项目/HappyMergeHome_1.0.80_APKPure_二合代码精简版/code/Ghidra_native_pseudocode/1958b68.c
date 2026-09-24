
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01968b68(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_01969324 + 0x1968b84);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_01969328 + 0x1968b98));
    func_0x01438628(*(undefined4 *)(_UNK_0196932c + 0x1968ba4));
    func_0x01438628(*(undefined4 *)(_UNK_01969330 + 0x1968bb0));
    func_0x01438628(*(undefined4 *)(_UNK_01969334 + 0x1968bbc));
    func_0x01438628(*(undefined4 *)(_UNK_01969338 + 0x1968bc8));
    func_0x01438628(*(undefined4 *)(_UNK_0196933c + 0x1968bd4));
    func_0x01438628(*(undefined4 *)(_UNK_01969340 + 0x1968be0));
    func_0x01438628(*(undefined4 *)(_UNK_01969344 + 0x1968bec));
    func_0x01438628(*(undefined4 *)(_UNK_01969348 + 0x1968bf8));
    func_0x01438628(*(undefined4 *)(_UNK_0196934c + 0x1968c04));
    func_0x01438628(*(undefined4 *)(_UNK_01969350 + 0x1968c10));
    func_0x01438628(*(undefined4 *)(_UNK_01969354 + 0x1968c1c));
    func_0x01438628(*(undefined4 *)(_UNK_01969358 + 0x1968c28));
    func_0x01438628(*(undefined4 *)(_UNK_0196935c + 0x1968c34));
    func_0x01438628(*(undefined4 *)(_UNK_01969360 + 0x1968c40));
    func_0x01438628(*(undefined4 *)(_UNK_01969364 + 0x1968c4c));
    func_0x01438628(*(undefined4 *)(_UNK_01969368 + 0x1968c58));
    func_0x01438628(*(undefined4 *)(_UNK_0196936c + 0x1968c64));
    func_0x01438628(*(undefined4 *)(_UNK_01969370 + 0x1968c70));
    func_0x01438628(*(undefined4 *)(_UNK_01969374 + 0x1968c7c));
    func_0x01438628(*(undefined4 *)(_UNK_01969378 + 0x1968c88));
    func_0x01438628(*(undefined4 *)(_UNK_0196937c + 0x1968c94));
    func_0x01438628(*(undefined4 *)(_UNK_01969380 + 0x1968ca0));
    func_0x01438628(*(undefined4 *)(_UNK_01969384 + 0x1968cac));
    func_0x01438628(*(undefined4 *)(_UNK_01969388 + 0x1968cb8));
    func_0x01438628(*(undefined4 *)(_UNK_0196938c + 0x1968cc4));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x98de,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_01969390 + 0x1968d28));
    func_0x019719ec(iVar1,0);
    iVar3 = FUN_019600b0(param_1);
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
    iVar3 = func_0x024f1110(iVar3,uVar2,**(undefined4 **)(_UNK_01969394 + 0x1968d80));
    if (iVar3 == 0) {
      iVar3 = FUN_019600b0(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f1120(iVar3,uVar2,1,**(undefined4 **)(_UNK_01969398 + 0x1968dd0));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0196939c + 0x1968de4));
      func_0x024eed9c(iVar3,**(undefined4 **)(_UNK_019693a0 + 0x1968df8));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar3 = FUN_01961234(param_1);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x024f064c(iVar3,uVar2,&iStack_28,**(undefined4 **)(_UNK_019693a4 + 0x1968e54));
      iVar3 = iStack_28;
      if (iStack_28 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x10) != 0) {
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_019693a8 + 0x1968e88);
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
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_019693ac + 0x1968f28));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar9 + 8);
          uVar11 = *(uint *)(iVar9 + 0xc);
          piVar7 = *(int **)(_UNK_019693b0 + 0x1968f78);
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
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_019693b4 + 0x1968fd8));
      func_0x024f1124(iVar3,**(undefined4 **)(_UNK_019693b8 + 0x1968fec));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar3;
      func_0x014385cc(piVar7,iVar3);
      iVar3 = *(int *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar3 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_019693bc + 0x1969030) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = FUN_0195dd1c();
        if (iVar3 != 0) {
          func_0x01972d08(iVar3,0);
        }
        if (*(int *)(**(int **)(_UNK_019693c0 + 0x1969060) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e9518(**(undefined4 **)(_UNK_019693c4 + 0x1969080));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar3,0,0);
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_019693c8 + 0x19690b8);
        piVar13 = *(int **)(_UNK_019693cc + 0x19690c0);
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
          func_0x020257a4(iVar10,0x336,uVar2,uVar4,0,0,0);
          iVar3 = iVar3 + 1;
        }
        if (*(int *)(**(int **)(_UNK_019693d0 + 0x196921c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x014e96a8(**(undefined4 **)(_UNK_019693d4 + 0x1969238));
        iVar9 = *piVar14;
        if (*(int *)(**(int **)(_UNK_019693d8 + 0x196924c) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = func_0x014e9518(**(undefined4 **)(_UNK_019693dc + 0x196926c));
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar10 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_019693e0 + 0x196928c));
        func_0x0152e3ec(uVar2,iVar1,**(undefined4 **)(_UNK_019693e4 + 0x19692ac),0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar3,iVar9,uVar4,1,0x118,0,0,0,0,0,0,0,uVar2,0,0);
        iVar1 = *piVar7;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar1 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_019693e8 + 0x19691b4);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_019693ec + 0x19691d0);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_019693f0 + 0x19691e4));
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
    iVar1 = func_0x029540a4(0x98de,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

