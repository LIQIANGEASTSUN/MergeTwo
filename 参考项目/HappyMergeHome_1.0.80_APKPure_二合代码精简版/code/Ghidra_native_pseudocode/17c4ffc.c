
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_017d4ffc(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *piStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int aiStack_24 [4];
  
  pcVar5 = (char *)(_UNK_017d5080 + 0x17d500c);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017d5084 + 0x17d5020));
    func_0x01438628(*(undefined4 *)(_UNK_017d5088 + 0x17d502c));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_017d508c + 0x17d5040) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar2 = func_0x014e96a8(**(undefined4 **)(_UNK_017d5090 + 0x17d505c));
  if (iVar2 == 0) {
    func_0x014388e4();
  }
  pcVar5 = (char *)(_UNK_017d2868 + 0x17d2610);
  if (*pcVar5 == '\0') {
    func_0x01438628(*(undefined4 *)(_UNK_017d286c + 0x17d2624));
    func_0x01438628(*(undefined4 *)(_UNK_017d2870 + 0x17d2630));
    func_0x01438628(*(undefined4 *)(_UNK_017d2874 + 0x17d263c));
    func_0x01438628(*(undefined4 *)(_UNK_017d2878 + 0x17d2648));
    func_0x01438628(*(undefined4 *)(_UNK_017d287c + 0x17d2654));
    func_0x01438628(*(undefined4 *)(_UNK_017d2880 + 0x17d2660));
    func_0x01438628(*(undefined4 *)(_UNK_017d2884 + 0x17d266c));
    func_0x01438628(*(undefined4 *)(_UNK_017d2888 + 0x17d2678));
    *pcVar5 = '\x01';
  }
  iVar1 = func_0x02953fd4(0x8f84,0);
  if (iVar1 != 0) {
    iVar1 = func_0x029540a4(0x8f84,0);
    if (iVar1 == 0) {
      func_0x014388e4();
    }
    puStack_34 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    puStack_38 = (undefined4 *)0x0;
    uStack_28 = 0;
    func_0x024f56c0(&puStack_50,0,0,0);
    puStack_38 = puStack_50;
    puStack_34 = (undefined4 *)uStack_4c;
    uStack_30 = uStack_48;
    uStack_2c = uStack_44;
    uStack_28 = uStack_40;
    if (*(int *)(iVar1 + 0x10) != 0) {
      func_0x01523a6c(&puStack_38,*(int *)(iVar1 + 0x10),0);
    }
    func_0x01523a6c(&puStack_38,iVar2,0);
    func_0x01523a1c(&puStack_38,0,0);
    iVar6 = *(int *)(iVar1 + 8);
    uVar9 = *(undefined4 *)(iVar1 + 0xc);
    iVar2 = *(int *)(iVar1 + 0x10);
    if (iVar6 == 0) {
      func_0x014388e4();
    }
    uVar4 = 3;
    if (iVar2 == 0) {
      uVar4 = 2;
    }
    iVar2 = func_0x024f56d0(iVar6,uVar9,&puStack_38,uVar4,0,0);
    return iVar2;
  }
  if (*(int *)(**(int **)(_UNK_017d288c + 0x17d26d4) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x014e9518(**(undefined4 **)(_UNK_017d2890 + 0x17d26f0));
  piVar7 = *(int **)(_UNK_017d2894 + 0x17d2704);
  iVar6 = *piVar7;
  if (*(int *)(iVar6 + 0x74) == 0) {
    func_0x014387a4();
    iVar6 = *piVar7;
  }
  uVar9 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0x654);
  if (iVar1 == 0) {
    func_0x014388e4();
  }
  uVar9 = func_0x02b0fc08(iVar1,uVar9,0);
  if (*(int *)(**(int **)(_UNK_017d2898 + 0x17d274c) + 0x74) == 0) {
    func_0x014387a4();
  }
  iVar1 = func_0x024eec50(uVar9,0,0);
  if (iVar1 == 0) {
    func_0x017d28ac(iVar2);
    func_0x017d2c54(iVar2);
    if (*(int *)(**(int **)(_UNK_017d289c + 0x17d2790) + 0x74) == 0) {
      func_0x014387a4();
    }
    iVar2 = func_0x014e9518(**(undefined4 **)(_UNK_017d28a0 + 0x17d27ac));
    piVar7 = *(int **)(_UNK_017d28a4 + 0x17d27c0);
    iVar1 = *piVar7;
    if (*(int *)(iVar1 + 0x74) == 0) {
      func_0x014387a4();
      iVar1 = *piVar7;
    }
    iVar8 = **(int **)(_UNK_017d28a8 + 0x17d27e0);
    iVar6 = *(int *)(iVar8 + 0x1c);
    uVar9 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 800);
    if (iVar6 == 0) {
      func_0x014909d8(iVar8);
      iVar6 = *(int *)(iVar8 + 0x1c);
    }
    iVar1 = *(int *)(iVar6 + 8);
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
    if (iVar2 == 0) {
      func_0x014388e4();
    }
    pcVar5 = (char *)(_UNK_029903f0 + 0x29901d4);
    aiStack_24[0] = iVar2;
    if (*pcVar5 == '\0') {
      func_0x01438628(*(undefined4 *)(_UNK_029903f4 + 0x29901ec),uVar9,uVar4,0);
      func_0x01438628(*(undefined4 *)(_UNK_029903f8 + 0x29901f8));
      func_0x01438628(*(undefined4 *)(_UNK_029903fc + 0x2990204));
      func_0x01438628(*(undefined4 *)(_UNK_02990400 + 0x2990210));
      *pcVar5 = '\x01';
    }
    uStack_28 = 0;
    uStack_2c = 0;
    iVar1 = func_0x02953fd4(0x226,0);
    if (iVar1 == 0) {
      iVar1 = *(int *)(iVar2 + 0x14);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      iVar6 = func_0x04753c80(iVar1,uVar9,**(undefined4 **)(_UNK_02990404 + 0x2990298));
      iVar1 = 0;
      if (iVar6 != 0) {
        iVar6 = *(int *)(iVar2 + 0x14);
        if (iVar6 == 0) {
          func_0x014388e4();
        }
        iVar6 = func_0x0475399c(iVar6,uVar9,**(undefined4 **)(_UNK_02990408 + 0x29902cc));
        if (iVar6 != 0) {
          iVar1 = *(int *)(iVar2 + 0x10);
          if (iVar1 == 0) {
            func_0x014388e4();
          }
          iVar1 = func_0x024f2f10(iVar1,0);
          if (iVar1 == 0) {
            iVar2 = *(int *)(iVar2 + 0x10);
            if (iVar2 == 0) {
              func_0x014388e4();
            }
            iVar2 = func_0x024f2f20(iVar2,200,0);
            if (iVar2 == 0) {
              return 0;
            }
          }
          puStack_34 = &uStack_28;
          puStack_38 = &uStack_30;
          piStack_3c = aiStack_24;
          uStack_40 = 0;
          uVar3 = func_0x014388d4(**(undefined4 **)(_UNK_0299040c + 0x2990340));
          func_0x0298fd74(uVar3,uVar9,uVar4);
          iVar2 = *(int *)(aiStack_24[0] + 0x18);
          if (iVar2 == 0) {
            func_0x014388e4();
          }
          func_0x03a39760(iVar2,uVar3,**(undefined4 **)(_UNK_02990410 + 0x299038c));
          func_0x010b8c68(&uStack_40);
          iVar1 = 1;
        }
      }
    }
    else {
      iVar1 = func_0x029540a4(0x226,0);
      if (iVar1 == 0) {
        func_0x014388e4();
      }
      uStack_48 = 0;
      iVar1 = func_0x02871898(iVar1,iVar2,uVar9,uVar4);
    }
    return iVar1;
  }
  return iVar1;
}

