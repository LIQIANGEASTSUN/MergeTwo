
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_032ae2b0(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_032aea6c + 0x32ae2cc);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_032aea70 + 0x32ae2e0));
    func_0x01438628(*(undefined4 *)(_UNK_032aea74 + 0x32ae2ec));
    func_0x01438628(*(undefined4 *)(_UNK_032aea78 + 0x32ae2f8));
    func_0x01438628(*(undefined4 *)(_UNK_032aea7c + 0x32ae304));
    func_0x01438628(*(undefined4 *)(_UNK_032aea80 + 0x32ae310));
    func_0x01438628(*(undefined4 *)(_UNK_032aea84 + 0x32ae31c));
    func_0x01438628(*(undefined4 *)(_UNK_032aea88 + 0x32ae328));
    func_0x01438628(*(undefined4 *)(_UNK_032aea8c + 0x32ae334));
    func_0x01438628(*(undefined4 *)(_UNK_032aea90 + 0x32ae340));
    func_0x01438628(*(undefined4 *)(_UNK_032aea94 + 0x32ae34c));
    func_0x01438628(*(undefined4 *)(_UNK_032aea98 + 0x32ae358));
    func_0x01438628(*(undefined4 *)(_UNK_032aea9c + 0x32ae364));
    func_0x01438628(*(undefined4 *)(_UNK_032aeaa0 + 0x32ae370));
    func_0x01438628(*(undefined4 *)(_UNK_032aeaa4 + 0x32ae37c));
    func_0x01438628(*(undefined4 *)(_UNK_032aeaa8 + 0x32ae388));
    func_0x01438628(*(undefined4 *)(_UNK_032aeaac + 0x32ae394));
    func_0x01438628(*(undefined4 *)(_UNK_032aeab0 + 0x32ae3a0));
    func_0x01438628(*(undefined4 *)(_UNK_032aeab4 + 0x32ae3ac));
    func_0x01438628(*(undefined4 *)(_UNK_032aeab8 + 0x32ae3b8));
    func_0x01438628(*(undefined4 *)(_UNK_032aeabc + 0x32ae3c4));
    func_0x01438628(*(undefined4 *)(_UNK_032aeac0 + 0x32ae3d0));
    func_0x01438628(*(undefined4 *)(_UNK_032aeac4 + 0x32ae3dc));
    func_0x01438628(*(undefined4 *)(_UNK_032aeac8 + 0x32ae3e8));
    func_0x01438628(*(undefined4 *)(_UNK_032aeacc + 0x32ae3f4));
    func_0x01438628(*(undefined4 *)(_UNK_032aead0 + 0x32ae400));
    func_0x01438628(*(undefined4 *)(_UNK_032aead4 + 0x32ae40c));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x828a,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_032aead8 + 0x32ae470));
    func_0x032b6bb0(iVar1,0);
    iVar3 = FUN_032a7be8(param_1);
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
    iVar3 = func_0x046b50c0(iVar3,uVar2,**(undefined4 **)(_UNK_032aeadc + 0x32ae4c8));
    if (iVar3 == 0) {
      iVar3 = FUN_032a7be8(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x03b70700(iVar3,uVar2,1,**(undefined4 **)(_UNK_032aeae0 + 0x32ae518));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_032aeae4 + 0x32ae52c));
      func_0x04cfd1b4(iVar3,**(undefined4 **)(_UNK_032aeae8 + 0x32ae540));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar3 = FUN_032a87cc(param_1);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x046ce3e4(iVar3,uVar2,&iStack_28,**(undefined4 **)(_UNK_032aeaec + 0x32ae59c));
      iVar3 = iStack_28;
      if (iStack_28 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x10) != 0) {
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_032aeaf0 + 0x32ae5d0);
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
          uVar2 = func_0x04cd26d0(iVar10,iVar3,*puVar12);
          iVar10 = iStack_28;
          if (iStack_28 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar10 + 0x14);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          uVar4 = func_0x04cd26d0(iVar10,iVar3,*puVar12);
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_032aeaf4 + 0x32ae670));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar9 + 8);
          uVar11 = *(uint *)(iVar9 + 0xc);
          piVar7 = *(int **)(_UNK_032aeaf8 + 0x32ae6c0);
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
            func_0x04cfda38(iVar9,uVar5,
                            *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x10) + 0x60) + 0x38));
          }
          iVar3 = iVar3 + 1;
        }
      }
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_032aeafc + 0x32ae720));
      func_0x03bbd054(iVar3,**(undefined4 **)(_UNK_032aeb00 + 0x32ae734));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar3;
      func_0x014385cc(piVar7,iVar3);
      iVar3 = *(int *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar3 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_032aeb04 + 0x32ae778) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = FUN_032a7050();
        if (iVar3 != 0) {
          func_0x032c904c(iVar3,0);
        }
        if (*(int *)(**(int **)(_UNK_032aeb08 + 0x32ae7a8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_032aeb0c + 0x32ae7c8));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar3,0,0);
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_032aeb10 + 0x32ae800);
        piVar13 = *(int **)(_UNK_032aeb14 + 0x32ae808);
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
          iVar9 = func_0x04cfd760(iVar9,iVar3,*puVar12);
          if (*(int *)(*piVar13 + 0x74) == 0) {
            func_0x014387a4();
          }
          iVar10 = func_0x0202346c(0);
          if (iVar9 == 0) {
            func_0x014388e4();
            uVar2 = func_0x0515c4b0(8,0);
            func_0x014388e4();
          }
          else {
            uVar2 = func_0x0515c4b0(iVar9 + 8,0);
          }
          uVar4 = func_0x0515c4b0(iVar9 + 0xc,0);
          if (iVar10 == 0) {
            func_0x014388e4();
          }
          func_0x020257a4(iVar10,0x220,uVar2,uVar4,0,0,0);
          iVar3 = iVar3 + 1;
        }
        if (*(int *)(**(int **)(_UNK_032aeb18 + 0x32ae964) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x03b2c734(**(undefined4 **)(_UNK_032aeb1c + 0x32ae980));
        iVar9 = *piVar14;
        if (*(int *)(**(int **)(_UNK_032aeb20 + 0x32ae994) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = func_0x04e4a028(**(undefined4 **)(_UNK_032aeb24 + 0x32ae9b4));
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar10 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_032aeb28 + 0x32ae9d4));
        func_0x05096384(uVar2,iVar1,**(undefined4 **)(_UNK_032aeb2c + 0x32ae9f4),0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar3,iVar9,uVar4,1,0x69,0,0,0,0,0,0,0,uVar2,0,0);
        iVar1 = *piVar7;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar1 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_032aeb30 + 0x32ae8fc);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_032aeb34 + 0x32ae918);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_032aeb38 + 0x32ae92c));
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
    iVar1 = func_0x029540a4(0x828a,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

