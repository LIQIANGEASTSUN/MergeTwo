
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_030da800(undefined4 param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_030dafbc + 0x30da81c);
  if (*pcVar8 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_030dafc0 + 0x30da830));
    func_0x01438628(*(undefined4 *)(_UNK_030dafc4 + 0x30da83c));
    func_0x01438628(*(undefined4 *)(_UNK_030dafc8 + 0x30da848));
    func_0x01438628(*(undefined4 *)(_UNK_030dafcc + 0x30da854));
    func_0x01438628(*(undefined4 *)(_UNK_030dafd0 + 0x30da860));
    func_0x01438628(*(undefined4 *)(_UNK_030dafd4 + 0x30da86c));
    func_0x01438628(*(undefined4 *)(_UNK_030dafd8 + 0x30da878));
    func_0x01438628(*(undefined4 *)(_UNK_030dafdc + 0x30da884));
    func_0x01438628(*(undefined4 *)(_UNK_030dafe0 + 0x30da890));
    func_0x01438628(*(undefined4 *)(_UNK_030dafe4 + 0x30da89c));
    func_0x01438628(*(undefined4 *)(_UNK_030dafe8 + 0x30da8a8));
    func_0x01438628(*(undefined4 *)(_UNK_030dafec + 0x30da8b4));
    func_0x01438628(*(undefined4 *)(_UNK_030daff0 + 0x30da8c0));
    func_0x01438628(*(undefined4 *)(_UNK_030daff4 + 0x30da8cc));
    func_0x01438628(*(undefined4 *)(_UNK_030daff8 + 0x30da8d8));
    func_0x01438628(*(undefined4 *)(_UNK_030daffc + 0x30da8e4));
    func_0x01438628(*(undefined4 *)(_UNK_030db000 + 0x30da8f0));
    func_0x01438628(*(undefined4 *)(_UNK_030db004 + 0x30da8fc));
    func_0x01438628(*(undefined4 *)(_UNK_030db008 + 0x30da908));
    func_0x01438628(*(undefined4 *)(_UNK_030db00c + 0x30da914));
    func_0x01438628(*(undefined4 *)(_UNK_030db010 + 0x30da920));
    func_0x01438628(*(undefined4 *)(_UNK_030db014 + 0x30da92c));
    func_0x01438628(*(undefined4 *)(_UNK_030db018 + 0x30da938));
    func_0x01438628(*(undefined4 *)(_UNK_030db01c + 0x30da944));
    func_0x01438628(*(undefined4 *)(_UNK_030db020 + 0x30da950));
    func_0x01438628(*(undefined4 *)(_UNK_030db024 + 0x30da95c));
    *pcVar8 = '\x01';
  }
  iStack_28 = 0;
  iVar1 = func_0x02953fd4(0x76e7,0);
  if (iVar1 == 0) {
    iVar1 = func_0x014388d4(**(undefined4 **)(_UNK_030db028 + 0x30da9c0));
    func_0x030e4114(iVar1,0);
    iVar3 = FUN_030d2ca4(param_1);
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
    iVar3 = func_0x046b50c0(iVar3,uVar2,**(undefined4 **)(_UNK_030db02c + 0x30daa18));
    if (iVar3 == 0) {
      iVar3 = FUN_030d2ca4(param_1);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      iVar3 = *(int *)(iVar3 + 0x44);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x03b70700(iVar3,uVar2,1,**(undefined4 **)(_UNK_030db030 + 0x30daa68));
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_030db034 + 0x30daa7c));
      func_0x04cfd1b4(iVar3,**(undefined4 **)(_UNK_030db038 + 0x30daa90));
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      piVar14 = (int *)(iVar1 + 8);
      *piVar14 = iVar3;
      func_0x014385cc(piVar14,iVar3);
      iVar3 = FUN_030d3e28(param_1);
      uVar2 = *(undefined4 *)(param_2 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      func_0x046ce3e4(iVar3,uVar2,&iStack_28,**(undefined4 **)(_UNK_030db03c + 0x30daaec));
      iVar3 = iStack_28;
      if (iStack_28 == 0) {
        func_0x014388e4();
      }
      if (*(int *)(iVar3 + 0x10) != 0) {
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_030db040 + 0x30dab20);
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
          uVar5 = func_0x014388d4(**(undefined4 **)(_UNK_030db044 + 0x30dabc0));
          func_0x02ca3c70(uVar5,uVar2,uVar4,0,0);
          if (iVar9 == 0) {
            func_0x014388e4();
          }
          iVar10 = *(int *)(iVar9 + 8);
          uVar11 = *(uint *)(iVar9 + 0xc);
          piVar7 = *(int **)(_UNK_030db048 + 0x30dac10);
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
      iVar3 = func_0x014388d4(**(undefined4 **)(_UNK_030db04c + 0x30dac70));
      func_0x03bbd054(iVar3,**(undefined4 **)(_UNK_030db050 + 0x30dac84));
      piVar7 = (int *)(iVar1 + 0xc);
      *piVar7 = iVar3;
      func_0x014385cc(piVar7,iVar3);
      iVar3 = *(int *)(iVar1 + 8);
      if (iVar3 == 0) {
        func_0x014388e4();
      }
      if (0 < *(int *)(iVar3 + 0xc)) {
        if (*(int *)(**(int **)(_UNK_030db054 + 0x30dacc8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = FUN_030d18ac();
        if (iVar3 != 0) {
          func_0x030e547c(iVar3,0);
        }
        if (*(int *)(**(int **)(_UNK_030db058 + 0x30dacf8) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x04e4a028(**(undefined4 **)(_UNK_030db05c + 0x30dad18));
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02bb3638(iVar3,0,0);
        iVar3 = 0;
        puVar12 = *(undefined4 **)(_UNK_030db060 + 0x30dad50);
        piVar13 = *(int **)(_UNK_030db064 + 0x30dad58);
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
          func_0x020257a4(iVar10,0x2fb,uVar2,uVar4,0,0,0);
          iVar3 = iVar3 + 1;
        }
        if (*(int *)(**(int **)(_UNK_030db068 + 0x30daeb4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar3 = func_0x03b2c734(**(undefined4 **)(_UNK_030db06c + 0x30daed0));
        iVar9 = *piVar14;
        if (*(int *)(**(int **)(_UNK_030db070 + 0x30daee4) + 0x74) == 0) {
          func_0x014387a4();
        }
        iVar10 = func_0x04e4a028(**(undefined4 **)(_UNK_030db074 + 0x30daf04));
        if (iVar10 == 0) {
          func_0x014388e4();
        }
        uVar4 = *(undefined4 *)(iVar10 + 0x10);
        uVar2 = func_0x014388d4(**(undefined4 **)(_UNK_030db078 + 0x30daf24));
        func_0x05096384(uVar2,iVar1,**(undefined4 **)(_UNK_030db07c + 0x30daf44),0);
        if (iVar3 == 0) {
          func_0x014388e4();
        }
        func_0x02b75870(iVar3,iVar9,uVar4,1,0xf3,0,0,0,0,0,0,0,uVar2,0,0);
        iVar1 = *piVar7;
        if (iVar1 == 0) {
          func_0x014388e4();
        }
        return *(undefined4 *)(iVar1 + 8);
      }
    }
    piVar14 = *(int **)(_UNK_030db080 + 0x30dae4c);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      func_0x014387a4();
    }
    pcVar8 = (char *)(_UNK_030db084 + 0x30dae68);
    if (*pcVar8 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_030db088 + 0x30dae7c));
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
    iVar1 = func_0x029540a4(0x76e7,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    uVar2 = func_0x02884efc(iVar1,param_1,param_2,0);
  }
  return uVar2;
}

